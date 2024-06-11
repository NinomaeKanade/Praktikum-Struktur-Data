/*
tugas         : Final Project
programmer    : Rafli Arianto / 23343051
program       : Program untuk Berlangganan Gym
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PANJANG_NAMA 50
#define NO_TELEPON 20
#define PANJANG_ID 4

typedef struct Konsumen {
    char id[PANJANG_ID];
    char nama[PANJANG_NAMA];
    char telepon[NO_TELEPON];
    int durasi; 
    struct Konsumen *sebelum;
    struct Konsumen *sesudah;
} Konsumen;

Konsumen *depan = NULL, *belakang = NULL;

void buatID(char *id) {
    static const char alfabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < PANJANG_ID - 1; i++) {
        id[i] = alfabet[rand() % 26];
    }
    id[PANJANG_ID - 1] = '\0';
}

void tambahKonsumen() {
    Konsumen *konsumenBaru = (Konsumen *)malloc(sizeof(Konsumen));
    buatID(konsumenBaru->id);
    printf("Ketikan Nama: ");
    scanf("%s", konsumenBaru->nama);
    printf("Ketikan Nomor Telepon: ");
    scanf("%s", konsumenBaru->telepon);
    printf("Ketikan durasi berlanganan (bulan): ");
    scanf("%d", &konsumenBaru->durasi);

    konsumenBaru->sebelum = belakang;
    konsumenBaru->sesudah = NULL;
    if (belakang) {
        belakang->sesudah = konsumenBaru;
    } else {
        depan = konsumenBaru;
    }
    belakang = konsumenBaru;

    printf("ID Konsumen: %s\n", konsumenBaru->id);
}

void tampilkanKonsumen() {
    Konsumen *sesuai = depan;
    while (sesuai) {
        printf("ID: %s, Nama: %s, Telepon: %s, Durasi: %d bulan\n",
               sesuai->id, sesuai->nama, sesuai->telepon, sesuai->durasi);
        printf("--------------------\n");
        sesuai = sesuai->sesudah;
    }
}

void batalkanBerlangganan(char *id) {
    Konsumen *sesuai = depan;
    while (sesuai) {
        if (strcmp(sesuai->id, id) == 0) {
            if (sesuai->sebelum) {
                sesuai->sebelum->sesudah = sesuai->sesudah;
            } else {
                depan = sesuai->sesudah;
            }
            if (sesuai->sesudah) {
                sesuai->sesudah->sebelum = sesuai->sebelum;
            } else {
                belakang = sesuai->sebelum;
            }
            free(sesuai);
            printf("Berlangganan dengan ID %s batal.\n", id);
            return;
        }
        sesuai = sesuai->sesudah;
    }
    printf("Konsumen dengan ID %s tidak ada.\n", id);
}

void urutanKonsumendenganMerge(Konsumen **depanDepan, int meningkat);
void bagiDaftar(Konsumen *asal, Konsumen **bagianDepan, Konsumen **bagianBelakang);
Konsumen* urutandenganMerge(Konsumen *a, Konsumen *b, int meningkat);

void urutanKonsumendengannama(int meningkat) {
    urutanKonsumendenganMerge(&depan, meningkat);
}

void urutanKonsumendenganMerge(Konsumen **depanDepan, int meningkat) {
    Konsumen *depan = *depanDepan;
    Konsumen *a;
    Konsumen *b;

    if ((depan == NULL) || (depan->sesudah == NULL)) {
        return;
    }

    bagiDaftar(depan, &a, &b);

    urutanKonsumendenganMerge(&a, meningkat);
    urutanKonsumendenganMerge(&b, meningkat);

    *depanDepan = urutandenganMerge(a, b, meningkat);
}

Konsumen* urutandenganMerge(Konsumen *a, Konsumen *b, int meningkat) {
    Konsumen *hasil = NULL;

    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;

    if (meningkat ? (strcmp(a->nama, b->nama) <= 0) : (strcmp(a->nama, b->nama) >= 0)) {
        hasil = a;
        hasil->sesudah = urutandenganMerge(a->sesudah, b, meningkat);
        hasil->sesudah->sebelum = hasil;
        hasil->sebelum = NULL;
    } else {
        hasil = b;
        hasil->sesudah = urutandenganMerge(a, b->sesudah, meningkat);
        hasil->sesudah->sebelum = hasil;
        hasil->sebelum = NULL;
    }
    return hasil;
}

void bagiDaftar(Konsumen *asal, Konsumen **bagianDepan, Konsumen **bagianBelakang) {
    Konsumen *cepat;
    Konsumen *lama;
    if (asal == NULL || asal->sesudah == NULL) {
        *bagianDepan = asal;
        *bagianBelakang = NULL;
    } else {
        lama = asal;
        cepat = asal->sesudah;

        while (cepat != NULL) {
            cepat = cepat->sesudah;
            if (cepat != NULL) {
                lama = lama->sesudah;
                cepat = cepat->sesudah;
            }
        }

        *bagianDepan = asal;
        *bagianBelakang = lama->sesudah;
        lama->sesudah = NULL;
    }
}

Konsumen* cariKonsumendenganID(char *id) {
    Konsumen *sesuai = depan;
    while (sesuai) {
        if (strcmp(sesuai->id, id) == 0) {
            return sesuai;
        }
        sesuai = sesuai->sesudah;
    }
    return NULL;
}

Konsumen* cariKonsumendengannama(char *nama) {
    Konsumen *sesuai = depan;
    while (sesuai) {
        if (strcmp(sesuai->nama, nama) == 0) {
            return sesuai;
        }
        sesuai = sesuai->sesudah;
    }
    return NULL;
}

void editdataKonsumen(char *id) {
    Konsumen *konsumen = cariKonsumendenganID(id);
    if (!konsumen) {
        printf("Konsumen dengan ID %s tidak ada.\n", id);
        return;
    }

    printf("Edit data konsumen dengan ID %s\n", id);
    printf("Ketikan nama baru: ");
    scanf("%s", konsumen->nama);
    printf("Ketikan nomor telepon baru: ");
    scanf("%s", konsumen->telepon);
    printf("Ketikan durasi berlangganan baru (bulan): ");
    scanf("%d", &konsumen->durasi);
}

void judul(){
	printf("Program Manajemen Langganan Gym\n\n");
}

int main() {
    int pilihan;
    char id[PANJANG_ID];
    char nama[PANJANG_NAMA];

    judul();
    do {
        printf("1. Tambah konsumen\n");
        printf("2. Tampilkan semua data konsumen\n");
        printf("3. Urutan konsumen berdasarkan nama (A-Z)\n");
        printf("4. Urutan konsumen berdasarkan nama (Z-A)\n");
        printf("5. Cari data konsumen dengan ID\n");
        printf("6. Cari data konsumen dengan nama\n");
        printf("7. Edit data konsumen berdasarkan ID\n");
        printf("8. Batalkan berlangganan berdasarkan ID\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahKonsumen();
                break;
            case 2:
                tampilkanKonsumen();
                break;
            case 3:
                urutanKonsumendengannama(1);
                tampilkanKonsumen();
                break;
            case 4:
                urutanKonsumendengannama(0);
                tampilkanKonsumen();
                break;
            case 5: {
                printf("Ketikan ID konsumen: ");
                scanf("%s", id);
                Konsumen *konsumenberdasarID = cariKonsumendenganID(id);
                if (konsumenberdasarID) {
                    printf("ID: %s, Nama: %s, Telepon: %s, Durasi: %d bulan\n",
                           konsumenberdasarID->id, konsumenberdasarID->nama, konsumenberdasarID->telepon, konsumenberdasarID->durasi);
                    printf("--------------------\n");
                } else {
                    printf("Konsumen dengan ID %s tidak ada.\n", id);
                }
                break;
            }
            case 6: {
                printf("Ketikan nama konsumen: ");
                scanf("%s", nama);
                Konsumen *konsumenberdasarnama = cariKonsumendengannama(nama);
                if (konsumenberdasarnama) {
                    printf("ID: %s, Nama: %s, Telepon: %s, Durasi: %d bulan\n",
                           konsumenberdasarnama->id, konsumenberdasarnama->nama, konsumenberdasarnama->telepon, konsumenberdasarnama->durasi);
                    printf("--------------------\n");
                } else {
                    printf("Konsumen dengan nama %s tidak ada.\n", nama);
                }
                break;
            }
            case 7:
                printf("Ketikan ID konsumen: ");
                scanf("%s", id);
                editdataKonsumen(id);
                break;
            case 8:
                printf("Ketikan ID konsumen: ");
                scanf("%s", id);
                batalkanBerlangganan(id);
                break;
            case 0:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilih menu yang lain.\n");
        }
    } while (pilihan != 0);

    return 0;
}


