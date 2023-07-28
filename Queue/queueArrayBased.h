#define SIZE 1000
#define QueueEntry int

typedef struct queue{
    int arr[SIZE];
    int rear;
    int front;
    int size;
}Queue;

void create_queue(Queue *qptr);
void enqueu(Queue *qptr, QueueEntry data);
void dequeue(Queue *qptr);
int isempty();
int isfull();
int size();
QueueEntry peek();