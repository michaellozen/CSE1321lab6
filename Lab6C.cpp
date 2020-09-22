/*
Class: CSE 1321L
Section: W04
Term: Fall '20
Instructor: Deeksha Koya
Name: Michael Lozen
Lab#: 6C
*/
#include <iostream>
using namespace std;
int main() {
    int n1, n2, sum = 0;
    cout << "Enter a starting number: ";
    cin >> n1;
    cout << "Enter an ending number: ";
    cin >> n2;
    if ((n1 % 2 == 1) and (n1 < n2)) {
        for (int i = n1; i <= n2; i += 2) {
            sum += i;
        }
    }
    else if ((n1 % 2 == 0) and (n1 < n2)) {
        for (int i = n1 + 1; i <= n2; i += 2) {
            sum += i;
        }
    }
    else if ((n1 % 2 == 1) and (n1 > n2)) {
        for (int i = n1; i >= n2; i -= 2) {
            sum += i;
        }
    }
    else if ((n1 % 2 == 0) and (n1 > n2)) {
        for (int i = n1 - 1; i >= n2; i -= 2) {
            sum += i;
        }
    }
    cout << "Sum of odds is: " << sum << endl;
}