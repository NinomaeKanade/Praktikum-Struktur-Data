// NAMA : Rafli Arianto
// NIM  : 23343051


#include <stdio.h>
#include <conio.h>

int main()
{
    int usia1 = 50;
    int usia2 = 18;
    
    int *ptr;
    
    ptr = &usia1;                              
    printf("\nUsia saya (usia1): %d ", usia1); 
    printf("\nUsia saya (*ptr): %d", *ptr);    
    
    printf("\n (&usia1) %x (ptr) %x", &usia1, ptr);
    
    ptr = &usia2;
    printf("\nUsia Anda (*ptr): %d", *ptr); 

    printf("\n(&usia2) %x (ptr) %x", &usia2, ptr);
    
    printf("\n(&ptr) %x ", &ptr);

    getch();
} 
