#include <stdio.h>

#define N 100

struct student

{

    char num[10];

    char name[10];

    int score[3];
};

void input(struct student *stu, int n)

{

    int i;

    for (i = 0; i < n; i++)
    {

        scanf("%s%s%d%d%d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
    }
}

void print(struct student *stu, int n)

{

    int i;

    int max = 0;

    int maxn = 0, sum[N] = {0};

    double average[3] = {0};

    for (i = 0; i < n; i++)

    {

        sum[i] = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];

        if (max <= sum[i])
        {

            maxn = i;

            max = sum[i];
        }

        average[0] += stu[i].score[0];

        average[1] += stu[i].score[1];

        average[2] += stu[i].score[2];
    }

    printf("%.lf %.lf %.lf\n", average[0] / n, average[1] / n, average[2] / n);

    printf("%s %s %d %d %d\n", stu[maxn].num, stu[maxn].name, stu[maxn].score[0], stu[maxn].score[1], stu[maxn].score[2]);
}

int main()

{

    struct student stu[N];

    int n;

    scanf("%d", &n);

    input(stu, n);

    print(stu, n);

    return 0;
}