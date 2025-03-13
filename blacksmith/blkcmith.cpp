#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "blkcmith.h"

using namespace std;

void Inventory::showMenu() {
    cout << "Metals: " << metals << endl;
    cout << "Finished Swords: " << finishedSwords << endl << endl;
    cout << "- Normal: " << normal << endl;
    cout << "- Rare: " << rare << endl;
    cout << "- Legendary: " << legendary << endl << endl;

    cout << "1.) Find Metal" << endl;
    cout << "2.) Forge a Sword" << endl;
}

void Inventory::subtractMetal() {
        metals --;
}
void Inventory::addMetals() {
        metals ++;
}
void Inventory::findMetal() {
    srand(time(0));
    int chance = rand()%2;

    if (chance == 0) {
        addMetals();

        cout << "Dang you found a metal! " << endl << endl;
    } else {
        cout << "Oops you didn`t find one any this time." << endl << endl;
    }
}

void findingMetal() {
    srand(time(0));
    int chance = rand() % 3 + 1;

    switch(chance) {
        case 1:
            cout << "Climbing off cliffs..." << endl << endl;
            break;
        case 2:
            cout << "Falling and cracking your bones..." << endl << endl;
            break;
        case 3:
            cout << "Finding some diamonds at Y - 64..." << endl << endl;
            break;
    }
}

void metalClang() {
    cout << "Clang..." << endl << endl;
    Sleep(1000);
    cout << "Clang..." << endl << endl;
    Sleep(1000);
    cout << "Clang..." << endl << endl;
    Sleep(1000);
}

void Inventory::forgeMetal() {
    srand(time(0));
    int chance = rand() % 2;

    if (chance == 0) {
        metals --;
        finishedSwords ++;

        srand(time(0));
        int swordRarity = rand() % 3 + 1;

        switch(swordRarity) {
            case 1:
                normal++;
                cout << "You made a normal sword ! ! ! " << endl << endl;
                break;
            case 2:
                rare++;
                cout << "You made a rare sword ! ! ! " << endl << endl;
                break;
            case 3:
                legendary++;
                cout << "You made a Legendary sword ! ! ! " << endl << endl;
                break;
        }

    } else {
        metals --;
        cout << "The metal broke... You didn`t make a sword... :<" << endl << endl;
    }
}
