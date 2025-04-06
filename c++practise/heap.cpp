#include<vector>
#include<iostream>
using namespace std;
class Head{
    vector <int> vec;
    public:
        void heapify(int parentIndex ) 
        {
            if(parentIndex>vec.size()){
                return ; 
            }
            int maxId = parentIndex ; 
            int leftindex = parentIndex* 2 + 1 ;
            int rightindex  = parentIndex* 2 + 2 ;
            // Comparing the value between the parent and the left and the right element to start 
             if( leftindex < vec.size() && vec[leftindex]>vec[parentIndex] ){
                maxId = leftindex; 
             }
             if(rightindex < vec.size() && vec[rightindex]>vec[parentIndex]){
                maxId = rightindex;
             }
            swap(parentIndex ,maxId);
            if(maxId != parentIndex){
                heapify(maxId);
            }

        }

        void push (int value )
        {
            vec.push_back(value );
            int size_index = vec.size()-1;
            int parent =( size_index - 1 )/ 2;  
            while(vec[parent]<vec[size_index ] && parent>=0 ){
               swap(vec[parent] ,vec[size_index]);
               size_index = parent ; 
               parent =( size_index - 1 )/ 2;
            }
        }
        void pop()
        {
            swap(vec[0], vec[vec.size()-1]);
            vec.pop_back();
            // heapify function using the top to buttom apraoc h
            // Compare the function from the
            heapify(0);
        }
};
int main()
{
    cout<<"Enter the  "<<endl;
    return 0;
}