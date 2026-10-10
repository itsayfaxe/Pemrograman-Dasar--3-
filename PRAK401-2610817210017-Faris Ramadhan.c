#include <stdio.h>
int main()
{
    int a;
    char b[50];

    printf("Masukkan angka tumbal: ");
    scanf("%d", &a);

    printf("Masukkan timpa: ");
    scanf(" %[^\n]", b);

    for (int i = 1; i < 51; i++)
    {
        if (i % a == 0)
        {
            printf("%s ", b);
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}