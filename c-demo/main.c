#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "score.txt"

typedef struct {
    char id[32];
    char name[32];
    double chi, math, eng, comp;
    double total, avg;
} Student;

typedef struct {
    Student *a;
    int n;
    int cap;
} StuList;

static void calc(Student *s) {
    s->total = s->chi + s->math + s->eng + s->comp;
    s->avg = s->total / 4.0;
}

static void ensure_cap(StuList *L) {
    if (L->n < L->cap) return;
    int newCap = (L->cap == 0) ? 16 : L->cap * 2;
    Student *p = (Student*)realloc(L->a, newCap * sizeof(Student));
    if (!p) {
        puts("内存分配失败！");
        exit(1);
    }
    L->a = p;
    L->cap = newCap;
}

static int find_index_by_id(const StuList *L, const char *id) {
    for (int i = 0; i < L->n; i++) {
        if (strcmp(L->a[i].id, id) == 0) return i;
    }
    return -1;
}

static void show_one(const Student *s) {
    printf("%-12s %-12s 语文:%6.1f 数学:%6.1f 英语:%6.1f 综合:%6.1f | 总分:%6.1f 平均:%6.2f\n",
           s->id, s->name, s->chi, s->math, s->eng, s->comp, s->total, s->avg);
}

static void show_all(const StuList *L) {
    if (L->n == 0) {
        puts("暂无数据。");
        return;
    }
    puts("学号         姓名         语文     数学     英语     综合     总分     平均");
    for (int i = 0; i < L->n; i++) {
        const Student *s = &L->a[i];
        printf("%-12s %-12s %7.1f %7.1f %7.1f %7.1f %8.1f %8.2f\n",
               s->id, s->name, s->chi, s->math, s->eng, s->comp, s->total, s->avg);
    }
}

static void load_file(StuList *L) {
    FILE *fp = fopen(FILE_NAME, "r");
    if (!fp) {
        puts("未找到 score.txt，将从空数据开始（保存后会自动生成）。");
        return;
    }

    char line[256];
    int count = 0;
    while (fgets(line, sizeof(line), fp)) {
        // 跳过空行
        char *p = line;
        while (*p == ' ' || *p == '\t') p++;
        if (*p == '\n' || *p == '\0') continue;

        Student s;
        memset(&s, 0, sizeof(s));

        // 兼容 6 列 或 8 列
        // 6列：id name chi math eng comp
        // 8列：再加 total avg（读到也无所谓，重新计算一遍保证一致）
        double totalTmp = 0, avgTmp = 0;
        int k = sscanf(line, "%31s %31s %lf %lf %lf %lf %lf %lf",
                       s.id, s.name, &s.chi, &s.math, &s.eng, &s.comp, &totalTmp, &avgTmp);
        if (k < 6) continue;

        calc(&s);

        // 如果学号重复，覆盖旧记录
        int idx = find_index_by_id(L, s.id);
        if (idx >= 0) {
            L->a[idx] = s;
        } else {
            ensure_cap(L);
            L->a[L->n++] = s;
        }
        count++;
    }

    fclose(fp);
    printf("读取完成：%d 条记录（去重/覆盖后当前 %d 条）。\n", count, L->n);
}

static void save_file(const StuList *L) {
    FILE *fp = fopen(FILE_NAME, "w");
    if (!fp) {
        puts("保存失败：无法写入 score.txt");
        return;
    }
    for (int i = 0; i < L->n; i++) {
        const Student *s = &L->a[i];
        fprintf(fp, "%s %s %.1f %.1f %.1f %.1f %.1f %.2f\n",
                s->id, s->name, s->chi, s->math, s->eng, s->comp, s->total, s->avg);
    }
    fclose(fp);
    printf("保存成功：%d 条记录已写入 %s\n", L->n, FILE_NAME);
}

