#include<iostream>
#inlude<string>
using namespace std;
class Teacher {
	public:
		
		string name;
		string subject;
		string dept;
		
		//Creating the constructor
		Teacher()
		{
			dept ="Computer Science"
		}
		Teacher(string name , string dept, string subject)
		{
			this->name = name;
			this->subject=subject;
			this->dept=dept;
		}
			
	
		
		void ChangeDep(string newDept)
		{
			dept = newDept;
			
		}
		
		void getInfo()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Subject:"<<subject<<endl;
			
		}
		
};
