#include<iostream>
#include <cmath>
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
        // Hashed value 
        int hash[26]= {0};
    for (int i = 0 ; i <num ; i++)
    {
        hash[iter[num]-'a']++; 
    }
    int  q;
    std::cout<<"Enter the number of the string query"<<std::endl;
    std::cin>>q;
    while(q){
        q--;
        char temp ;
        std::cout<<"Chractor to know freq"<<std::endl;
        std::cin>>temp;
        if (std::isnan(temp)){
            std::cout << "Invalid input. Please enter a valid character." << std::endl;
            continue;
        }
        std::cout<<"The frequency of the alphabet using the hashing is "<<hash[temp-'a']<<std::endl;

    }
    return 0  ;
}