#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;

        Demo()
        {
            this->i = 0;
            this->j = 0;
        }

        Demo(int A, int B)
        {
            this->i = A;
            this->j = B;
        }

        void Fun()              // void Fun(Demo * const this)
        {
            cout<<"Inside Fun\n";
            cout<<"Value of i is : "<<this->i<<"\n";
            cout<<"Value of j is : "<<this->j<<"\n";
            cout<<"Value of x is : "<<x<<"\n";
        }

        static void Gun()       // static void Gun
        {
            cout<<"Inside Gun\n";
            //cout<<i<<"\n";            NA (Static methods can only access static members)        
            //cout<<j<<"\n";
            cout<<x<<"\n";
        }
};

int Demo::x = 11;

int main()
{
    Demo::Gun();

    cout<<"Value of x is : "<<Demo::x<<"\n";

    Demo dObj(11,10);

    dObj.Fun();

    dObj.Gun();             //Demo::Gun();  (Object can access static methods, this pointer not acessible)
    
    cout<<"Size of dObj is : "<<sizeof(dObj)<<"\n";

    return 0;
}