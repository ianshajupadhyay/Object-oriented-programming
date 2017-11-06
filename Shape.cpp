#include<iostream>

using namespace std;

class Shape
{
    protected:
        float x,y;
    public:

    virtual float area()=0;

    void getdata(float a,float b)
    {
        x=a;
        y=b;
    }
};

class Rectangle : public Shape
{
    public:
       // int l,b;
        //void getdata()
        float area()
        {
            float ar_rect;
            cout<<"Length = "<<x<<" Breadth = "<<y;
            ar_rect=x*y;
            return ar_rect;
        }
};

class Triangle : public Shape
{
    public:
            float area()
            {
                float ar_tri;
                cout<<"Height = "<<x<<" Base = "<<y;
                ar_tri=(0.5*x*y);
                return ar_tri;

            }
};

class Square : public Shape
{
    public:
            float area()
            {
                float ar_square;
                cout<<"Length of both sides is = "<<x;
                ar_square=x*x;
                return ar_square;
            }
};

class Circle : public Shape
{
    public:
            float area()
            {
                float ar_circle;
                cout<<"Radius = "<<x;
                ar_circle=(3.14*x*x);
                return ar_circle;
            }
};

int main()
{
    float ch1,ch2;
    Shape *obj;
    char cho;
   // obj = new Shape();
  //  Shape sh;
    Triangle t;
    Rectangle r;
    Square s;
    Circle c;
    char choice;
    do
    {
    cout<<"Enter the 2 parameters\n";
    cin>>ch1>>ch2;
    cout<<"Enter your choice\n 1. Area of Rectangle\n 2. Area of Triangle\n 3. Area of Square\n 4. Area of Circle";
    cin>>choice;


    switch(choice)
    {
        case '1' :
                // sh.getdata();
                 obj=&r;
                 obj->getdata(ch1,ch2);
                 float r_area;

                 r_area=obj->area();
                 cout<<"Area of rectangle is : ";
                 cout<<r_area<<endl;
                 break;

        case '2' :
                 obj=&t;
                 obj->getdata(ch1,ch2);

                 float t_area;
                 t_area=obj->area();
                 cout<<"Area of triangle is : ";
                 cout<<t_area<<endl;
                 break;

        case '3' :
                 obj=&s;
                 obj->getdata(ch1,ch2);

                 float s_area;
                 s_area=obj->area();
                  cout<<"Area of square is : ";
                 cout<<s_area<<endl;
                 break;

        case '4' :
                 obj=&c;
                 obj->getdata(ch1,ch2);

                 float c_area;
                 c_area=obj->area();
                 cout<<"Area of circle is : ";
                 cout<<c_area<<endl;
                 break;

        default : cout<<"Invalid choice"<<endl;
                  break;
    }

    //char cho;
    cout<<"Want to do it again?\n";
    cin>>cho;

    }while(cho=='y'||cho=='Y');

    return 0;
}
