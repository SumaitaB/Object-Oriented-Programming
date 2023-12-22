#include<iostream>
#include<string>
using namespace std;


template <typename A> A print(A x)
{
    cout<<x<<endl;
}
int main()
{
    print(1);
    print("hello\n");
    return 0;
}



