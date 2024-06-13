// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char noPlat[15];
    char merk[50];
    char pemilik[100];
} Mobil;

typedef struct Node
{
    Mobil data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *buatSimpul(Mobil data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void tambahMobil(Node **head, Mobil data)
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

void hapusMobil(Node **head, char *noPlat)
{
    Node *current = *head;
    Node *temp = NULL;
    while (current != NULL)
    {
        if (strcmp(current->data.noPlat, noPlat) == 0)
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
    printf("Mobil dengan nomor plat '%s' tidak ditemukan.\n", noPlat);
}

void cetakAntrian(Node *head)
{
    printf("Antrian Mobil:\n");
    while (head != NULL)
    {
        printf("Nomor Plat: %s | Merk: %s | Pemilik: %s\n", head->data.noPlat, head->data.merk, head->data.pemilik);
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;

    Mobil mobil1 = {"B 1234 CD", "Toyota", "John Doe"};
    tambahMobil(&head, mobil1);
    Mobil mobil2 = {"B 5678 EF", "Honda", "Jane Smith"};
    tambahMobil(&head, mobil2);
    Mobil mobil3 = {"B 9876 GH", "BMW", "Michael Johnson"};
    tambahMobil(&head, mobil3);

    cetakAntrian(head);

    hapusMobil(&head, "B 5678 EF");

    cetakAntrian(head);

    return 0;
}
