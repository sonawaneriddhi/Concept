#include<iostream>
using namespace std;

class Base                      //12
{
    public: 
        int i;
    
    private : 
        int j;
    
    protected :
        int k;

    public :
        Base()
        {
            this->i = 10;
            this->j = 20;
            this->k = 30;
        }

        void Fun()
        {
            cout<<i<<"\n";      //Allowed
            cout<<j<<"\n";      //Allowed
            cout<<k<<"\n";      //Allowed
        }
};

class Derived : public Base     //16
{
    public :
        int x;

        void Display()
        {
            cout<<i<<"\n";      //Allowed
            cout<<j<<"\n";      //Error
            cout<<k<<"\n";      //Allowed
        }
};

int main()
{
    Base bObj;
    Derived dObj;


    cout<<bObj.i<<"\n";         //Allowed
    cout<<bObj.j<<"\n";         //Error
    cout<<bObj.k<<"\n";         //Error

    cout<<dObj.i<<"\n";         //Allowed
    cout<<dObj.j<<"\n";         //Error
    cout<<dObj.k<<"\n";         //Error

    dObj.Fun();                 //Allowed
    dObj.Display();             //Allowed

    return 0;
}