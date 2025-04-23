#include<iostream>
#define MAX_SIZE 20
using namespace std;

typedef struct Queue1 {
    int value[MAX_SIZE] ;
    int front = 0 ; 
    int rear = -1 ;  
}Q;

void Enque( Q &q1 , int value  ){
    // add the thing 
    if( q1.rear +1 %MAX_SIZE == q1.front){
    cout<<"The data is full ";
    return ;
    }
    q1.rear = q1.rear+1 % MAX_SIZE;
    q1.value[q1.rear] = value ; 
    
    
}
void Dequeue(Q &q1){
    // Get the value on the front and then delete the value
    if((q1.rear+1)%MAX_SIZE == q1.front){
        cout<<"enter the number "<<endl;
        return ;
    }
    cout<<"The data is "<<q1.value[q1.front];
    q1.front++;
}
void printall( Q &q1 ){
    for ( int i = q1.front ; i <= q1.rear ; i ++){
        cout<<"The data is "<<q1.value[i]<<endl;
    }
}
int main()
{
    Queue1 arr;
    int options;
  
    while (true)
    {
        cout<<"What do  you want to do "<<endl;
        cout<<"Enter 1 to Enqueue ";
        cin>>options;

        switch(options)
        {
            case 1:
                int value;
                cout<<"Enter the data to be inserted "<<endl;
                cin>>value;
                Enque(arr ,value );
                break;
            case 2:
                printall(arr);
                break;
            case 3:
                Dequeue(arr);
                break;
            default :
                cout<<"Default is running ";
                return 0;
        }
    
    
    }
    return 0;
}