#include <stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");
    
    int genap;
    if (n % 2 == 0)
    {
        genap = n;
    }
    else
    {
        genap = genap - 1;
    }
    for (i = genap; i >= 2; i -= 2)
    {
        printf("%d ", i);
    }

    return 0;
}