#include <iostream>
#include <string>

using namespace std;


int main() {
    //    setlocale(LC_ALL, "Russian");
    string project_name = "calc-cpp";

    cout << "==========================" << endl;
    cout << "  Welcome to '" << project_name << "'  " << endl;
    cout << "==========================" << endl;
    cout << endl;

    double number_1, number_2, result = 0.1f;
    char command;
    bool quit = false;
    bool command_right = true;

    while (!quit) {
        cout << "Please enter the command ('h' for help) : ";
        cin >> command;
        cout << endl << endl;

        if (command == 'h') {
            cout << "Enter '+' for addition\n"\
            << "Enter '-' for subtraction\n"\
            << "Enter '*' for multiplication\n"\
            << "Enter '/' for division\n"\
            << "Enter 'd' for exponentiation\n"\
            << "Enter 'q' for quit\n"\
            << endl;
            continue;
        }
        if (command == 'q') {
            quit = true;
            continue;

        }
        cout << "Please enter the number 1: ";
        cin >> number_1;
        cout << endl;

        cout << "Please enter the number 2: ";
        cin >> number_2;
        cout << endl;

        if (command == '+' || command == '-' || command == '*' || command == '/') {
            cout << number_1 << " " << command << " " << number_2 << " = ";
        }
        if (command == 'd') {
            cout << number_1 << " [" << number_2 << "] = ";
        }

        switch (command) {
            case '+': result = number_1 + number_2;
                break;
            case '-': result = number_1 - number_2;
                break;
            case '*': result = number_1 * number_2;
                break;
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
            case 'h': break;
            default: cout << "Invalid input" << endl;
        }

        cout << fixed << result << endl;

        return 0;
    }
}