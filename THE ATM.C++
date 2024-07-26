#include <iostream>
using namespace std;

void ShowMenu()
{

    cout << "**********Menu********** " << endl;
    cout << "1.See The Palance : " << endl;
    cout << "2.Deposit : " << endl;
    cout << "3.Withdrawal : " << endl;
    cout << "4.Exit : " << endl;
}

int main()
{
    int choice, palance = 6000, a, w;
    while (choice != 4)
    {
        ShowMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << palance << endl;
            break;
        case 2:
            cout << "Deposit = ";
            cin >> a;
            palance += a;

            break;
        case 3:
            cout << "Withdrawal = ";
            cin >> w;
            palance -= w;

            if (w > palance)

                cout << "There is no enough money " << endl;
            else
                cout << palance << endl;

            break;
        }
    }
}
