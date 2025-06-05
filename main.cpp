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

    bool quit = false;

    while (!quit) {
        double number_1, number_2, result = 0.1f;
        char command;
        bool help = false;

        cout << "Please enter the command ('h' for help) : ";
        cin >> command;
        cout << endl << endl;

        switch (command) {
            case '+':
                cout << "Please enter the number 1: ";
                cin >> number_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> number_2;
                cout << endl;

                result = number_1 + number_2;
                cout << number_1 << " " << command << " " << number_2 << " = ";
                break;
            case '-':
                cout << "Please enter the number 1: ";
                cin >> number_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> number_2;
                cout << endl;

                result = number_1 - number_2;
                break;
            case '*':
                cout << "Please enter the number 1: ";
                cin >> number_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> number_2;
                cout << endl;

                result = number_1 * number_2;
                break;
            case '/':
                cout << "Please enter the number 1: ";
                cin >> number_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> number_2;
                cout << endl;

                if (number_2 == 0) {
                    cout << "Error: Division by zero" << endl;
                    break;
                }

                result = number_1 / number_2;
                break;
            case 'd':
                cout << "Please enter the number 1: ";
                cin >> number_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> number_2;
                cout << endl;

                cout << number_1 << " [" << number_2 << "] = ";

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
            case 'h':
                help = true;
                cout << "Enter '+' for addition\n"\
            << "Enter '-' for subtraction\n"\
            << "Enter '*' for multiplication\n"\
            << "Enter '/' for division\n"\
            << "Enter 'd' for exponentiation\n"\
            << "Enter 'q' for quit\n"\
            << endl;
                break;
            case 'q': quit = true; break;
            default: cout << "Invalid input" << endl;
        }

        if (quit || help) {
            continue;
        }

        cout << fixed << result << endl;
    }
    return 0;
}