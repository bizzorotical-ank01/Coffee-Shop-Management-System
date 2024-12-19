#include "list.h"
int main()
{
    List abc;
    List xyz1;
    List xyz2;
    List xyz3;
    List xyz4;
    List xyz5;
    List xyz6;
    List xyz7;
    List fdbk;
    int choice;
    int j;
    cout << " %%%% %%%% WELCOME TO TAK3 COFFEE SHOP %%%% %%%% " << endl;
    cout << " %%%% %%%% OUR TODAY's MENU OF COFFEES %%%% %%%% " << endl;
    cout << "........................................................................................................................." << endl;
    cout << "\t\t " << "ITEM_NO." << "\t\t\t" << "ITEM_NAME" << "\t\t\t" << "PRICE" << "\t" << endl;
    cout << "........................................................................................................................." << endl;
    abc.create_node(1, "AMERICANO ", 120.23);
    abc.create_node(2, "LATTEE ", 100.67);
    abc.create_node(3, "CAPPUCCINO", 720.83);
    abc.create_node(4, "ESPRESSO ", 70.23);
    abc.create_node(5, "IRISH ", 70.23);
    abc.create_node(6, "AFFOGATO ", 60.32);
    abc.create_node(7, "MOCHACHINO", 520.2);
    abc.display();
    xyz1.create_node("AMERICANO ", 120.23, 0.04, (120.23 + 0.04));
    xyz2.create_node("LATTEE ", 100.67, 0.02, (100.67 + 0.02));
    xyz3.create_node("CAPPUCCINO", 720.83, 2.0, (720.83 + 2.0));
    xyz4.create_node("ESPRESSO ", 70.23, 0.00, (70.23 + 0.00));
    xyz5.create_node("IRISH ", 70.23, 0.00, (70.23 + 0.0));
    xyz6.create_node("AFFOGATO ", 60.32, 0.00, (60.32 + 0.00));
    xyz7.create_node("MOCHACHINO", 520.25, 1.5, (520 + 21.5));
    do
    {
        cout << "ENTER NODE NO. OF THE ITEM YOU WANT" << "\t\t";
        cin >> choice;
        cout << endl;
        cout << "\t\t ITEM_NAME\t\t PRICE\t\t\t TAX\t\t\t\t\tTOTAL BILL" << endl;
        cout << "........................................................................................................................." << endl;
        switch (choice)
        {
        case 0:
            cout << " %%%% HAVE FUN %%%%" << endl;
            break;
        case 1:
            xyz1.billing();
            break;
        case 2:
            xyz2.billing();
            break;
        case 3:
            xyz3.billing();
            break;
        case 4:
            xyz4.billing();
            break;
        case 5:
            xyz5.billing();
            break;
        case 6:
            xyz6.billing();
            break;
        case 7:
            xyz7.billing();
            break;
        default:
            cout << "INVALID INPUT" << endl;
        }
        cout << "PRESS 0 TO LEAVE..." << endl;
    } while (choice != 0);
    cout << " %%%% ENJOY %%%%" << endl;
    int payment_method;
    cout << "PAYMENT METHOD" << endl;
    cout << 1 << " CASH" << endl;
    cout << 2 << " DEPIT CARD" << endl;
    cin >> payment_method;
    cout << " %%%% THANKS FOR COMING %%%%" << endl;
    cout << " %%%% CUSTOMER REVIEW %%%%" << endl;
    int feed;
    cout << 1 << " EXCELLENT" << endl;
    cout << 2 << " GOOD" << endl;
    cout << 3 << " POOR" << endl;
    cout << " %%%% YOUR FEEDBACK %%%%" << endl;
    cin >> feed;
    if (feed <= 2)
    {
        cout << " %%%% THANKS FOR YOUR VALUEABLE COMMENTS %%%% " << endl;
    }
    if (feed = 3)
    {
        cout << " %%%% THANKS FOR LETTING US KNOW %%%%" << endl;
    }
    cout << " %%%% GOODBYE %%%%" << endl;
    system("pause");
    return 0;
}
