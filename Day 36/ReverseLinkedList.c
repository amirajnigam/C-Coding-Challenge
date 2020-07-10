#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node next;  
};

struct Node* Reverse(struct Node* head) // Reverse function haver to accept the head node as argument and then return the address of head node after the reversal of list
{
    struct Node *current, *next, *prev;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next; //read it as current.next(means the memory address block/link field of that node). Here next variable will store the memory location of next node
        current->next = prev; // here, current.next i.e. the address block of first node now will point to prev i.e. NULL
        prev = current;
        current = next; 
         
    }
    head = prev;
    return head;
}

int main()
{
    struct Node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);
    print(head);
    head = Reverse(head);
    Print(head);
}

//Note: PRINT and Insert functions are not mentioned here, This program is for understanding the reversal of linked list only

