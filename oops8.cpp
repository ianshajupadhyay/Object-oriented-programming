#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class student
{public:
 int rollno;
 string name;
 
 void getdata(){
	cin>>rollno;
        cin>>name;
 }
 void displaydata(){
 	cout<<rollno;
 	cout<<name;
 }
};
int main()
{
 student *s[20];
 int p=0,x=0;
 ofstream o;
 ifstream i;
 int size=0;
 o.open("data.txt");
 s[size] = new student;
 s[size]->getdata();
 o<<s[size]->rollno<<s[size]->name;
 o.close();
 i.open("data.txt");
 x=i.tellg();
 i.seekg(0);
 
while(!i.eof())
{
 
}
}
