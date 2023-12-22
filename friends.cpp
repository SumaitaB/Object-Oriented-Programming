#include<iostream>
#include<string>
using namespace std;
class player
{
private :
    int run;
    string name;

public:
    virtual void play()=0;

    int input()
    {
        cin>>name;
    }
    friend void total(player **, int n);
    int setrun(int m)
    {
        run=m;
    }

};
void total (player **s,int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=s[i]->run;
    }
    cout<<"TOTAL RUN : "<<sum;
}
class batsman:public player
{
public :
    void play()
    {
        setrun(3);
    }
};

class bowler: public player
{
public :
    void play()
    {
        setrun(1);
    }
};

int main()
{
    player *s[6];
    int option;
    int sum=0;
    for(int i=0; i<6; i++)
    {
        cout<<"Enter 1 for Bowler or 2 for Batsman"<<endl;
        cin>>option;
        if(option==1)
        {
            s[i]=new bowler;
        }
        else if(option==2)
        {
            s[i]=new batsman;
        }
        s[i]->input();
    }
    for(int i=0; i<6; i++)
    {
        s[i]->play();

    }
    int n=6;
    total(s,n);
    return 0;
}
