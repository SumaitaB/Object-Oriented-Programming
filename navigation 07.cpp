#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

class ANGLE
{
private:

    int deg;
    float min;
    char dir;

public:

    ANGLE():deg(180), min(60), dir('S')
    {

    }
    ANGLE(int degree, float minute, char direction):deg(degree), min(minute), dir(direction)
    {

    }
    void in();
    void out() const;
};


void ANGLE::in()
{
    cin >>deg>>min>>dir;
}

void ANGLE::out() const
{
    cout<<"Angle: "<<deg<<"\xF8 "<<min<<"'"<<dir;

    if(dir=='N')
    {
        cout<<" LATITUDE\n"<<endl;
    }
    else if(dir=='S')
    {
        cout<<" LATITUDE\n"<<endl;
    }
    else if(dir=='E')
    {
        cout<<" LONGITUDE\n"<<endl;
    }
    else if(dir=='W')
    {
        cout<<" LONGITUDE\n"<<endl;
    }

}

int main()
{
    int degree;
    float minute;
    char direction,p;
    ANGLE a1,a2;
    cout <<"Enter DEGREES, MINUTES and DIRERCTION respectively: \n"<<endl;
    a1.in();
    a1.out();

    while(1)
    {
        cout<<"DO YOU WANT TO INPUT FURTHER NAVIGATION? (Press Y if Yes or N if No) \n"<<endl;
        cin>>p;
        if(p=='N')
        {
            break;
        }
        else
        {
            cout <<"Enter DEGREES, MINUTES and DIRERCTION respectively: \n"<<endl;
            a2.in();
            a2.out();
        }
    }

    return 0;
}

