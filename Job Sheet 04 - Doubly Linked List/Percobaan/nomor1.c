// NAMA : Rafli Arianto
// NIM  : 23343051



struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{
    
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    
    new_node->data = new_data;

    
    new_node->prev = (*head_ref);
    new_node->next = NULL;

   
    if ((*head_ref) != NULL)
    {
        (*head_ref)->next = new_node;
    }

   
    (*head_ref) = new_node;
}

void printlist(struct Node *node)
{
    struct Node *last;
    printf("\n Traversal in forward direction \n");
    while (node != NULL)
    {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }

    printf("\n Traversal in reverse direction \n");
    while (last != NULL)
    {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

int main()
{
    
    struct Node *head = NULL;
    push(&head, 6);
    push(&head, 5);
    push(&head, 2);
    printf("created DLL are:");
    printlist(head);
    getchar();
    return 0;
}
