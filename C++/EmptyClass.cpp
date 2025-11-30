#include<iostream>
using namespace std;

class Demo
{
    public : 
        void Display()
        {
            cout<<"Inside Display";
        }
};

int main()
{

    Demo dObj;

    cout<<sizeof(dObj);         //1 byte

    return 0;
}