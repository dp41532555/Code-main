#include <iostream>
using namespace std;
class bank
{

    int ac_no;
    char name[50];

public:
    void setacc()
    {
        cout << "enter account number : ";
        cin >> ac_no;
        cout << "enter account name : ";
        cin >> name[50];
    }
    void getacc()
    {
        cout << "your account number is :" << ac_no << endl;
        cout << "your account holder name is : " << name << endl;
    }
};
class saving : public bank
{
    int x, y;
    int bal = 0;

public:
    void sdeposit()
    {
        cout << "enter deposit money : ";
        cin >> x;
        bal = bal + x;
        cout << "your deposit money is : " << x << endl;
    }
    void swithdraw()
    {
        cout << "enter your withdraw money : " << endl;
        cin >> y;

        if (bal < y)
        {
            cout << "not enouogh money" << endl;
        }
        else
        {
            bal = bal - y;
            cout << "your withdraw money is: " << y << endl;
        }
    }

    cout << "enter your choice : " << endl;
    cin >> A;
    switch (A)
    {
    case 1:
        cout << "=============***SAVING ACCOUNT***==============" << endl;
        break;
    case 2:
        cout << "=============***CURRENT ACCOUNT***==============" << endl;
        break;
    case 0:

        break;
    default:
        cout << "invalid choice " << endl;
    }
    char ch = 1;

    if (ch != 0)
    {
        cout << "\t\t\t 1.deposit amount : " << endl;
        cout << "\t\t\t 2.withdraw amount : " << endl;
        cout << "\t\t\t 3.show balance : " << endl;
        cout << "\t\t\t 0.exit : " << endl;

        cout << "enter your choice : " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            if (A == 1)
                s.sdeposite();
            else
                c.cdeposite();
            break;

        case 2:
            if (A == 1)
                s.swithdraw();
            else
                c.withdraw();
            break;

        case 3:
            if (A == 1)
                s.sshowbalance();
            else
                c.cshowbalance();
            break;

        case 0;
            break;
            default:
            cout << "enter choice number is invalid" << endl;
        }
    }
    void sshowbalance()
    {
        cout << "your balance is : " << bal << endl;
    }
};
int main()
{
    saving s;
    current c;
    int ch, A;

    s.setacc();
    s.getacc();

    if (A != 0)
    {
        cout << "\t\t\t 1.  saving account" << endl;
    }
}
