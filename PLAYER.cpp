#include<iostream>
#include<string>
using namespace std;

class player
{
public:
    virtual void play()=0;

    int input()
    {
        cin>>name;
    }

    int getrun()
    {
        return run;
    }
    string name;
    static int run;
};

int player::run=0;

class batsman:public player
{
public :
    void play()
    {
        run+=3;
    }
};

class bowler: public player
{
public :
    void play()
    {
        run++;
    }
};

int main()
{
    player *s[6];
    int option;
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
        while(1)
        {
            cout<<"Name = "<<s[i]->name<<" ,";
            break;
        }
        while(1)
        {
            cout<<"Run = "<<s[i]->getrun()<<endl;
            break;
        }
    }
    cout<<"TOTAL RUN = "<<s[5]->getrun()<<endl;
    return 0;
}