static void add_student(StuList *L) {
    Student s;
    memset(&s, 0, sizeof(s));

    printf("输入 学号 姓名 语文 数学 英语 综合：\n> ");
    if (scanf("%31s %31s %lf %lf %lf %lf", s.id, s.name, &s.chi, &s.math, &s.eng, &s.comp) != 6) {
        puts("输入格式错误。");
        // 清理输入缓冲
        int c; while ((c = getchar()) != '\n' && c != EOF) {}
        return;
    }
    calc(&s);

    int idx = find_index_by_id(L, s.id);
    if (idx >= 0) {
        puts("学号已存在，已覆盖原记录：");
        L->a[idx] = s;
    } else {
        ensure_cap(L);
        L->a[L->n++] = s;
        puts("录入成功。");
    }
    show_one(&s);
}

static void search_student(const StuList *L) {
    char id[32];
    printf("输入要查找的学号：\n> ");
    scanf("%31s", id);

    int idx = find_index_by_id(L, id);
    if (idx < 0) {
        puts("未找到该学号。");
        return;
    }
    puts("找到记录：");
    show_one(&L->a[idx]);
}

static void modify_student(StuList *L) {
    char id[32];
    printf("输入要修改的学号：\n> ");
    scanf("%31s", id);

    int idx = find_index_by_id(L, id);
    if (idx < 0) {
        puts("未找到该学号。");
        return;
    }

    puts("原记录：");
    show_one(&L->a[idx]);

    Student *s = &L->a[idx];
    printf("输入新 姓名 语文 数学 英语 综合：\n> ");
    if (scanf("%31s %lf %lf %lf %lf", s->name, &s->chi, &s->math, &s->eng, &s->comp) != 5) {
        puts("输入格式错误。");
        int c; while ((c = getchar()) != '\n' && c != EOF) {}
        return;
    }
    calc(s);
    puts("修改后：");
    show_one(s);
}

static void delete_student(StuList *L) {
    char id[32];
    printf("输入要删除的学号：\n> ");
    scanf("%31s", id);

    int idx = find_index_by_id(L, id);
    if (idx < 0) {
        puts("未找到该学号。");
        return;
    }

    puts("将删除记录：");
    show_one(&L->a[idx]);

    // 左移覆盖
    for (int i = idx; i < L->n - 1; i++) {
        L->a[i] = L->a[i + 1];
    }
    L->n--;
    puts("删除完成。");
}

static int cmp_avg_desc(const void *p1, const void *p2) {
    const Student *a = (const Student*)p1;
    const Student *b = (const Student*)p2;
    if (a->avg < b->avg) return 1;
    if (a->avg > b->avg) return -1;
    return strcmp(a->id, b->id);
}

static int cmp_total_desc(const void *p1, const void *p2) {
    const Student *a = (const Student*)p1;
    const Student *b = (const Student*)p2;
    if (a->total < b->total) return 1;
    if (a->total > b->total) return -1;
    return strcmp(a->id, b->id);
}

static void sort_students(StuList *L) {
    if (L->n == 0) {
        puts("暂无数据可排序。");
        return;
    }
    puts("选择排序方式：1-按平均分降序  2-按总分降序");
    printf("> ");
    int op = 0;
    scanf("%d", &op);
    if (op == 1) qsort(L->a, L->n, sizeof(Student), cmp_avg_desc);
    else qsort(L->a, L->n, sizeof(Student), cmp_total_desc);
    puts("排序完成。");
}

