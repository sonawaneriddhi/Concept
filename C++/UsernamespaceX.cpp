#include<iostream>
using namespace std;

namespace PPA
{
    int i = 11;
}

namespace LB
{
    int i = 21;
}

using namespace LB;

int main()
{
    std::cout<<PPA::i<<"\n";
    std::cout<<i<<"\n";

    return 0;
}