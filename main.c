#include <stdio.h>

int test_2()
{
    int A[5] = {1,2,3,4,5}, i, sum=0;
    for (i=0;i<5;i++)
    {
        A[i] *= 10;
        sum += A[i];
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("A的項目加總：%d\n", sum);
    for (i=4;i>=0;i--)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

int main()
{
    char name[5][10]={"Amgo", "Bata", "Cary", "Doto", "Enge"};
    int score[5][3] = {{90,88,96},{75,80,65},{100,62,91},{75,60,55},{98,90,80}};
    int i, j;
    for (i=0;i<5;i++)
    {
        printf("%s", name[i]);
        for (j=0;j<3;j++)
        {
            printf(",%d", score[i][j]);
        }
        printf("\n");
    }
    for (j=0;j<3;j++)
    {
        int max_score=0, max_index=0;
        for (i=0;i<5;i++)
        {
            if (max_score < score[i][j])
            {
                max_score=score[i][j];
                max_index=i;
            }
        }
        switch (j)
        {
        case 0:
            printf("國文最高分：%s,%d分\n", name[max_index], max_score);
            break;
        case 1:
            printf("英文最高分：%s,%d分\n", name[max_index], max_score);
            break;
        case 2:
            printf("數學最高分：%s,%d分\n",name[max_index], max_score);
            break;
        }
    }
}
