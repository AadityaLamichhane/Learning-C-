#include<iostream>
#include<vector>

using namespace std;
typedef struct NodeTree{
	
        int value ; 
        struct NodeTree* right; 
        struct NodeTree* left;
        NodeTree(int data):value(data) ,left(nullptr) ,right(nullptr){} 
}NodeTree;

void postorder ( NodeTree* root , vector<int>&arr){
    if(root==NULL)
    {
        return ; 
    }
    postorder(root->left ,arr );
    postorder(root->right, arr);
    arr.push_back(root->value);
}
vector<int> postOrder( NodeTree* root ){
    vector<int> arr ; 
    postorder(root , arr);
    // After handling the data using the reference method 
    return arr; 
    
}
int main(){
    int data ; 
    cout<<"Enter the number you want to enter in the binary tree"<<endl;
    cin>>data;
    NodeTree* root = new NodeTree(1);
    root->left = new NodeTree(2);
    root->right = new NodeTree(3);
    root->left->left = new NodeTree(4);
    root->left->right = new NodeTree(5);

    
    vector<int> obtainedArray = postOrder(root);
    for (int i :obtainedArray){
        cout<<i<<endl;
    }

	return 0  ; }
