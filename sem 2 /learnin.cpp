#include<iostream>
#include<vector>
using namespace std;

void  heapify(int i , vector<int> &arr, int size )
{
int left = 2*i +1 ;
int right = 2*i +2 ;
int maxindex = i ; 
if(left< size && arr[left]> arr[maxindex]){
    maxindex = left;
}
if(right<size && arr[right]>arr[maxindex] ){
    maxindex  = right;
}
if(maxindex != i ){
    swap(arr[i],arr[maxindex]);
    heapify(maxindex ,  arr , size );
}
return ;

}
void heapifySort(vector<int> &arr) {
    int n = arr.size();
    for( int i = (n/2-1); i >= 0 ; i--){
        heapify(i , arr , n); 
    }
        for ( int i= n-1 ; i >=0 ; i--)
    {
        swap(arr[0], arr[i]);
        heapify( 0 ,arr , i );
    }
    
}
int main()
{
    vector <int> randomArray  ={ 0,1,5,9,18};
    heapifySort(randomArray);
    for(int i = 0 ; i <randomArray.size(); i++)
    {
        cout<<randomArray[i]<<endl;
    }
    return 0 ;
}
