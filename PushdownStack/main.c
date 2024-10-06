#include <stdio.h>
#include <malloc.h>

struct node {
    int value;
    struct node* next;
};

static struct node *head, *tail;

void init_stack() {
    head = (struct node*) malloc(sizeof *head);
    tail = (struct node*) malloc(sizeof *tail);
    head -> next = tail;
    head -> value = -1;
    tail -> value = -1;
    tail -> next = tail;
}

void push(int value) {
    struct node* temp;
    temp = (struct node*) malloc(sizeof *temp);
    temp -> value = value;
    temp -> next = head -> next;
    head -> next = temp;
}

int pop() {
    int x;
    struct node* temp;
    temp = head -> next;
    head -> next = temp -> next;
    x = temp -> value;
    free(temp);
    return x;
}

int main(void) {
    return 0;
}
