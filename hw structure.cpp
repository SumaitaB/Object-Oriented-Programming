#include<iostream>

using namespace std;

enum ampm {AM, PM};

struct Time
{
    int hr, min;
    ampm ap;
};

void input(Time *t1)
{
    cin>>t1->hr>>t1->min;
    string str;
    cin>>str;
    if(str=="AM")
    {
        t1->ap=AM;
    }
    if(str=="PM")
    {
        t1->ap=PM;
    }
}

void output(Time *x)
{
    cout<<"Hour: "<<x->hr<<" Min: "<<x->min<<endl;
}

Time time_diff(Time t1, Time t2)
{
    int x,y;
    x = t1.hr*60 + t1.min;
    y = t2.hr*60 + t2.min;

    if(t1.ap == PM)
    {
        x= x+ (12*60);
    }

    if(t2.ap == PM)
    {
        y= y+ (12*60);
    }

    int time_difference = (y-x);

    if(time_difference<0)
    {
        time_difference = time_difference + (24*60);
    }

    Time dif;
    dif.hr = time_difference/60;
    dif.min = time_difference%60;

    return dif;
}

int main()
{
    Time t1,t2,t3;
    input(&t1);
    input(&t2);
    t3 = time_diff(t1,t2);
    output(&t3);

}
