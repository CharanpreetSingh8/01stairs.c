#include <stdio.h>

int main()
{
    int s, i, n;
    printf("How many steps you need?\n");
    scanf("%d", &s);

    for(i=0;i<s;++i)
    {
        for(n=0;n<i;++n)
        {
            printf("01");
        }
        printf("01\n");
    }

    return 0;
}
