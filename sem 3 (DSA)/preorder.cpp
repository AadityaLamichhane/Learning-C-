#include<iostream>
#include<vector>
using namespace std;
typedef struct Node {
   int value; 
    struct Node* left  ; 
    struct Node* right ; 
    Node(int data):value(data),left(nullptr) , right(nullptr){}
}Node;

void preorder (Node * tree , vector<int> &arr ){
    if(tree==NULL){
        return ; 

    }
arr.push_back(tree->value);
preorder(tree->left , arr );
preorder(tree->right , arr);

};
vector<int> preOrder( Node* tree){
        vector<int> arr ; 
        preorder(tree, arr);
        return arr ;
} 
int main()
{

    Node* root = new Node(1);
    if(root==NULL)
    {
        cout<<"Failed making the root";
        return 1; 
    }
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    for( int i :preOrder(root)){
        cout<<i<<endl;

    }
    return 0 ; 
}