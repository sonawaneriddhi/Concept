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

int main()
{
    std::cout<<PPA::i<<"\n";
    std::cout<<LB::i<<"\n";

    return 0;
}