#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int step;

    if (a < b)
    {
        step = 1;
    }
    else
    {
        step = -1;
    }

    for (int i = 0; i <= abs(a - b); i++)
    {
        if (i > 0)
        {
            printf(" - ");
        }
        printf("%d %d", a + i * step, b - i * step);
    }
    printf("\n");

    return 0;
}