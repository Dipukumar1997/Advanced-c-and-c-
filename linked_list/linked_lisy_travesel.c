#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Node_List_transversl(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elemnts is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    // head = ptr;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    if (p == NULL)
    {
        printf("Index out of bounds\n");
        return head;
    }
    ptr->data = data;
    // p->next = ptr;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *delete_at_Given_Index(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *delete_At_Last(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
   while (q->next != NULL)
   {
        p= p->next;
        q= q->next;
   }
   
    p->next = NULL;
    free(q);
    return head;
}


// struct Node *inserAtTheEnd(struct Node *end, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// }

int main()
{
    // Initialization and allocation at the same time
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third_node = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->data = 7;
    head->next = second_node;

    // Link second and third node
    second_node->data = 11;
    second_node->next = third_node;

    // Terminate the third node by pointing to NULL
    third_node->data = 13;
    third_node->next = NULL;

    printf("real intial\n");
    Node_List_transversl(head);

    printf("about to insert at forst 56\n");
    head = insertAtFirst(head, 56);
    Node_List_transversl(head);

    printf("insert at 2 potition\n");
    head = insertAtIndex(head, 114, 2);
    Node_List_transversl(head);

    printf("about to deleting head\n");
    head = deleteFirst(head);
    Node_List_transversl(head);

    printf("about to delet at index 1\n");
    head = delete_at_Given_Index(head, 1);
    Node_List_transversl(head);

    printf("delete last element\n:");
    head = delete_At_Last(head);
    Node_List_transversl(head);


    printf("\ni require ot insert at forst so i did\n");
    insertAtIndex(head,12,1);
    Node_List_transversl(head);
    return 0;
}