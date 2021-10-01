#include<iostream>
using namespace std ;

class Base
{
    public :
    void show()
    {
        cout<<"Base content"<<endl;
    }
};
class Child : public Base
{
    public :
    void display()
    {
        cout<<"Child Content";
    }
};
int main()
{

Child obj ;
obj.show();
obj.display();

    return 0;
}
