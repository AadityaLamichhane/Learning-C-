#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		
		string name ;
		int* balance ;
	
	
		//allocating the memory
	person(string name , int balance )
	{
		cout<<"Person constructor"<<endl;
		//object constructor
		this->balance = new int ;
		this->name =name;
		
		//Getting the value insiide  the pointer by dirrefferencing
		
		*(this->balance) = balance ;
	
	}
	person( person &obj)
	{
		//making the copy constructor
		//Here since balance include something with the dynamicaaly memory i used Deep copy 
		this->name = obj.name;
		
		
		
		//   |    By doing this Shallow copy woulve happend that does only copy same address hence 
		//   V    poiting at the same memory address 
		//this->balance = obj.balance;
		
		//Deep copy 
		this->balance = new int ;
		*(this->balance) = *(obj.balance);
		
	}
	~person()
	{
		delete balance;
	}
		void info()
		{
			
			cout<<name<<endl;
			cout<<*balance <<endl;
		}
		
	
	
};
int main()
{
	person p1("Aaditya lamichhane",5000);

	p1.info();
	//using deep copy 
    person p2(p1);
    
    //changing the pointer value that are allowed using the Deep copy 
	*(p2.balance) = 6000;
	p2.info();
	
	
	
}
