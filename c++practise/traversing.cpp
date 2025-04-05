#include<iostream>
#include<vector>
using namespace std;
class Node{
    private: 
    int number ;
    public: 
        Node *next;
         Node(int a )
        {
            this->number = a;
            this->next = NULL;
        };
        Node( int number  , Node *next  ){
            this->number = number  ;
            this->next = next ;
        }
        
};
    int nodeLengthOfObject(Node *head  ){
    Node *temp  = head ;
    // untill the pointer hit the null get the count to increament and then return
    int count  = 0;
    // Iterate to the every node
     
    while(temp!=NULL)
    {
        temp = temp->next; 
        count = count + 1 ;
    }
    return  count; 
            
    }

int main()
{
    int a[] = {1, 7 , 8 ,9 , 10  };
    // Counting the number of the count while traversing to the ponter 

    Node* head = new Node(a[0]);
    head->next  = new Node(a[1]);
    head->next->next = new Node(a[2]);
    head->next->next->next = new Node(a[3]);
    // Length of the traversing array 
    cout<<"The length of the traversing element is "<<nodeLengthOfObject(head)<<endl;


    
    return 0;
}