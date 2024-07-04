//This is really applicabble when the data need to be handled in easy way 
//Example : we need to multiplatee the matrixx 
//Given that the logic behindd he mul is same 
//this feature can be used
#include<iostream>
using namespace std;
class Complex{
	private:
		double real ;
		double imag;
	
	public:
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex(double rl , double im){
			real = rl;
			imag = im;
		}
		Complex operator +(const Complex obj){
			Complex res;
			res.real = this->real+obj.real;
			res.imag = this->imag+obj.imag;
			return res;
			
		}
		Complex operator++(){
			Complex temp = *this;
			real  = real ++;
			imag  = imag ++;
			
			return temp;
		}
		void display(){
			cout<<"Real :"<<real<<" Imaginary :"<<imag<<endl;
		}
};
int main()
{
	Complex  c1(3.0,4.0);
	Complex c2(1.0,2.0);

	c1.display();
	c2.display();
	//this uses the addition opereator to add the inner elemeent of the opereator
	Complex c3 = c1+c2;
	c3.display();
	Complex c4= ++c3;
	c4.display();
	
	return 0;
}
//Note :: , ?: , alignof , new[]..delete[],typeid ,sizeof..
//These type of opereator cannot be overloaded in the file 
