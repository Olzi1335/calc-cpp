#include <iostream>

using namespace std;


int main() {
    //    setlocale(LC_ALL, "Russian");

    long double number_1, number_2, result = 0;
    char action;

    cout << "Please enter the action ( /, *, +, -, d) : ";
    cin >> action;
    cout << endl << endl;

    cout << "Please enter the number 1: ";
    cin >> number_1;
    cout << endl;

    cout << "Please enter the number 2: ";
    cin >> number_2;
    cout << endl;

    if (action == '+' || action == '-' || action == '*' || action == '/') {
        cout << number_1 << " " << action << " " << number_2 << " = ";
    }
    if (action == 'd') {
        cout << number_1 << " [" << number_2 << "] = ";
    }

    switch (action) {
        case '+': result = number_1 + number_2; break;
        case '-': result = number_1 - number_2; break;
        case '*': result = number_1 * number_2; break;
        case '/':
            if (number_2 == 0) {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            result = number_1 / number_2;
            break;
        case 'd':
            if (number_2 >= 1001) {
                cout << number_2 << " is too large";
                return 10;
            }
            if (number_2 <= 1000) {
                float counter = 1;
                result = number_1;

                while (counter < number_2) {
                    result *= number_1;
                    counter++;
                }
            }
            break;

        default: cout << "Invalid input" << endl;
            return 5;
    }

    cout << fixed << result << endl;

    return 0;
}