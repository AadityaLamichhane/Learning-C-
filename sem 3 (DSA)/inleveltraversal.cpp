#include<vector>
#include<iostream>
#include<queue>
using namespace std; 
typedef struct Node{
    int value ; 
    Node* right ; 
    Node* left ; 
    Node(int value): value(value) , right(nullptr) , left(nullptr){}
}Node;
    
vector <vector<int>> inordertraverse(Node *tree){
// go to the each level and store the left and the right to the each level of the node as weell 
    queue<Node*> rootrow ;
    vector <vector<int>> inorder ;
    if(tree == nullptr){
        return inorder ; 
    }
    rootrow.push(tree);
    while(!rootrow.empty()){
        // Get the size of the queue 
        int size = rootrow.size();
        vector <int> level;
        for( int i = 0 ; i<size ; i++){
            Node* node = rootrow.front();
            rootrow.pop();
            level.push_back(node->value);
            if(node->left!=nullptr){
                rootrow.push(node->left);
            }
            if(node->right!=nullptr){
                rootrow.push(node->right);
            }
        }
        inorder.push_back(level);
    }
    return inorder;

};
void printArray(const vector<int> & tree){
    for(int value : tree){
        cout<<value;
    }
    cout<<endl;
}
int main()
{

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    vector<vector<int>> result  = inordertraverse(root);
    for (const vector<int>& level : result ){
        printArray(level);
    }
    
    return 0 ; 
}
