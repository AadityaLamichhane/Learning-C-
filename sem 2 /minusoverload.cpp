#include<iostream>
using namespace std;
class number {
    public:
    int num1;


    number(int a)
    {
        num1 = a;

    }
    
    number operator +(number obj){
        number local;
        
        local.num1  = obj.num1 + num1;
        return local;

    }
    void display()
    {
        cout<<"the number is "<<num1;
    }
   
};
 
int main(){

    number n1(3);
    number n2(5);
    number n3 = n1+n2;
    n3.display();

}