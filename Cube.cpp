#include<iostream>
#include<string>
using namespace std ;
class Cube{
	public :
		int length ;
		int breadth ;
		int height;
		
		
		
		//This is parameterized constructor 
		Cube(int length,int breadth,int height){
			this->length = length;
			this->breadth = breadth;
			this->height = height;
		}
		
		
		Cube(){
			this->length=1 ;
		 this->breadth=1 ;
		 this->height=1;
			
		}
		
		 int  getVolume()
		{
			return (length*breadth*height);	
		}
		int getArea()
		{
			return (length * breadth);
		}
		
};
int main()
{
	Cube c(2,3,4);
	int Area = c.getArea();
	
	cout <<Area<<endl;
}
