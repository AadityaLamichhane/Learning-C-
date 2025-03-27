#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number of the ELement in the array "<<endl;
    cin>>number;
    int arr[number];
    // Getting the number in the array
    for(int i = 0; i<number; i++){
        cout<<"Enter the number at"<<i<<"in the array \n"<<endl;
        cin>>arr[i];
        }
    int hash[13] = {0};
    for(int i = 0 ; i<number; i++){
        hash[arr[i]]++; 
        }
        //Prompt to ask for the number to found the array 
    // Gettiing the number of the queris
    int que; 
    cout<<"Enter the number of the queries"<<endl;
    cin>>que;
    while(que)
    {
        que--;
        int num1 ;
        cout<<"Enter the nuber to find the frequency "<<endl;
        cin>>num1;
        // getting the function that returns the hash value of the function
        cout<<"The hash value of the "<<num1<<" is "<<hash[arr[num1]]<<endl;
        } 
    return 0;
}