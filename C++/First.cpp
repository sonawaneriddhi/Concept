#include<iostream>
using namespace std;

class Demo
{
    public:

        int iNo1;
        int iNo2;

        Demo()
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Demo(int a, int b)
        {
            iNo1 = a;
            iNo2 = b;
        }

        ~Demo()
        {
            //Logic
        }
};

int main()
{
    cout<<"Jay Ganesh...\n";

    return 0;
}
