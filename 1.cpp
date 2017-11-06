#include<bits/stdc++.h>
using namespace std;
class weather
{
 int day,ltemp,htemp,rfall,sfall;
 static float sum1,sum2,sum3,sum4;
 public :
	static int x;
	int check;
	weather();
	void getdata()
	{
		cin>>day>>ltemp>>htemp>>rfall>>sfall;
	}
	static void sum()
	{
		sum1=0;
		sum2=0;
		sum3=0;
		sum4=0;
	}
	void del();
	void modify()
	{
		int a;
        	cout<<"what you want to modify\n1.ltemp\n2.htemp\n3.rfall\n4.sfall\n";
                cin>>a;
                cout<<"write new value\n";
   		     if(a==1)
   		         cin>>ltemp;
   		     if(a==2)
   		         cin>>htemp;
   		     if(a==3)
   		         cin>>rfall;
   		     if(a==4)
   	         	cin>>sfall;
	}
	 friend void avg(weather a);
	 void display()
	{
		cout<<day<<"   "<<ltemp<<"     "<<htemp<<"    "<<rfall<<"   "<<sfall;
		sum1=sum1+ltemp;
		sum2=sum2+htemp;
		sum3=sum3+rfall;
		sum4=sum4+sfall;
	}

};
weather::weather()
   {
    day=0;
    ltemp=0;
    htemp=0;
    rfall=0;
    sfall=0;
    check=0;
    }
void avg(weather a)
	{
		cout<<"avg"<<"""\t"<<a.sum1/a.x<<"\t"<<a.sum2/a.x<<"\t"<<a.sum3/a.x<<"\t"<<a.sum4/a.x<<"\n";
    	}
void weather::del()
    {
    ltemp=0;htemp=0;rfall=0;sfall=0;day=0;
    }

float weather::sum1;float weather::sum2;float weather::sum3;float weather::sum4;int weather::x;
int main()
{
  	int m;
        weather w[31];
	
    	while(1)
        {
            cout<<"what you want to perform\n1.get data\n2.display data\n3.delete data of particular day\n4.display data of particular day\n5.average\n6.modify\n7.exit\n";

            w[1].x;
            cin>>m;
           switch(m)
		{
			case 1: 
				cout<<"Enter how many data u want to enetr";
				cin>>w[1].x;
				cout<<"day    ltemp   htemp   rfall   sfall\n";
                            	for(int i=0;i<w[1].x;i++)
                            	{
                              	  w[i].getdata();
                            	}
				break;
			case 2:
				weather::sum();
				cout<<"day    ltemp   htemp   rfall   sfall\n";
                            	for(int i=0;i<w[1].x;i++)
                            	{
                              	  w[i].display();
                            	}
				break;
			case 3:    {
                            int a;
                            int c;
                            cout<<"\nwhich day data you want to delete\n";
                            cin>>a;
                            
                            c=a-1;
                            if(a>w[1].x)
                            { 
				cout<<"invalid since record not entered before";
			    }
			    else
			    {
				w[c].del();
                           	 weather::sum();
                            	for(int i=0;i<w[1].x;i++)
                            	{
                            	   w[i].display();
                            	}
                            }
			break;
                        }
			
				
		}
	}
}



































