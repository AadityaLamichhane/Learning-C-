// Using the array for the application
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
struct que{
    int items[MAXSIZE];
    int front;
    int rear;
    int size;
};
typedef struct que Queue;

// Initialization of the Queue 
Queue* createqueue()
{
    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    if(newQueue==NULL)
    {
        // Conditioning for the queue 
        printf("Entered Queue is Invalid in the code");
        return NULL;
    }
    newQueue->front = -1;
    newQueue->rear = -1;
    newQueue->size = 0;
    return newQueue;
}
int isEmpty(Queue* queue);
int isFull(Queue* queue);
Queue* enque(Queue* enq, int value );
Queue* deque(Queue* enq);
int peek(Queue *enq);

int main()
{
    int options = -1 , num = 0 ;
    // Initializing the array
    Queue* queue =NULL;
    while(1)
    {
        printf("\nBased on the usecase selet options to implement things");
        printf("\n Enter 1 for the Queue \n Enter 2 for the enqueue \n Enter 3 for Dequeue\n Enter 4 for the peek\n");
        scanf("%d",&options);
        switch(options)
        {
            case 1:
             queue = createqueue();
            // Changing the front and the rear
            break;
            case 2:
            printf("Enter the number to insert ");
            scanf("%d",&num);
            queue = enque(queue , num);
            break;
            case 3:
            queue= deque(queue);
            break;
            case 4:
            peek(queue);
            break;
            case 5:
            printf("Enter valid data");
            default:
            if (options==1)
            {
                break;
            }
        }
 }
    
    return 0;
} 
int isEmpty(Queue* queue){
    return (queue->size==0);
}
int isFull(Queue *queue)
{
    return (queue->size==MAXSIZE);
}

Queue* enque(Queue* enq, int value ){
    if(isFull(enq))
    {
        printf("QUeue is Empty to enter the data ");
        return enq;
    }
    if(isEmpty(enq))
    {
        // Get the thing started 
        enq->front = 0;
    }
    enq->rear = enq->rear+1;
    enq->items[enq->rear] = value;
    enq->size++;
    return enq;
    
}
 Queue* deque(Queue* enq){
    // Getting the front queue data deleted then shifting every number 
    if(isEmpty(enq)){
        printf("The given queue is empty ");
        return enq;
    }
    // Getting and deleting the front of the queue 
    // Shifting the queue to the fixed thing 
    printf("The value in the front is %d",enq->front);
    for(int i =enq->front ; i < (enq->rear) ; i++ )
    {
        // shifting the right most data into the 
        enq->items[i] = enq->items[i+1]; 
    }
    enq->rear--;
    enq->size--;
    // if queue is empty 
    if(isEmpty(enq))
    {
        enq->front = -1;
        enq->rear = -1;
    }
    return enq;
}
int peek(Queue *enq){
    if(isEmpty(enq)){
        printf("The given queue is empty ");
        return -1;
    }
    printf("The first data in the queue is %d\n",enq->items[enq->front]);
    return 0;

}
