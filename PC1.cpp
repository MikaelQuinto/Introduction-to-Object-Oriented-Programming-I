#include <iostream>
#include <string>
using namespace std;

int main() {
    char option;
    cout << "Welcome to PC1" << endl;
    cout << "A. Find the maximum number in a string." << endl;

    if (option == 'A' | option == 'a') {
        string word;
        cout << "Enter a string :" ; cin >> word;

        int maxnum = -1;
        for (char c : word) { //We go through the whole string.
            if (isdigit(c)) {
                int digit = c - '0'; //digit compares with ASCII, therefore the value of 0 in ASCII must be subtracted to find the actual value.
                if (digit > maxnum) {maxnum = digit;}
                if (maxnum == 9) break;
            }
        }

        if (maxnum != -1) {cout << "The max number was :" << maxnum << endl;}
        else {cout << "There aren't any numbers in the string" << endl;}
    }
}