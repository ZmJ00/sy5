#include"sy5.h"
#include<iostream>
using std::cout;
using std::endl;

void CJournal::Print()
{
    cout<<"Name: "<<Name<<endl
    <<"Publisher: "<<Publisher<<endl;
}

void CSciJournal::Print()
{
    CJournal::Print();
    cout<<"Factor: "<<Factor<<endl
    <<"There are "<<Number<<" SCI Journal\n";
}

void CSciJournal::SetFactor(double num)
{
    Factor = num;
}

void CSciJournal::SetName(std::string name)
{
    CJournal::setname(name);
}