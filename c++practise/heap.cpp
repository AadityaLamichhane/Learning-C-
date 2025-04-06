#include<vector>
#include<iostream>
using namespace std;
class Heap{
    vector <int> vec;
    public:
        void heapify(int parentIndex ) 
        {
            if(parentIndex >= vec.size()){
                return ;  
            }
            int maxId = parentIndex ; 
            int leftindex = parentIndex*2 + 1 ;
            int rightindex  = parentIndex*2 + 2 ;
            // Comparing the value between the parent and the left and the right element to start 
             if( leftindex < vec.size() && vec[leftindex]>vec[parentIndex] ){
                maxId = leftindex; 
             }
             if(rightindex < vec.size() && vec[rightindex]>vec[parentIndex]){
                maxId = rightindex;
             }
            swap(vec[parentIndex] ,vec[maxId]);
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
        int top (){
            // gget the top of the heap 
            return vec[0];
        }
};
int main()
{
    Heap h;
    h.push(4);
    h.push(8);
    h.push(2);
    h.push(21);
    cout<<"Rank 0 = "<<h.top()<<endl;
    h.pop();
    cout<<"Rank 0 = "<<h.top()<<endl;
    h.pop();
    cout<<"Rank 0 = "<<h.top()<<endl;
    return 0;
}