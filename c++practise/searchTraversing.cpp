#include<iostream>
using namespace std;
class LinkedList{
    // Getting the linked list of the pointer array
    public:
        int number; 
        LinkedList * next ;
    LinkedList(int number  , LinkedList* point)
    {
        this->number = number; 
        this->next = point;

    } 
    LinkedList(int number )
    {
        this->number = number; 
        this->next = NULL;

    } 
    void FindAndPrint ( int value ){
        // Getting the value and then finding the value 
        LinkedList * temphead = this;
        while( temphead->next!=NULL)
        {

            if(temphead->number == value )
            {
                printf("The value was found in the linked list  ");
                return ; 
            }
            temphead  = temphead->next ;
        }
        cout<<"Value was not found in the linked list "<<endl;
        return ;
    }
};
int main()
{
    int a[] = {1, 7 , 8 ,9 , 10  };
    LinkedList* head = new LinkedList(a[0]);
    head->next  = new LinkedList(a[1]);
    head->next->next = new LinkedList(a[2]);
    head->next->next->next = new LinkedList(a[3]);
    int toSearch;
    cout<<"Enter the value to search in the linked  list "<<endl;
    cin>>toSearch;
    cout<<"searching the value in the array "<<endl;
    cout<<"------------"<<endl;
    head->FindAndPrint(toSearch);
    return 0;
}