#include <stdio.h>
#define MAX 100
static int queue[MAX+1], head, tail;

void put(int value) {
    if (tail > MAX) {
        printf("The queue if full, reindexing ...");
        tail = 0;
    }
    tail += 1;
    queue[tail] = value;
}

int get() {
    if (head > MAX) {
        printf("The head index is at the end, reindexing ...");
        head = 0;
    }

    head += 1;
    int value = queue[head];
    return value;
}

void queue_init() {
    head = 0;
    tail = 0;
}

int queue_is_empty() {
    return tail==head;
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
