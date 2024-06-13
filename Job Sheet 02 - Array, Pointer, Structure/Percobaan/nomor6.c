// NAMA : Rafli Arianto
// NIM  : 23343051


struct Mahasiswa
{
    char nama[50];
    char jurusan[50];
    int nilai;
};
typedef struct Mahasiswa data;
int main(void)
{
    data mhs01;
    strcpy(mhs01.nama, "Rafli Arianto");
    strcpy(mhs01.jurusan, "Informatika");
    mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s, ", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai %i\n", mhs01.nilai);

    return 0;
}
