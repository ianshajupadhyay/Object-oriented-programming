/*
10. Write a C++ program that creates an output file, writes few records into it, closes the file and
open it again as an input file and read the information from the file
*/

#include<iostream>
#include<fstream>
using namespace std;
 
int main() 
{

    int sum=0,count=0,check=0;
    ofstream out;
    out.open("anshaj.txt");
    cout<<"Enter data: ";
    char *a;
    a=new char;
    while(cin.getline(a,20))
    {
        out<<a<<endl;
    }
    out.close();
    char data[100]; 
    ifstream ifile; 
     
    //create a text file before executing.
    ifile.open ("anshaj.txt"); 
    while ( !ifile.eof() ) 
    { 
        ifile.getline (data, 100); 
        cout << data << endl; 
    }
    ifile.close();
    return 0;
}
