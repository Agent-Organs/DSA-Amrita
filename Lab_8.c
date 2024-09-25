#include <stdio.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} node;

node n1, n2, n3, n4, n5;
node *one, *temp;

void main()
{

    n1.data = 10;
    n1.next = &n3;

    n2.data = 20;
    n2.next = &n2;

    n3.data = 30;
    n3.next = &n5;

    n4.data = 40;
    n4.next = &n4;

    n5.data = 50;
    n5.next = NULL;

    one = &n1;
    temp = one;

    while (temp != NULL)
    {
        printf("\n%d", temp->data); 
        temp = temp->next;
    }
}

