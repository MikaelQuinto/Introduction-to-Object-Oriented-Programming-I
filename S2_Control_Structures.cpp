#include <iostream>
#include <string>
using namespace std;

int main () {
    char option;

    cout << "Welcome to S2 of OOP" << endl;
    cout << "First of all please read items and then press the letter of the option you like" << endl;
    cout << "A. Selective I: if / else if / else" << endl;
    cout << "B. Selective II: Switch cases" << endl;
    cout << "C. Repetitive I: for" << endl;
    cout << "D. Repetitive II: while" << endl;
    cout << "E. Repetitive III: do while" << endl;
    cout << "Please enter your choice :"; cin >> option;

    if (option == 'A' || option == 'a') {
        int mark;
        cout << "Enter a mark (0-20) :"; cin >> mark;

        if (mark >= 18) {
            cout << "Brilliant" << endl;
        }

        else if (mark >= 11) {
            cout << "Pass" << endl;
        }

        else {
            cout << "Fail" << endl;
        }
    }

    else if (option == 'B' || option == 'b') {
        int a,b;
        char o;

        cout << "Welcome to a mini calculator with ( + | - | * | / )" << endl;
        cout << "Enter the value of a :"; cin >> a;
        cout << "Enter the value of b :"; cin >> b;
        cout << "Enter the operation :"; cin >> o;

        switch (o) {
            case '+':
                cout << "R :" << a + b << endl;
                break;

            case '-':
                cout << "R :" << a - b << endl;
                break;

            case '*':
                cout << "R :" << a * b << endl;
                break;

            case '/':
                cout << "R :" << a / b << endl;
                break;

            default:
                cout << "Invalid Operation, please use one of these ( + | - | * | / )" << endl;
        }
    }

    else if (option == 'C' || option == 'c') {
        int h;
        cout << "Enter the height of the triangle :"; cin >> h;

        for (int x = 1; x <= h; x++) {
            for (int y = 1; y <= x; y++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (option == 'D' || option == 'd') {
        int num;
        int sum = 0;

        cout << "Enter numbers to add (0 to finish) :"; cin >> num;

        while (num != 0) {
            sum += num;
            cin >> num;
        }

        cout << "The Total sum is: " << sum << endl;
    }

    else if (option == 'E' || option == 'e') {
        string password = "1234";
        string attempt;

        do {
            cout << "Enter the password: "; cin >> attempt;

            if (attempt != password) {
                cout << "Wrong password. Try again." << endl;
            }
        } while (attempt != password);

        cout << "Access granted " << endl;
    }

    return 0;
}