// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>

int *fibonacci(int n)
{
    
    int *fib = (int *)malloc(n * sizeof(int));

    
    if (fib == NULL)
    {
        printf("Alokasi memori gagal!");
        exit(1);
    }

    
    fib[0] = 0;
    fib[1] = 1;

    
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    
    return fib;
}

int main()
{
    int n;

    
    printf("Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ");
    scanf("%d", &n);

    
    int *fib = fibonacci(n);

    
    printf("Bilangan Fibonacci pertama sampai ke-%d adalah:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib[i]);
    }
    printf("\n");

    
    free(fib);

    return 0;
}
