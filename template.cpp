#include<iostream>
#include<string>
using namespace std;

template <typename T> T multiply1 (T a, T b)
{
    //int res = a*b;
    T res = a*b;
    return res;
}
template <typename A,typename B> A multiply2 (A a, B b)
{
    //int res = a*b;
    A res = a*b;
    return res;
}
int main()
{
    //int x,y;
    //double p,q;
    cout<<multiply1(2.2,1.3)<<endl;
    cout<<multiply2(2,1.3)<<endl;
    return 0;
}


