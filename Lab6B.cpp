/*
Class: CSE 1321L
Section: W04
Term: Fall '20
Instructor: Deeksha Koya
Name: Michael Lozen
Lab#: 6B
*/
#include <iostream>
using namespace std;
int main() {
    int userInput, min, max;
    cout << "Enter a number between -1000 and +1000: ";
    cin >> userInput;
    min = userInput;
    max = userInput;
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;
    while (userInput != 0) {
        cout << "Enter a number between -1000 and +1000: ";
        cin >> userInput;
        if (userInput > max)
            max = userInput;
        if (userInput < min)
            min = userInput;
        cout << "Min is " << min << endl;
        cout << "Max is " << max << endl;
    }
}