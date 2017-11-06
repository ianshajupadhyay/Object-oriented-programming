#include<bits/stdc++.h>
using namespace std;
class per
{
 public:
 	char name[100];
};
class pro
{
 public:
	int salary;
};
class aca
{
 public:
	char passed[100];
};
class bio:public per,public pro,public aca
{
 public :
	void getdata()
	{
		cin>>name>>salary>>passed;
	}
	void putdata()
	{
		cout<<name<<endl<<salary<<endl<<passed;
	}
};
int main()

{
 bio x;
 x.getdata();
 x.putdata();
}
