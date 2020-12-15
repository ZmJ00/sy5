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
        void Print();
        void setname(std::string name){Name=name;}
};   

class CSciJournal:public CJournal
{
    private:
        double Factor;
        static int Number; //检索杂志个数
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