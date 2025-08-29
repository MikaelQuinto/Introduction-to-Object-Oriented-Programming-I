#include <iostream>
#include "S3_Source.h"
using namespace std;

void Pyramid(int h) {
    for (int x = 1; x <= h; x++) {
        for (int y = 1; y <= x; y++) {
            cout << "*";
        }
        cout << endl;
    }
}

int fibonacci(int n) {
    if (n <= 0) return 0;      // caso base
    if (n == 1) return 1;      // caso base
    return fibonacci(n - 1) + fibonacci(n - 2); // llamada recursiva
}

int main() {
    char option;

    cout << "Welcome to S3 of OOP" << endl;
    cout << "First of all please read items and then press the letter of the option you like" << endl;
    cout << "A. Function I: Variable scope: global variables (.h / .cpp)" << endl;
    cout << "B. Function II: Reference" << endl;
    cout << "C. Function III: Recursion" << endl;
    cout << "D. Function IV: Lambda" << endl;
    cout << "Please enter your choice :"; cin >> option;

    if (option == 'A' || option == 'a') {
        cout << "Welcome to G.A.M.E" << endl;
        showMenu();
    }

    else if (option == 'B' || option == 'b') {
        int h;
        cout << "Enter pyramid height :";cin >> h;
        Pyramid(h);
    }

    else if (option == 'C' || option == 'c') {
        int n;
        cout << "Enter the position (n) in Fibonacci series: "; cin >> n;
        cout << "Fibonacci series up to position " << n << ":\n";

        for (int i = 0; i < n; i++) {
            cout << fibonacci(i) << " ";
        }
    }

    else if (option == 'D' || option == 'd') {
        int a = 5, b = 10;

        // Lambda que suma dos números
        auto add = [](int x, int y) {
            return x + y;
        };

        cout << "Sum: " << add(a, b) << endl;
    }

    return 0;
}