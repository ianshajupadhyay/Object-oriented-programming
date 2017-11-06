#include<iostream>
using namespace std;
double divide(double x,double y)
{
	if(y==0)
		throw "error\n";
	else
		return (double)x/y;
}
int main()
{
	double x,y,p;
	cin>>x>>y;
	try
	{
		p=divide(x,y);
		cout<<p;

	}

	catch(const char *msg)
	{
		cerr<<msg<<endl;
		cin>>x>>y;		
		p=divide(x,y);
		cout<<p;
		
	}
}
