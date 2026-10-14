#include <stdio.h>
#include <stdbool.h>
int main()
{

    while (true)
    {
        printf("--- Pilih Program ---\n");
        printf("1. Penjumalahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        int option;
        printf("Masukkan Pilihan: ");
        scanf("%d", &option);

        if (option == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator Faris Ramadhan    \n");
            break;
        }
        else if (option > 5){
            printf("Input anda salah, silahkan coba lagi\n");
            printf("\n");
            continue;
        }

        float input1, input2;
        printf("Masukkan nilai pertama: ");
        scanf("%f", &input1);

        printf("Masukkan nilai kedua: ");
        scanf("%f", &input2);

        const char *operation_name = NULL;
        float result_value;
        float *result = NULL;

        if (option == 1)
        {
            operation_name = "Penjumlahan";
            result = &result_value;
            *result = input1 + input2;
        }
        else if (option == 2)
        {
            operation_name = "Pengurangan";
            result = &result_value;
            *result = input1 - input2;
        }
        else if (option == 3)
        {
            operation_name = "Perkalian";
            result = &result_value;
            *result = input1 * input2;
        }
        else if (option == 4)
        {
            if (input2 == 0)
            {
                printf("Tak Terdefinisi");
            }
            else
            {
                operation_name = "Pembagian";
                result = &result_value;
                *result = input1 / input2;
            }
        }

        if (result != NULL)
        {
            printf("Hasil %s antara %.2f dengan %.2f adalah %.2f", operation_name, input1, input2, *result);
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}