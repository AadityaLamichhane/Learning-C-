#include<iostream>
using namespace std;
typedef struct N{
    int value ;
    struct N * next ;
}Node;
struct NodeList {
    Node * starting = NULL  ;
    Node * ending  = NULL ;
    int size = 0 ; 
  };
Node *CreateNode(int value) {
    Node* temp =(Node*) malloc(sizeof(Node));
    if(temp == NULL ){
        printf("Cannot allocate the memory for the data");
        return NULL;
    }
    temp->value = value ;
    temp->next = NULL;
    return temp; 

}
NodeList *AddNode(NodeList * prevNode){
    
    int num ; 
    printf("Enter the value to be added in the new node ");
    scanf("%d" , & num);
    
    if(prevNode ==NULL ){
      prevNode->starting=   CreateNode(num);
      prevNode->ending  = prevNode->starting; 
      prevNode->size++;
      } 
    //   Adding to the start of the Linked list 
    prevNode->starting->next = CreateNode(num);
    
}
int main()
{
    NodeList *temp  =(NodeList*) malloc(sizeof(NodeList));
    int num ; 
    printf("Enter what do you want to do with the data ");
    scanf("%d",&num);
    switch(num){
        case 1 :
        AddNode(temp);
        break ; 
        case 2 :
        while(1){
            
        }
        }
    }
    return 0 ;
}