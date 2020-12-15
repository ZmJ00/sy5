#ifndef SY5_H_
#define SY5_H_
#include<string>
class CJournal
{
    private:
        std::string Name;
        std::string Publisher;
        double Price;
    public:
        CJournal(std::string name,std::string pub,double price)
        :Name(name),Publisher(pub),Price(price){}
        /*
        void Print(); //负责打印Name和Publisher
        void setname(std::string name){Name=name;} //负责修改Name
        */

       std::string &name(){return Name;}
       std::string &publisher(){return Publisher;}
};   

class CSciJournal:public CJournal
{
    private:
        double Factor;
        static int Number; //检索杂志个数，静态变量
    public:
        CSciJournal(std::string name,std::string pub,double price,double fac)
        :CJournal(name,pub,price),Factor(fac){Number++;}
        ~CSciJournal(){Number--;}

        void Print();
        void SetFactor(double num);
        void SetName(std::string name);
};

int CSciJournal::Number = 0;

#endif