#include <stdio.h>
  int main()
  {
      static int score[10];
      int n,x,t;
      printf("输入现有学生人数:");
      scanf("%d",&n);
      printf("输入现有学生的成绩数据:");
      for (int i=0;i<n;i++)
      {
          scanf("%d",&score[i]);
      }
      printf("输入要删除的成绩数据:");
      scanf("%d",&x);
      printf("删除后的学生成绩数据:\n");
      for (int i=0;i<n;i++)
      {
          if (score[i]==x)
          {
            for (;i<n;i++)
            {
                score[i]=score[i+1];
            }
              score[n-1]=0;
              n=n-1;
          }
      }
      for(int i=0;i<n;i++)
        printf("%d  ",score[i]);
    return 0;
   }