#include<iostream>
using namespace std;

class Base                      //8
{
    public:
        int i, j;

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base     //12
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

    bObj.fun();
    dObj.fun();
    dObj.gun();

    return 0;
}