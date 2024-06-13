// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char judul[100];
    char pengarang[100];
    int tahun;
} Buku;

typedef struct Node
{
    Buku data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *buatSimpul(Buku data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void tambahDiAkhir(Node **head, Buku data)
{
    Node *newNode = buatSimpul(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void hapusBerdasarkanJudul(Node **head, char *judul)
{
    Node *current = *head;
    Node *temp = NULL;
    while (current != NULL)
    {
        if (strcmp(current->data.judul, judul) == 0)
        {
            if (current->prev != NULL)
                current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
            temp = current;
            free(temp);
            return;
        }
        current = current->next;
    }
    printf("Buku dengan judul '%s' tidak ditemukan.\n", judul);
}

void cetakList(Node *head)
{
    printf("Daftar Buku:\n");
    while (head != NULL)
    {
        printf("Judul: %s | Pengarang: %s | Tahun: %d\n", head->data.judul, head->data.pengarang, head->data.tahun);
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;

    Buku buku1 = {"Harry Potter", "J.K. Rowling", 1997};
    tambahDiAkhir(&head, buku1);
    Buku buku2 = {"Lord of the Rings", "J.R.R. Tolkien", 1954};
    tambahDiAkhir(&head, buku2);
    Buku buku3 = {"Pride and Prejudice", "Jane Austen", 1813};
    tambahDiAkhir(&head, buku3);

    cetakList(head);

    hapusBerdasarkanJudul(&head, "Lord of the Rings");

    cetakList(head);

    return 0;
}
