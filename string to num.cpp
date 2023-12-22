#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string a;
    long long int i,n=0;
    cin>>a;

        for(i=0;i<a.length();i++)
        {
            n=(n*10)+(a[i]-48);
        }
        cout<<n<<endl;

    return 0;
}



