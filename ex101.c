#include <stdio.h>

int main(void)
{
    int hour;

    printf("何時に起きますか（5-10） > ");
    scanf("%d", &hour);

    switch (hour)
    {
    case 5:
    case 6:
        printf("散歩して、");
    case 7:
        printf("読書して、");
        printf("メールを読んで、");
    case 8:
        printf("朝食を食べて、");
    default:
        printf("歯を磨いて出勤\n");
    }

    return 0;
}
