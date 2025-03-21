#include<iostream>
using namespace std;
class rectangle {
    public:
    int length;
    int breadth;
     
};
class box : public rectangle{
    public:
    box(int a , int b )
    {
        length = a;
        breadth = b;
    }
    int area(){
        cout<< (length * breadth)<<endl;
    }
};
int main()
{
   
    box b1(4,3);
    
  b1.area();
    

}
