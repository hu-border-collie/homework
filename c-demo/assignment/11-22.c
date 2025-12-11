#include <stdio.h>
void find_max_min(int arr[], int len, int *max, int *min)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}
int main()
{
    int n, a[10], max, min;
    int *p_max, *p_min;
    p_max = &max;
    p_min = &min;
    printf("请输入数组个数:\n");
    scanf("%d", &n);
    printf("请输入数组元素:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    find_max_min(a, n, p_max, p_min);
    printf("最大值:%d\n最小值:%d", max, min);
    return 0;
}