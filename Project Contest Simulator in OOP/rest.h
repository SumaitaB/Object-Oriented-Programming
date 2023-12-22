///use of multifile

#ifndef REST_H
#define REST_H

vector< pair <string, int> > v;   ///Use of STL Vector


class contest
{
public:
    string contest_name="";   ///use of STL string
    string handle="";   ///use of STL string
    string temp[10000];   ///use of STL string
    int arr[10000];
    int solved;
    int tried;
    int wa;
    int total;
    int p;
public:
    contest()   ///use of Constructor
    {
        solved=0;
        tried=0;
        wa=0;
        total=0;
        p=0;
    }
    friend class rankk;        ///use of friend function

    void read_data(vector< pair <string, int> > v,int p,string contest_name);
    void show_data();
};

class rankk : public contest  ///use of inheritance
{
protected:

    int position;
public:

    bool sortbysec(const pair<string,int>*a,
                   const pair<string,int>*b);  ///use of pointers
    rankk()  ///use of Constructor
    {
        position=0;
    }

    void operator ++(int);    ///operator overloading
};

void rankk:: operator ++(int)
{
    position++;
}

bool rankk :: sortbysec(const pair<string,int>*a,    ///use of pointers
                        const pair<string,int>*b)  ///use of scope resolution
{
    return (a->second > b->second);
}

void contest :: read_data(vector< pair <string, int> > v,int p,string contest_name)  ///use of scope resolution
{

    cout << "-----------------------\t|==============|-----------------------*"<< "\n";
    cout << "-----------------------\t|-----RANK-----|-----------------------*" << "\n";
    cout << "-----------------------\t|==============|-----------------------*" << "\n\n\n\n";
    cout<<"-----------------------CONTEST-NAME-----------------------"<<contest_name<<"-----*"<<"\n"<<endl;

    cout <<setfill ('-')<< left << setw(15) << "---POSITION---"
         <<setfill ('-')<< right << setw(15) << "---HANDLE---*" << endl;
    for (int i=0; i<p; i++)
    {
        cout<< left << setw(13) << i+1 ;
        cout<< right << setw(15) <<v[i].first << "*"<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    ofstream new_file;  ///use of file stream
    new_file.open("new_file.txt",ios::app);
    if(!new_file)
    {
        cout<<"File creation failed";
    }
    else

        new_file << "-----------------------\t|==============|-----------------------*"<< "\n";
    new_file << "-----------------------\t|-----RANK-----|-----------------------*" << "\n";
    new_file<< "-----------------------\t|==============|-----------------------*" << "\n\n\n\n";
    new_file<<"-----------------------CONTEST-NAME-----------------------"<<contest_name<<"------*"<<"\n"<<endl;

    new_file <<setfill ('-')<< left << setw(15) << "---POSITION---"
             <<setfill ('-')<< right << setw(15) << "---HANDLE---*" << endl;
    for (int i=0; i<p; i++)
    {
        new_file<< left << setw(13) << i+1 ;
        new_file<< right << setw(15) <<v[i].first <<"*" << endl;
    }
    new_file<<endl;
    new_file<<endl;
    new_file<<endl;
    new_file.close();

}


void contest :: show_data()
{
    ifstream new_file;
    new_file.open("new_file.txt"); ///use of file stream
    char output;
    if (new_file.is_open())
    {
        while (!new_file.eof())
        {
            new_file >> output;



            if(output=='*')
            {
                cout<<"\n";
            }
            else
            {
                cout<<output;
            }

        }
        cout<<endl;
    }
    new_file.close();

}

#endif
