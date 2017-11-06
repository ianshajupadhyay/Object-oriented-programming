#include<iostream>
using namespace std;
class shop
{
 string *title,*author;
 int *id,*cost,*stock;
 public:
 shop()
 {
	title=new string;
	author = new string;
	id= new int;
	cost = new int;
	stock = new int;	
 }
 void getdata(int identity)
 {
	*id=identity;
	cout<<"Enter title\n";
	cin>>*title;
	cout<<"Enter author\n";
	cin>>*author;
	cout<<"Enter cost\n";
	cin>>*cost;
	cout<<"Enter stock\n";
	cin>>*stock;
 }
 void display()
 {
	cout<<*id<<"   "<<*title<<"    "<<*author<<"    "<<*cost<<"     "<<*stock;
 }
 void update_stock(int l)
 {
	*stock+=l;
 }
 int ret_id()
 {
	return *id;
 }
 int ret_stock()
 {
	return *stock;
 }
 int ret_cost()
 {
	return *cost;
 }
};
int main()
{
	int id,k=0;int p,x,flag =1,kharid,c;
	shop book[100];
	while(1)
	{
		cin>>x;
		switch(x)
		{
			case 1:
				cout<<"Enter the book id to be added\n";
				cin>>id;
	
				for(int i=0;i<k;i++)
				{
				if(id==book[i].ret_id())
				{
					cout<<"Book is already present";
					cin>>p;
					book[i].update_stock(p);
					flag=0;
				}
				}
				if(flag)
				{
					book[k++].getdata(id);
				}
				break;
			case 2:
				for(int i=0;i<k;i++)
				{
					cout<<"\n";
					book[i].display();
					cout<<"\n";
				}
				break;
			case 3:
				cout<<"Enetr the book youwant to purchase\n";
				cin>>id;
				flag=1;
				for(int i=0;i<k;i++)
				{
					if(id==book[i].ret_id())
					{
						cout<<"Enetr the no of books u want to purchae";
						cin>>kharid;
						if(book[i].ret_stock()<kharid)
						{
							cout<<"Out of stock";
						}
						else
						{
							book[i].update_stock(-kharid);
							c++;
							cout<<"cost = "<<book[i].ret_cost() * kharid;
						}
					}
				}
				break;				
			case 4:
				cout<<"Total transactiocs"<<c;
				break;
			case 5:
				return 0;
		}
	}
}
ye le aacha code hai aur easy bhi

nii hogyaa...............
chodh

