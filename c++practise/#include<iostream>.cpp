#include<iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of the charactor to input "<<std::endl;
    std::cin>>num;
    // Iterate Over the number of index to get the right number of data
    char iter[num]; 
    for( int i = 0 ; i<num ; i++ )
        {
                std::cin>>iter[i];
                
        }
    return ;
}