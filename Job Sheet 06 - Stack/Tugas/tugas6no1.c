// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa
{
    char nim[20];
    char nama[50];
    float nilai;
};

struct Node
{
    struct Mahasiswa data;
    struct Node *next;
};

struct Node *newNode(struct Mahasiswa data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int isEmpty(struct Node *root)
{
    return !root;
}

void push(struct Node **root, struct Mahasiswa data)
{
    struct Node *node = newNode(data);
    node->next = *root;
    *root = node;
    printf("Data berhasil ditambahkan ke dalam stack.\n");
}

struct Mahasiswa pop(struct Node **root)
{
    if (isEmpty(*root))
    {
        struct Mahasiswa nullMahasiswa = {"", "", 0}; 
        return nullMahasiswa;
    }
    struct Node *temp = *root;
    *root = (*root)->next;
    struct Mahasiswa popped = temp->data;
    free(temp);
    return popped;
}

void display(struct Node *root)
{
    if (isEmpty(root))
    {
        printf("Stack kosong.\n");
        return;
    }
    printf("Isi stack:\n");
    struct Node *temp = root;
    while (temp != NULL)
    {
        printf("NIM: %s, Nama: %s, Nilai: %.2f\n", temp->data.nim, temp->data.nama, temp->data.nilai);
        temp = temp->next;
    }
}

int compare(float a, float b)
{
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

void sortStack(struct Node **root)
{
    struct Node *sortedStack = NULL;
    while (!isEmpty(*root))
    {
        struct Mahasiswa temp = pop(root);
        while (!isEmpty(sortedStack) && compare(temp.nilai, sortedStack->data.nilai) == 1)
        {
            push(root, pop(&sortedStack));
        }
        push(&sortedStack, temp);
    }
    *root = sortedStack;
}

int main()
{
    struct Node *stack = NULL;
    int choice;
    struct Mahasiswa data;
    do
    {
        printf("\nMenu:\n");
        printf("1. Tambah Data\n");
        printf("2. Hapus Data\n");
        printf("3. Tampilkan Data\n");
        printf("4. Urutkan Data\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Masukkan NIM: ");
            scanf("%s", data.nim);
            printf("Masukkan Nama: ");
            scanf("%s", data.nama);
            printf("Masukkan Nilai: ");
            scanf("%f", &data.nilai);
            push(&stack, data);
            break;
        case 2:
            data = pop(&stack);
            if (strcmp(data.nim, "") != 0)
            {
                printf("Data yang dihapus: NIM - %s, Nama - %s, Nilai - %.2f\n", data.nim, data.nama, data.nilai);
            }
            break;
        case 3:
            display(stack);
            break;
        case 4:
            sortStack(&stack);
            printf("Stack berhasil diurutkan berdasarkan nilai mahasiswa secara ascending.\n");
            break;
        case 5:
            printf("Terima kasih!\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
        }
    } while (choice != 5);

    return 0;
}
