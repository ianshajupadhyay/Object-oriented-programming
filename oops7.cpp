#include<iostream>
using namespace std;
template <class T>
class matrix
{
   	int i,j,m,n;
   	T mat1[20][20],mat2[20][20],mul[20][20],sum[20][20],s[20][20];
	public:
	void read();
	void add()
	{
      		cout<<"the addition of matrix is :";
		  for(i=0;i<m;i++)
      			{
       			    for(j=0;j<n;j++)
       			    {
        		       sum[i][j]=mat1[i][j]+mat2[i][j];
        		   }
    			  }

		   for(i=0;i<m;i++)
        		{
         		   cout<<"\n";
         		   for(j=0;j<n;j++)
         		   {
         		       std::cout<<"\t\t"<<sum[i][j];
         		   }
        		}
	}
	void sub()
                 {
			 std::cout<<"the subtraction of matrix is :";
	 		for(i=0;i<m;i++)	
			 for(j=0;j<n;j++)
	 			 {
	  				s[i][j]=mat1[i][j]-mat2[i][j];
				 }
	  		 for(i=0;i<m;i++)
			{
	  			std::cout<<"\n";
	  			 for(j=0;j<n;j++)
	  				   std::cout<<"\t\t"<<s[i][j];
   				 }
			}
	void mult()
		{
		 std::cout<<endl<<"the multiplication of matrix is :"<<endl;
	 for(i=0;i<m;i++)
	  {
	      for(j=0;j<n;j++)
          {
            mul[i][j]=0;
            for(int k=0;k<m;k++)
            {
             mul[i][j]=	mul[i][j]+mat1[i][k]*mat2[k][j];
            }
          }
	  }
	  for(i=0;i<m;i++)
        {
	  std::cout<<"\n";
	   for(j=0;j<n;j++)
	     std::cout<<"\t\t"<<mul[i][j];
        }
	}
};

template <class T>
void matrix<T>::read()
{
    std::cout<<"enter the rows and columns of matrix  : \n";
	std::cin>>m>>n;
	std::cout<<"enter the elements of first matrix: \n";
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	 {
	 	std::cout<<"row"<<i<<"column"<<j<<"\n";
	 	std::cin>>mat1[i][j];
	 }

	cout<<"enter the elements of the  second matrix: \n";
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	 {
	 	std::cout<<"row"<<i<<"column"<<j<<"\n";
	 	std::cin>>mat2[i][j];
	 }
	}

int main()
{
	matrix<int> m;
	matrix<float> n;
    int opt,opt1,opt2;
    do{
    	std::cout<<"Enter your choice:"<<endl<<"1. Integer type Matrix operations"<<endl<<"2.Float type Matrix operations"<<endl<<"3.EXIT"<<endl;
    	std::cin>>opt;
		switch(opt)
		{
			case 1:
				m.read();
				do{

					std::cout<<endl<<"Enter your choice:"<<endl<<"1. Addition"<<endl<<"2.Multiplication"<<endl<<"3.Subtraction"<<endl<<"4.EXIT"<<endl;
    	            std::cin>>opt1;
    	            switch(opt1)
    	            {

    	            	case 1:
    	            		m.add();
    	            		break;
    	            	case 2:
    	            		m.mult();
    	            		break;
    	            	case 3:
    	            		m.sub();
    	            		break;
					}
				}while(opt1!=4);
				break;
			case 2:
				n.read();
				do{

					std::cout<<"Enter your choice:"<<endl<<"1. Addition"<<endl<<"2.Multiplication"<<"3.Subtraction"<<endl<<"4.EXIT"<<endl;
    	            std::cin>>opt2;
    	            switch(opt2)
    	            {
    	            	case 1:
    	            		n.add();
    	            		break;
    	                case 2:
    	            		n.mult();
    	            		break;
    	                case 3:
    	            		n.sub();
    	            		break;
					}
				}while(opt2!=4);
				break;
			case 3:return 0;
		}

	}while(opt==3);
	return 0;
}
