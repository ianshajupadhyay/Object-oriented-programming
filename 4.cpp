#include <bits/stdc++.h>
using namespace std;
class a{
    protected:
    string name,blood;
    int dob;
    public:
        a(){
            name="\0";
            dob=0;
            blood="\0";
        }
        a(string name1,string blood1,int dob1){
            name = name1;
            blood = blood1;
            dob = dob1;
        }
};
class b{
    protected:
    int height,weight;
    public:
        b(){
            height = 0;
            weight = 0;
        }
        b(int height1,int weight1){
            height = height1;
            weight = weight1;
        }
};
class c{
    protected:
    string address;
    int polno;
    public:
        c(){
            address = "\0";
            polno = 0;
        }
        c(string address1,int polno1){
            address = address1;
            polno = polno1;
        }
};
class d: protected a,protected b,public c{
    protected:
    int telno,licno;
    public:
        d(){
            telno = 0;
            licno = 0;
        }
        d(string name1,string blood1,int dob1,int height1,int weight1,string address1,int polno1,int telno1,int licno1):a(name1,blood1,dob1),b(height1,weight1),c(address1,polno1){
            telno = telno1;
            licno = licno1;
        }
        void display(){
            cout<<name<<"\t\t"<<blood<<"\t\t"<<dob<<"\t\t"<<height<<"\t\t"<<weight<<"\t\t"<<address<<"\t\t"<<polno<<"\t\t"<<telno<<"\t\t"<<licno<<"\n";
        }
        string ret_name(){
            return name;
        }
        void shift(d *ptr1[100],int i,int x){
            int j;
            for(j=i;j<x;j++){
                ptr1[j]=ptr1[j+1];
            }
        }
};
int main()
{
    d *ptr[100];
    int dob1,height1,weight1,polno1,telno1,flag,licno1,i,j,k=0,ch;
    string name1,blood1,address1;
    do{
        cout<<":::::::::::: MENU ::::::::::::\n";
        cout<<"1.Add data\t\t2.Display All\t\t3.delete data\t\t4.Edit data\t\t5.Search entry\t\t6.Exit\n";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter the name of new data : ";
                    cin>>name1;
                    flag = 1;
                    for(i=0;i<k;i++){
                        if( name1 == ptr[i] -> ret_name() ){
                            cout<<"Data already present \n";
                            flag = 0;
                        }
                    }
                    if(flag){
                            cout<<"Enter blood : ";
                            cin>>blood1;
                            cout<<"Enter dob : ";
                            cin>>dob1;
                            cout<<"Enter height : ";
                            cin>>height1;
                            cout<<"Enter weight : ";
                            cin>>weight1;
                            cout<<"Enter Address : ";
                            cin>>address1;
                            cout<<"Enter policy no : ";
                            cin>>polno1;
                            cout<<"Enter telno : ";
                            cin>>telno1;
                            cout<<"Enter licence no : ";
                            cin>>licno1;
                            ptr[k++]=new d(name1,blood1,dob1,height1,weight1,address1,polno1,telno1,licno1);
                    }
                    break;
            case 2: cout<<"Name\t\tblood\t\tdob\t\theight\t\tweight\t\taddress\t\tpolno\t\ttelno\t\tlicno\n";
                    for(i=0;i<k;i++){
                        ptr[i] -> display();
                    }
                    break;
            case 3: cout<<"Enter the name of entry to delete : ";
                    cin>>name1;
                    flag = 1;
                    for(i=0;i<k;i++){
                        if( name1 == ptr[i] -> ret_name() ){
                            delete(ptr[i]);
                            flag = 0;
                            k--;
                            break;
                        }
                    }
                    ptr[0] -> shift(ptr,i,k);
                    if(flag){
                        cout<<"Invalid name\n";
                    }
                    break;
            case 4: cout<<"Enter the name of entry to edit : ";
                    cin>>name1;
                    for(i=0;i<k;i++){
                        if(name1== ptr[i]-> ret_name()){
                            cout<<"Enter blood : ";
                            cin>>blood1;
                            cout<<"Enter dob : ";
                            cin>>dob1;
                            cout<<"Enter height : ";
                            cin>>height1;
                            cout<<"Enter weight : ";
                            cin>>weight1;
                            cout<<"Enter Address : ";
                            cin>>address1;
                            cout<<"Enter policy no : ";
                            cin>>polno1;
                            cout<<"Enter telno : ";
                            cin>>telno1;
                            cout<<"Enter licence no : ";
                            cin>>licno1;
                            ptr[i]=new d(name1,blood1,dob1,height1,weight1,address1,polno1,telno1,licno1);
                            break;
                        }
                    }
                    break;
            case 5: cout<<"Enter the name to search : ";
                    cin>>name1;
                    cout<<"Name\t\tblood\t\tdob\t\theight\t\tweight\t\taddress\t\tpolno\t\ttelno\t\tlicno\n";
                    for(i=0;i<k;i++){
                        if(name1== ptr[i]-> ret_name()){
                            ptr[i] -> display();
                            break;
                        }
                    }
                    break;
            case 6: return 0;
                    break;
 
        }
    }while(1);
 
 
}
