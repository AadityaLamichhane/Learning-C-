#include<iostream>
#define MAX_SIZE 100
using namespace std;
typedef struct queue {
    int front ;
    int rear;
    int size ;
    int value[MAX_SIZE ];   
}Queue;

void Enque(Queue &q , int value ){
    if(q.rear == MAX_SIZE-1 ){
        printf("The value is empty ");
        return ;
        
    }
    q.rear++;
    q.value[q.rear] = value;
    q.size++;
    return ;
 }
 void Dequeue( Queue &q , int value){
    if(q.rear<q.front){
        printf("The stack is empty ");
    }
    // Delete the front data

    printf("The data is %d :" , q.value[q.front]);
    for( int i = 0 ; i <q.size; i++){
        q.value[i] = q.value[i+1];
    
    }
}
int main()
{
    

    return 0 ; 
}