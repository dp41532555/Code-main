#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"base class derived is called..."<<endl;
    }
};
class derived: public base
{
    public:
    void display()
    {
        cout<<"derived class is called..."<<endl;
    }
};
int main()
{
    base *p,z;
    derived a;
    p=&a;
    p->display();
    p=&z;
    p->display();
}