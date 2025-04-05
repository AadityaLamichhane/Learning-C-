#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int value ;
        Node* left ;
        Node* right ; 
        Node(int value)
        {
            this->value= value ;
        }
        
};
static int index = -1; 
Node* buildTree (vector <int> numbervalue)
{
        index++;
        if(numbervalue[index]==-1){
            return NULL;

        }
    // GEt the value and then go to the child left 
        Node* head  = new Node(numbervalue[index]);
    // Getting the right of the head
        head->left  = buildTree(numbervalue); 
        head->right = buildTree(numbervalue);
        return head ; 
} 
int main()
{
    vector <int> data ={1, 2 , 4 , -1 , -1, 5 , -1 , -1 , 3 , -1, 6 , -1, -1 };
    // Return type of te tree is class 
        Node* trees  = buildTree(data);  
        cout<<"Root = "<<trees->value<<endl;
        cout<<"Rnak 1 = "<<trees->left->value<<endl;
        
    return 0 ;
}