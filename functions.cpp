#include<iostream>
#include<string>
using namespace std;

int add(int a,int b)
{
    return (a+b);
}
float add(float a, float b)
{
    return (a+b);
}
double add(double a, double b)
{
    return (a+b);
}
void print(int x)
{
    cout<<"int sum : "<<x<<endl;
}
void print(float y)
{
    cout<<"float sum : "<<y<<endl;
}void print(double y)
{
    cout<<"double sum : "<<y<<endl;
}
void print(string s)
{
    cout<<"string : "<<s<<endl;
}
void print(char p)
{
    cout<<"character : "<<p<<endl;
}

int main()
{
    int a,b;
    float c,d;
    double p,q;
    string s;
    char o;
    cin>>a>>b;
    cin>>c>>d;
    cin>>p>>q;
    cin>>s;
    cin>>o;
    //add(a,b);
    //add(c,d);
    print(add(a,b));
    print(add(c,d));print(add(p,q));
    print(s);
    print(o);
    return 0;
}
