#include<iostream>
using namespace std;
void Test()
{
	static int x = 1 ;
	x = ++x;
	int y = 1 ;
	y = ++y ;
	
	cout<<"Value of the x is "<<x<<endl<<"The value of the y is  "<<y<<endl;
	

}
int main()
{
	Test();
	//Here calling the function the value of the integer is inreased by 
	Test();
	return 0;

}

