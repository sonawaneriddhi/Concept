#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public :
        int x;

        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()
{
    Base bObj;
    Derived dObj;

    cout<<"Size of base class object : "<<sizeof(bObj)<<"\n";

    cout<<"Size of derived class object : "<<sizeof(dObj)<<"\n";


    return 0;
}