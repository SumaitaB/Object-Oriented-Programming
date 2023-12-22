#include<iostream>
#include<cstdlib>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<iomanip>
#include<fstream>
#include <conio.h>
#include<algorithm>

using namespace std;

#include"rest.h"   /// use of multifile

enum enumm {sim=1,record,quit};  ///use of enumeration

struct login   /// use of structure
{

    string id;
    string password;

    void input()
    {
        id = "admin";
        password = "admin2020";
    }

};

bool sortbysec(const pair<string,int>&a,
               const pair<string,int>&b)
{
    return (a.second > b.second);
}
int main()
{
    int choice=0,x=0;
    int op;
    int i;
    contest A;
    rankk B;
    int view=0;
    while(choice!=3)
    {

        cout << "                  \t-----------------------------" << "\n";
        cout << "                  \t|     CONTEST SIMULATOR 357  |" << "\n";
        cout << "                  \t-----------------------------" << "\n\n\n\n";
        cout << "                  \tPress 1 for Admin Menu.\n";
        cout << "                  \tPress 2 for Participant Menu.\n";
        cout << "                  \tPress 3 to Exit.\n";
        cin>>choice;
        system("cls");
        int i;
        int p;
        if(choice==sim)
        {
            string a="";
            string s="";
            login ob;
            ob.input();
            while(a!=ob.id&&s!=ob.password)
            {
                cout<<"----------Admin Login---------"<<endl<<endl;
                cout<<endl<<"Enter your admin user id and password below - "<<endl<<endl;

                cout<<"Enter your admin ID : ";
                cin>>a;

                char ch;
                cout << "Enter password: \n";

                ch = _getch();

                while(ch != 13)
                {
                    s.push_back(ch);
                    cout << '*';
                    ch = _getch();
                }

                cout<<endl;
                if(a==ob.id&&s==ob.password)
                {
                    cout<<"LOG IN SUCCESSSFUL!"<<endl;
                    op=1;
                    break;
                }
                else
                {
                    cout<<"Invalid user ID or password"<<endl;
                    op=0;

                }
            }

            if(op==1)
            {
                while(1)
                {
                    cout<<"Press 1 to silmulate contest: \n";
                    cout<<"Press 2 to log out\n";
                    cin>>x;

                    if(x==1)
                    {
                        string y="y";
                        while(1)
                        {
                            if(y=="y")
                            {

                                cout<<"Enter Contest name: \n";
                                cin.ignore();
                                getline(cin,A.contest_name);
                                cout<<"Enter the number of participants in the contest: \n";

                                cin>>p;

                                for(i=0; i<p; i++)
                                {
                                    cout<<"Enter Handle (username): \n";
                                    cin>>A.handle;

                                    cout<<"Enter the number of problems solved: \n";
                                    cin>>A.solved;

                                    cout<<"Enter the number of problems tried: \n";
                                    cin>>A.tried;

                                    A.wa=A.tried-A.solved;
                                    A.total=A.solved*1000-A.wa;

                                    A.temp[i] = A.handle;
                                    A.arr[i] = A.total;

                                    cout<<endl;

                                }
                                for (int i=0; i<p; i++)
                                {
                                    v.push_back( make_pair(A.temp[i],A.arr[i]) );
                                }

                                sort(v.begin(), v.end(), sortbysec);
                                A.read_data(v,p,A.contest_name);
                            }
                            cout<<"Would to want to simulate another contest? (y/n)"<<endl;
                            cin>>y;
                            if(y=="n")
                            {
                                break;
                            }
                            else if(y!="y"&&y!="n")
                            {
                                cout<<"Enter y or n"<<endl;
                            }
                        }

                    }
                    else if(x==2)
                    {
                        break;
                    }
                }
            }
        }

        else if(choice==record)
        {
            while(1)
            {
                cout<<"Press 1 to view past contests :"<<endl;
                cout<<"Press 2 to get an option to return to main menu :"<<endl;
                cin>>view;
                if(view==1)
                {

                    A.show_data();
                    break;
                }
                else if(view==2)
                {
                    break;
                }
                else
                {
                    cout<<"Invalid Command"<<endl;
                }
            }

        }

        else if(choice==quit)
        {
            cout<<"\n\n       THANK YOU FOR USING CONTEST SIMULATOR 357\n"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid Command"<<endl;
        }
        cout<<"Press any key to return to main menu\n";
        getchar();
        getchar();
        system("cls");
    }

    return 0;
}

/*

1
CONTEST-00001
10
ABDUL
9
12
RAHMAN
10
12
MAHFUZ
5
6
KARIM
2
4
FARIHA
9
9
RIA
3
5
KUDDUS
1
1
MIA
0
5
KABIR
8
9
AMIN
7
7

CONTEST-00002
5
RIA
3
5
KUDDUS
1
1
MIA
0
5
KABIR
8
9
AMIN
7
7

*/
