#include <iostream>
using namespace std;

void double2(int *p) {
    *p *= 2;
}

int main() {
    char option;
    cout << "Welcome to S2 of OOP" << endl;
    cout << "First of all please read items and then press the letter of the option you like" << endl;
    cout << "A.Basics :" << endl;
    cout << "Please enter your choice :"; cin >> option;





















    if (option == 'A' || option == 'a') {
        int x = 20;
        int arr[30] = {10,20,30};
        int *a = &x; //&x is the address it marks the location of x, and *a means it is a pointer, in this case pointing to the address of x.
        int *b = arr; //Equal to &arr
        int *c = nullptr; //Don't point anything
        c = &x; //Can assign to x later when it is initially nullptr.
        int* d = new int;
        *d = 50;

        cout << "value of x :" << x << endl;
        cout << "direction of x :" << a << endl;
        cout << "direction of arr :" << b << endl;
        cout << "The second value in the arr is :" << *(b + 1) << endl;

        *a += 20; //Access and modify values
        double2(c);

        delete a,b,c,d;
    }
    return 0;
}