#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
	int r,i;
	public:
		Complex()
		{
			r=0;
			i=0;
		}
		void read()
		{
			cout<<"Enter real part : ";
			cin>>r;
			cout<<"Enter imaginary part : ";
			cin>>i;
		}
		void display()
		{
			cout<<r;
			cout<<"+";
			cout<<i<<"i";
			cout<<endl;
		}
		Complex friend operator+(Complex c1,Complex c2)
		{
			Complex result;
			result.r=c1.r+c2.r;
			result.i=c1.i+c2.i;
			return result;
		}
		Complex friend operator-(Complex c1,Complex c2)
		{
			Complex result;
			result.r=c1.r-c2.r;
			result.i=c1.i-c2.i;
			return result;	
		}
		
		Complex operator*(Complex c1)
		{
			Complex res;
			res.r=(r*c1.r)-(i*c1.i);
			res.i=(r*c1.i)+(i*c1.r);
			return res;	
		}
		Complex operator/(Complex c2)
		{
			Complex res;
			res.r=((r*c2.r)+(i*c2.i))/((c2.i*c2.i)+(c2.r*c2.r));
			res.i=((r*c2.i)-(i*c2.r))/((c2.i*c2.i)+(c2.r*c2.r));
			return res;	
		}
};
int main()
{
	Complex a,b,c;
	cout<<"Enetr fisrt no:\n";	
	a.read();
	a.display();

	cout<<"Enetr second no:\n";
	b.read();
	b.display();
	c=a+b;
	cout<<"Addition of complex no is : ";
	c.display();
	c=a-b;
	cout<<"Subtraction of complex no is : ";
	c.display();
	c=a*b;
	cout<<"Multiplication of complex no is : ";
	c.display();
	c=a/b;
	cout<<"Divison of complex no is : ";
	c.display();
	
	
}
