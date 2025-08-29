#include <iostream>
#include "S3_Source.h"
using namespace std;

int points = 0; // Variable Global

void showMenu() {
    int option;
    do {
        cout << "\n--- GAME MENU ---\n";
        cout << "1. Add points\n";
        cout << "2. Subtract points\n";
        cout << "3. Display points\n";
        cout << "4. Exit\n";
        cout << "Choose an option :";
        cin >> option;

        switch(option) {
            case 1: addPoints(); break;
            case 2: subtractPoints(); break;
            case 3: displayPoints(); break;
            case 4: cout << "Exit..." << endl; break;
            default: cout << "Invalid option." << endl;
        }
    } while(option != 4);
}

void addPoints() {
    int n;
    cout << "How many points to add? :";
    cin >> n;

    for(int i = 0; i < n; i++) {
        points++;
    }

    cout << n << " points added!" << endl;
}

void subtractPoints() {
    int n;
    cout << "How many points to subtract? :";
    cin >> n;

    while(n > 0 && points > 0) {
        points--;
        n--;
    }

    cout << "Points subtracted!" << endl;
}

void displayPoints() {
    int count = 0;
    cout << "Counting points :";
    if(points == 0) {
        cout << "0 points" << endl;
        return;
    }

    do {
        cout << "*";
        count++;
    } while(count < points);

    cout << " (" << points << " points)" << endl;
}