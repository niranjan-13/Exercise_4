#include<iostream>
using namespace std ;
class Myclass
{

private:
string Name ;

public:
void set(string name)
{
    Name = name;
}
string get()
{
    return Name;
}

};


int main()
{
    Myclass obj;
    obj.set("Simha");
    cout<<obj.get();



    return 0;
}
