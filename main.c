#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H1, M1, S1;
    int H2, M2, S2;
    int HD=0, MD=0, SD=0;

    scanf("%d %d %d", &H1, &M1, &S1);
    scanf("%d %d %d", &H2, &M2, &S2);
    while (H1>=0)
    {


        SD=S2-S1;
        if (SD<0)
        {
            SD = SD + 60;
            M2--;
        }

        MD=M2-M1;
        if (MD<0)
        {
            MD = MD + 60;
            H2--;
        }


        HD=H2-H1;
        if (HD<0)
            HD = HD + 24;

        if (HD<10 && MD<10 && SD<10)
            printf("0%d:0%d:0%d", HD, MD, SD);
        else if (HD<10 && MD<10 && SD>10)
            printf("0%d:0%d:%d", HD, MD, SD);
        else if (HD<10 && MD>10 && SD<10)
            printf("0%d:%d:0%d", HD, MD, SD);
        else if (HD<10 && MD>10 && SD>10)
            printf("0%d:%d:%d", HD, MD, SD);
        else if (HD>10 && MD<10 && SD>10)
            printf("%d:0%d:%d", HD, MD, SD);
        else if (HD>10 && MD<10 && SD<10)
            printf("%d:0%d:0%d", HD, MD, SD);
        else if (HD>10 && MD>10 && SD<10)
            printf("%d:%d:0%d", HD, MD, SD);
        else
            printf("%d:%d:%d", HD, MD, SD);
        printf("\n");
        scanf("%d %d %d", &H1, &M1, &S1);
        scanf("%d %d %d", &H2, &M2, &S2);
    }

    return 0;
}