static void statistics(const StuList *L) {
    if (L->n == 0) {
        puts("暂无数据可统计。");
        return;
    }

    // 为了输出Top3/Bottom3，拷贝一份排序
    Student *tmp = (Student*)malloc(L->n * sizeof(Student));
    if (!tmp) { puts("内存分配失败！"); return; }
    memcpy(tmp, L->a, L->n * sizeof(Student));
    qsort(tmp, L->n, sizeof(Student), cmp_avg_desc);

    int k = (L->n < 3) ? L->n : 3;

    puts("\n[1] 平均分最高的学生（Top）：");
    for (int i = 0; i < k; i++) {
        printf("%d) %-12s %-12s 平均分=%.2f\n", i + 1, tmp[i].id, tmp[i].name, tmp[i].avg);
    }

    puts("\n[2] 平均分最低的学生（Bottom）：");
    for (int i = 0; i < k; i++) {
        int idx = L->n - 1 - i;
        printf("%d) %-12s %-12s 平均分=%.2f\n", i + 1, tmp[idx].id, tmp[idx].name, tmp[idx].avg);
    }

    // 各科 max/min/avg + 总平均分
    double maxChi = tmp[0].chi, minChi = tmp[0].chi, sumChi = 0;
    double maxMath = tmp[0].math, minMath = tmp[0].math, sumMath = 0;
    double maxEng = tmp[0].eng, minEng = tmp[0].eng, sumEng = 0;
    double maxComp = tmp[0].comp, minComp = tmp[0].comp, sumComp = 0;
    double sumTotal = 0;

    for (int i = 0; i < L->n; i++) {
        const Student *s = &tmp[i];
        if (s->chi > maxChi) maxChi = s->chi;
        if (s->chi < minChi) minChi = s->chi;
        if (s->math > maxMath) maxMath = s->math;
        if (s->math < minMath) minMath = s->math;
        if (s->eng > maxEng) maxEng = s->eng;
        if (s->eng < minEng) minEng = s->eng;
        if (s->comp > maxComp) maxComp = s->comp;
        if (s->comp < minComp) minComp = s->comp;

        sumChi += s->chi;
        sumMath += s->math;
        sumEng += s->eng;
        sumComp += s->comp;
        sumTotal += s->total;
    }

    double avgChi = sumChi / L->n;
    double avgMath = sumMath / L->n;
    double avgEng = sumEng / L->n;
    double avgComp = sumComp / L->n;

    // “总平均分”理解为：所有人所有科目的平均 = sumTotal / (n*4)
    double overallAvg = sumTotal / (L->n * 4.0);

    puts("\n[3] 各科最高/最低/平均 + 总平均分：");
    printf("语文: max=%.1f min=%.1f avg=%.2f\n", maxChi, minChi, avgChi);
    printf("数学: max=%.1f min=%.1f avg=%.2f\n", maxMath, minMath, avgMath);
    printf("英语: max=%.1f min=%.1f avg=%.2f\n", maxEng, minEng, avgEng);
    printf("综合: max=%.1f min=%.1f avg=%.2f\n", maxComp, minComp, avgComp);
    printf("总平均分(所有科目总体平均)=%.2f\n\n", overallAvg);

    free(tmp);
}

static void menu() {
    puts("\n========== 学生成绩管理 ==========");
    puts("1. 读取文件(score.txt)");
    puts("2. 录入学生");
    puts("3. 查找学生(按学号)");
    puts("4. 修改学生(按学号)");
    puts("5. 删除学生(按学号)");
    puts("6. 排序(平均分/总分)");
    puts("7. 显示全部");
    puts("8. 统计(Top3/Bottom3 + 各科统计)");
    puts("9. 保存文件(score.txt)");
    puts("0. 退出");
    printf("请选择：");
}

int main() {
    StuList L;
    L.a = NULL; L.n = 0; L.cap = 0;

    int op;
    while (1) {
        menu();
        if (scanf("%d", &op) != 1) {
            // 清理输入缓冲
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }
        switch (op) {
            case 1: load_file(&L); break;
            case 2: add_student(&L); break;
            case 3: search_student(&L); break;
            case 4: modify_student(&L); break;
            case 5: delete_student(&L); break;
            case 6: sort_students(&L); break;
            case 7: show_all(&L); break;
            case 8: statistics(&L); break;
            case 9: save_file(&L); break;
            case 0:
                puts("bye~");
                free(L.a);
                return 0;
            default:
                puts("无效选项。");
        }
    }
}