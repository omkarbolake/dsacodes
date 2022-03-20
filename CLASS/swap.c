#include<stdio.h>
#include<stdlib.h>


struct Node {
int data;
struct Node* next;
};


void swap(int* a, int* b);


void pairWiseSwap(struct Node* head)
{
struct Node* temp = head;


while (temp != NULL && temp->next != NULL)
    {
swap(&temp->data, &temp->next->data);

temp = temp->next->next;
    }
}


void swap(int* a, int* b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

void number(struct Node** head_ref, int new_data)
{

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


new_node->data = new_data;


new_node->next = (*head_ref);


(*head_ref) = new_node;
}


void printList(struct Node* node)
{
while (node != NULL)
    {
printf("%d ", node->data);
node = node->next;
    }
}


int main()
{
struct Node* start = NULL;


number(&start, 5);
number(&start, 4);
number(&start, 3);
number(&start, 2);
number(&start, 1);

printf("Linked list before calling pairWiseSwap()\n");
printList(start);

pairWiseSwap(start);

printf("\nLinked list after calling pairWiseSwap()\n");
printList(start);

return 0;
}
