#include<iostream>
using namespace std;
class A {
	public: 
	int x ;
	protected:
		int y;
	private:
		int z;
		
};
class B : public A {
	//x is public
	//y is protected
	
};
class C: protected A
{
	//x is protected 
	//y is proted s
}
