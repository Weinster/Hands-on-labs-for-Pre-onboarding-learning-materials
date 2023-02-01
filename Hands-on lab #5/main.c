#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    uint8_t *const buffer;
    int head;
    int tail;
    int size;
    const int maxlen;
} ring_bbuf_t;

bool is_empty(ring_bbuf_t *rnbf)
{
    return (rnbf->size == 0);
}

bool is_full(ring_bbuf_t *rnbf)
{
    printf("Comparing if array is full %d == %d\n", rnbf->size, rnbf->maxlen);
    return (rnbf->size == rnbf->maxlen);
}

void push(ring_bbuf_t *rnbf, uint8_t data)
{
    if (is_full(rnbf))
    {
        printf("Cant add full\n");
        return;
    }
    rnbf->buffer[rnbf->tail] = data;
    rnbf->size++;
    printf("index %d with value %d\n", rnbf->tail, data);
    rnbf->tail = (rnbf->tail + 1) % rnbf->maxlen;
    printf("Tail becomes %d\n", rnbf->tail);
}

uint8_t pop(ring_bbuf_t *rnbf)
{
    if (is_empty(rnbf))
    {
        printf("Nothing in queue\n");
        return;
    }
    uint8_t data = rnbf->buffer[rnbf->head];
    if (rnbf->head + 1 >= rnbf->maxlen)
    {
        rnbf->head = 0;
    }
    else
    {
        rnbf->head = rnbf->head + 1;
    }
    rnbf->size--;
    printf("head becomes %d and returns popped data\n", rnbf->head);
    return data;
}

int main()
{
    int max;
    bool quit = false;
    printf("Pls enter the length of array: ");
    scanf("%d", &max);
    uint8_t buffer[max];
    ring_bbuf_t ringbuf = {buffer, 0, 0, 0, max};

    while (!quit)
    {
        int choice;
        uint8_t num;
        printf("Press 1 to push and 2 to pop and Anything to quit: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter a number from 0-255 to push: ");
            scanf("%d", &num);
            push(&ringbuf, num);
        }
        else if (choice == 2)
        {
            int data = pop(&ringbuf);
            if (data)
            {
                printf("Popped data: %d\n", data);
            }
        }
        else
            quit = true;
    }
    return 0;
}