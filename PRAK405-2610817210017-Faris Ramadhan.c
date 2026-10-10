#include <stdio.h>
int main()
{
    int n, multiple;

    printf("Masukkan banyak baris: ");
    scanf("%d", &n);

    printf("Masukkan kelipatan: ");
    scanf("%d", &multiple);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int line_total = 0;

        for (int j = 1; j <= i; j++)
        {
            line_total += j * multiple;
        }

        printf("%d\n", line_total);
        sum += line_total;
    }

    printf("%d\n", sum);

    return 0;
}