#include<iostream>
using namespace std ;

class Add
{
    public:
    sum(int a,int b)
    {
        cout<<"Sum is "<< a+b<<endl;
    }
    sum(int a,int b,int c)
    {
        cout<<"Sum is "<< a+b+c<<endl;
    }
     sum(double a,double b)
    {
        cout<<"Sum is "<< a+b<<endl;    
    }
};

int main()
{
    Add math;
    math.sum(2,4);
    math.sum(3,4,6);
    math.sum(3.3,4.5);


    return 0;
}
