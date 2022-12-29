#include <iostream>
#include <conio.h>

#define B 200;
#define F 50;
#define P 500;
#define S 150;

using namespace std;

// void takecustomerdata();
// void displaymenu();

void displaymenu()
{

    cout << "Menu" << endl;
    cout << "B-Burger" << endl;
    cout << "F-French Fries" << endl;
    cout << "P-Pizza" << endl;
    cout << "S-Sandwich" << endl;
}

void takecustomerdata()
{

    int quantity;
    char type;
    double charge;
    cout << "Enter Food Type and Quantity ? Food Type [B or F or P or S]" << endl;
    cin >> type >> quantity;

    cout << "You ordered " << quantity << "" << type << endl;

    switch (type)
    {
    case 'B':
        charge = quantity * 200;
        cout << "Total Charge: " << charge << endl;
        break;

    case 'F':
        charge = quantity * 50;
        cout << "Total Charge: " << charge << endl;
        break;
    case 'P':
        charge = quantity * 500;
        cout << "Total Charge: " << charge << endl;
        break;
    case 'S':
        charge = quantity * 500;
        cout << "Total Charge: " << charge << endl;
        break;
    default:
        cout << "You entered invalid type!";
    }
}
int main()
{

    displaymenu();

    takecustomerdata();

    getch();
    return 0;
}
