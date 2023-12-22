#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;  //s is the stack name
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    cout<<"size =  "<<s.size()<<endl;
    cout<<"top element =  "<<s.top()<<endl;
    cout<<"The stack is "<<endl;
    while(!s.empty())
    {
        cout<<" "<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;

}
