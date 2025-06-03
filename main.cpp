#include <iostream>

using namespace std;


int main() {
    //    setlocale(LC_ALL, "Russian");

    float number_1, number_2, result = 0;
    char action= '+';

    cout << "Please enter the number 1: ";
    cin >> number_1;
    cout << endl;

    cout << "Please enter the number 2: ";
    cin >> number_2;
    cout << endl;

    cout << "Please enter the action ( /, *, +, -) : ";
    cin >> action;
    cout << endl << endl;

    cout << number_1 << " " << action << " " << number_2 << " = ";

    switch (action) {
        case '+': result = number_1 + number_2; break;
        case '-': result = number_1 - number_2; break;
        case '*': result = number_1 * number_2; break;
        case '/': result = number_1 / number_2; break;
        default: cout << "Invalid input" << endl;
            return 5;
    }

    cout << result << endl;

    return 0;
}