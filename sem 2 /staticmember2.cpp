#include<iostream>
using namespace std;

class Example{
	static int number;
	int n;
	public:
		void set_n()
		{
			n=++number; //number is assigned then the number is changed to the number +1						
		}
		void shown()
		{
			cout<<"Value of the n = "<<n<<endl;		
		}
		static void showNumber()
		{
			cout<<"Value of the number = "<<number<<endl;
		}
};
int Example::number ;
int main()
{
	Example ex1 ,ex2;
	ex1.set_n();
	ex2.set_n();
	ex1.shown();
	ex1.shown();
	Example::showNumber();
	return 0 ;
}
