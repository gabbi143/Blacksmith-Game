#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "blkcmith.h"

using namespace std;

Inventory bag(0, 0, 0, 0, 0);

int main()
{
    string playerChoice;

    while(true) {

        bag.showMenu();
        cout << endl << "Enter Choice: ";
        getline(cin, playerChoice);

        if (playerChoice == "1") {
            system("cls");
            findingMetal();
            Sleep(1000);
            bag.findMetal();
            Sleep(1000);

        } else if (playerChoice == "2") {
            system("cls");
            if (bag.metals > 0) {
                metalClang();
                bag.forgeMetal();

            } else {
                cout << "You don`t have enough metals to forge a sword." << endl << endl;
                Sleep(1000);
            }
        } else {
            system("cls");
            cout << "Invalid Input." << endl << endl;
            Sleep(1000);
        }
    }

    return 0;
}
