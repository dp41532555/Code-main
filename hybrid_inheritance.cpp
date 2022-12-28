#include <iostream>
using namespace std;
class base
{
public:
    int n;
    base()
    {
        cout << "enter number : " << endl;
        cin >> n;
    }
};
class derived : public base
{
public:
    int i;
};
class abc : public derived
{
public:
    cube()
    {
        for (i = 0; i < n; i++)
        {
            cout << "cube" << i << ":-" << i * i * i << endl;
        }
    }
};
int main()
{
    abc a;
    cout<<"cube is "<<a.cube();
}