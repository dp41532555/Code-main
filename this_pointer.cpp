#include<iostream>
using namespace std;
class bank
{
    int acc,bal;
    string name;
    public:
    bank(int acc,string name,int bal)
    {
        this->acc=acc;
        this->name=name;
        this->bal=bal;
    }
    void getdata()
    {
        cout<<"account number : "<<acc<<endl;
        cout<<"account name : "<<name<<endl;
        cout<<"account bal : "<<bal<<endl;

    }
};
int main()
{
    bank a(101,"skill",10000),b(102,"qode",12000);
    a.getdata();
    b.getdata();
    return 0;
}