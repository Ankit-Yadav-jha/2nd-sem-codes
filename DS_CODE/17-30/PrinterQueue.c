#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

// Structure for a print job
typedef struct {
    int jobId;
    char fileName[50];
    int pages;
} PrintJob;

// Queue structure
typedef struct {
    PrintJob jobs[MAX];
    int front;
    int rear;
} Queue;

// Initialize queue
void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if queue is full
int isFull(Queue *q) {
    return q->rear == MAX - 1;
}

// Check if queue is empty
int isEmpty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}

// Add job to queue (enqueue)
void enqueue(Queue *q, PrintJob job) {
    if (isFull(q)) {
        printf("Queue is full! Cannot add new print job.\n");
        return;
    }

    if (q->front == -1)
        q->front = 0;

    q->rear++;
    q->jobs[q->rear] = job;

    printf("Job %d (%s) added to queue.\n", job.jobId, job.fileName);
}

// Remove job from queue (dequeue)
void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! No jobs to print.\n");
        return;
    }

    PrintJob job = q->jobs[q->front];
    printf("Printing Job %d: %s (%d pages)\n", job.jobId, job.fileName, job.pages);

    q->front++;
}

// Display queue
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("\nCurrent Print Queue:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("Job %d: %s (%d pages)\n",
               q->jobs[i].jobId,
               q->jobs[i].fileName,
               q->jobs[i].pages);
    }
}

// Main function
int main() {
    Queue q;
    initQueue(&q);

    int choice;
    PrintJob job;
    int jobCounter = 1;

    while (1) {
        printf("\n--- Printer Queue Menu ---\n");
        printf("1. Add Print Job\n");
        printf("2. Print Job\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                job.jobId = jobCounter++;
                printf("Enter file name: ");
                scanf("%s", job.fileName);
                printf("Enter number of pages: ");
                scanf("%d", &job.pages);

                enqueue(&q, job);
                break;

            case 2:
                dequeue(&q);
                break;

            case 3:
                display(&q);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}