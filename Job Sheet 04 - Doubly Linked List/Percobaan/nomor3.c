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

void push(struct Node **head_ref, int new_data)
{
      
      struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
      struct Node *last = (struct Node *)malloc(sizeof(struct Node));

      
      new_node->data = new_node;

      
      new_node->next = NULL;

     
      if (*head_ref == NULL)
      {
            new_node->prev = NULL;
            *head_ref = new_node;
            return;
      }

      
      while (last->next != NULL)
      {
            last = last->next;
      }

      
      last->next = new_node;

      new_node->prev = last;
      return;
}

void insertafter(struct Node *prev_node, int new_data)
{
     
      if (prev_node == NULL)
      {
            printf("the given previous node cannot be NULL");
            return;
      }

    
      struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

     
      new_node->data = new_data;

      
      new_node->next = prev_node->next;

     
      prev_node->next = new_node;

      
      new_node->prev = prev_node;

      
      if (new_node->next != NULL)
      {
            new_node->next->prev = new_node;
      }
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
     
      append(&head, 6);
    
      push(&head, 7);
     
      push(&head, 5);
      push(&head, 2);
      insertafter(head->prev, 3);
      printf("created DLL are:");
      printlist(head);
      getchar();
      return 0;
}
