// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa
{
    char NIM[15];
    char Nama[50];
    char tanggalLahir[20];
    float IPK;
};

void inputDataMahasiswa(struct Mahasiswa *mahasiswa)
{
    printf("Masukkan NIM: ");
    scanf("%s", mahasiswa->NIM);

    printf("Masukkan Nama: ");
    scanf(" %[^\n]s", mahasiswa->Nama); 

    printf("Masukkan Tanggal Lahir (DD/MM/YYYY): ");
    scanf("%s", mahasiswa->tanggalLahir);

    printf("Masukkan IPK: ");
    scanf("%f", &mahasiswa->IPK);
}

void tampilkanDataMahasiswa(struct Mahasiswa *mahasiswa)
{
    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", mahasiswa->NIM);
    printf("Nama: %s\n", mahasiswa->Nama);
    printf("Tanggal Lahir: %s\n", mahasiswa->tanggalLahir);
    printf("IPK: %.2f\n", mahasiswa->IPK);
}

int main()
{
    
    struct Mahasiswa mhs;

    inputDataMahasiswa(&mhs);

    tampilkanDataMahasiswa(&mhs);

    return 0;
}
