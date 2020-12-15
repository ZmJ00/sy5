#include"sy5.h"
#include<iostream>
using std::cout;
using std::endl;


void CSciJournal::Print()
{
    /*
    //调用函数方法
    CJournal::print();
    cout<<"Factor: "<<Factor<<endl
    <<"There are "<<Number<<" SCI Journal\n";*/

    //返回reference方法
    cout<<"Name: "<<CJournal::name()<<endl
    <<"Publisher: "<<CJournal::publisher()<<endl
    <<"Factor: "<<Factor<<endl
    <<"There are "<<Number<<" SCI Journal\n";
}

void CSciJournal::SetFactor(double num)
{
    Factor = num;
}

void CSciJournal::SetName(std::string name)
{
    //CJournal::setname(name);
    CJournal::name() = name;
}