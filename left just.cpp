#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[200];
    int roll, marks,x,y,p,q,i,n,c1=0,c2=0,j;
    cout<<"|Name";
    for(j=1; j<=25; j++)
    {
        cout<<" ";
    }
    cout<<"|Roll";
    for(j=1; j<=6; j++)
    {
        cout<<" ";
    }
    cout<<"|Marks";
    for(j=1; j<=5; j++)
    {
        cout<<" ";
    }
    cout<<endl;

    while(cin>>name>>roll>>marks)
    {
        c1=0,c2=0;
        for(i=1; i<=50; i++)
        {
            cout<<"_";
        } cout<<endl;
        x=roll;
        y=marks;
        n=strlen(name);
        cout<<"|"<<name;
        for(i=n-1; i<=30; i++)
        {
            cout<<" ";
        }
        while(x!=0)
        {
            p=x%10;
            x=x/10;
            c1++;
        }
        while(y!=0)
        {
            q=y%10;
            y=y/10;
            c2++;
        }
        cout<<"|"<<roll;
        for(i=c1-1; i<=10; i++)
        {
            cout<<" ";
        }
        cout<<"|"<<marks;
        for(i=c2-1; i<=10; i++)
        {
            cout<<" ";
        }
    cout<<endl;
    }
    return 0;
}

