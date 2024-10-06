#include <stdio.h>
#include <malloc.h>

struct node {
    int value;
    struct node* next;
};

struct node *head, *tail;

void init_linked_lst() {
    head = (struct node*) malloc(sizeof *head);
    tail = (struct node*) malloc(sizeof *tail);
    head -> next = tail;
    tail -> next = tail;
}

struct node* insert_after(int value, struct node* temp) {
    struct node* x;
    x = (struct node*) malloc(sizeof *x);
    x -> value = value;
    x -> next = temp -> next;
    temp -> next = x;
}

void delete_next_node(struct node* temp) {
    temp -> next = temp -> next ->next;
    free(temp -> next);
}


int main(void) {
    return 0;
}
