#include"sy5.h"
#include"sy5.cpp"

int main()
{
    CSciJournal s1("计算机图形学报","中国科学院",10,0.8);
    s1.Print();cout<<endl;
    CSciJournal s2("生物医学工程学报","中国科学院",20,0.6);
    s2.Print();cout<<endl;
    s1.SetName("计算机图形图像学报");
    s2.SetFactor(1.0);
    s1.Print();cout<<endl;
    s2.Print();
}