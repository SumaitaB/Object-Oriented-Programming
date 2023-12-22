#include<iostream>
#include<string>
using namespace std;
template <typename A> A print(A x)
{
    cout<<x<<endl;
}
int main()
{
    print(1.000);
    print(9);
    print(4.679856723145);
    print("hello");
    print("A");
    print("HAUS LABORATORIES");
    return 0;
}



