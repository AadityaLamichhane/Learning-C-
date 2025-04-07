#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value; 
    struct Node* right ; 
    struct Node* left ; 

};
typedef struct Node Node ; 
Node* last =NULL; 
Node* front =NULL; 
void insertNode(int value ){
    Node* NewNode = (Node*)(malloc(sizeof(Node)));
    if(NewNode ==NULL){
        printf("The data is null");
        return ;
    }
        NewNode->value = value ; 
    if(front==NULL){
        front  = NewNode ;
        last = NewNode; 
        NewNode->right  = NewNode;
        NewNode->left = NewNode->right ;   
        return ; 
    }
    NewNode->left = last ; 
    last->right = NewNode ;
    NewNode->right = front ;
    last = NewNode ;  
    front->left = last ; 
    return ; 
       
}
void DeleteNode(){
    if(front ==NULL){
        printf("Emprt Node  ");
        return ;
    }
    if(last == front ){
        printf("The data in the front is %d ",last->value);
        free(last);
        last =front = NULL;
    }

    last->left->right  = front  ;
    front->left = last->left ; 
    free(last); 
    return ; 

}
void display (){
    if(front ==NULL )
    {
        return ;
    }
    Node *temp =front ;
    do{ 
        printf("%d " , temp ->value);
        temp= temp ->right ;
    }while(temp != front );
    printf("\n");

}
int main()
{ 
    int choise , value  ;  
    do{
        printf("Enter the thnigs to do ");
        scanf("%d",&choise);     
        switch(choise){
            case 1:
            printf("enter the value ");
            scanf("%d",&value);
            insertNode(value);
            break ; 
            case 2 :
            DeleteNode();
            
            break ;
            case 3 :
            display();
            break;
        }

    }while(choise != 0);
    
    
    return 0 ; 
}