#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;
class Student {
    public: 
        string name ;
        int marks;
            Student(int marks, string name ) {
                    this->marks = marks ;
                    this->name = name;
            }
            bool operator < (const Student  &studentqueue)const {
                return (this->marks < studentqueue.marks);
            }
};
int main()
{
    priority_queue <Student> std;
    std.push(Student( 86 , "Aaditya lamichhane"));
    std.push(Student(90,"Abiral Lamichhane"));
    while(!std.empty()){
        
        cout<< "Top = " << std.top().name <<endl;
        std.pop();

    }
    return 0 ;
}