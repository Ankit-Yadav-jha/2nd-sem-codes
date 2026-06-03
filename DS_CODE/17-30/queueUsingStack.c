#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack structure
typedef struct {
    int arr[MAX];
    int top;
} Stack;

// Initialize stack
void init(Stack *s) {
    s->top = -1;
}

// Check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Check if stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Push operation
void push(Stack *s, int x) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = x;
}

// Pop operation
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

// Peek operation
int peek(Stack *s) {
    if (isEmpty(s)) return -1;
    return s->arr[s->top];
}

// Queue using two stacks
typedef struct {
    Stack inStack;
    Stack outStack;
} Queue;

// Initialize queue
void initQueue(Queue *q) {
    init(&q->inStack);
    init(&q->outStack);
}

// Enqueue
void enqueue(Queue *q, int x) {
    push(&q->inStack, x);
}

// Dequeue
int dequeue(Queue *q) {
    if (isEmpty(&q->outStack)) {
        while (!isEmpty(&q->inStack)) {
            push(&q->outStack, pop(&q->inStack));
        }
    }

    if (isEmpty(&q->outStack)) {
        printf("Queue is empty\n");
        return -1;
    }

    return pop(&q->outStack);
}

// Display front element
int front(Queue *q) {
    if (isEmpty(&q->outStack)) {
        while (!isEmpty(&q->inStack)) {
            push(&q->outStack, pop(&q->inStack));
        }
    }

    if (isEmpty(&q->outStack)) {
        printf("Queue is empty\n");
        return -1;
    }

    return peek(&q->outStack);
}

// Driver code
int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued: %d\n", dequeue(&q)); // 10
    printf("Front: %d\n", front(&q));      // 20

    return 0;
}