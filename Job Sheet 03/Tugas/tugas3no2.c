// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}


void printPrimes(int n)
{
    
    int *primes = (int *)malloc(n * sizeof(int));
    if (primes == NULL)
    {
        printf("Alokasi memori gagal!");
        exit(1);
    }

    int count = 0; 
    int num = 2;   

    
    while (count < n)
    {
        if (isPrime(num))
        {
            primes[count] = num;
            count++;

            
            primes = (int *)realloc(primes, count * sizeof(int));
            if (primes == NULL)
            {
                printf("Realokasi memori gagal!");
                exit(1);
            }
        }
        num++;
    }

   
    printf("Bilangan prima pertama sampai ke-%d adalah:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");

    
    free(primes);
}

int main()
{
    int n, m;

   
    printf("Masukkan jumlah bilangan prima yang ingin ditampilkan: ");
    scanf("%d", &n);

    
    printf("Masukkan ukuran memori baru (m): ");
    scanf("%d", &m);

    
    printPrimes(n);

    return 0;
}
