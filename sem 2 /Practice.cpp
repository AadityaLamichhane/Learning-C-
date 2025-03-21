//This code file will demonstrate how constructr work how public function are accessed 
// and how can it be used to point self file and insight
#include<iostream>
#include<string>
using namespace std;
class Teacher {
	public:
		string name, subject, branch ;
		
		 void changebranch(string branch)
		 {
		 	this->branch = branch;
		 }
		 
		Teacher(){
		cout<<"This object was constructed"<<endl;
		subject ="Computer Science";
		}
		
		
		Teacher(string name , string subject, string branch)
		{
			this->name = name;
			this->subject = subject;
		 changebranch(branch);
		 cout<<"Everythinngs is sorted"<<endl;
			
		}
		void showname()
		{
			cout<< name<<endl;
		}
		void info()
		{
			cout<<name<<endl;
			cout<<subject<<endl;
			cout<<branch<<endl;
		}
		
};
int main()
{
	Teacher t;
	t.name = "Abirsl";
	cout<<"Teacher iis declared"<<endl;
	Teacher t1("Aaditya Lamichhane","computer science","Computer major");
	cout<<"Everything was sorted upto there"<<endl;
	t1.info();
	t.info();
}
