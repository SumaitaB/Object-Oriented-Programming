#include<iostream>
#include<string>
using namespace std;
template <typename A,typename B> A power(A a, B b, B m)
{
    A p=1;
    for(int i=1; i<=b; i++)
    {
        p=(p*a)%m;
    }

    return p%m;
}
int main()
{
    cout<<power(2,70,11)<<endl;
    return 0;
}




