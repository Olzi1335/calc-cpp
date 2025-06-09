#include <iostream>
#include <string>

using namespace std;


int main() {
    //    setlocale(LC_ALL, "Russian");
    string project_name = "calc-cpp";

    cout << "\n\n";
    cout << "=========================" << endl;
    cout << "| Welcome to '" << project_name << "' |" << endl;
    cout << "=========================" << endl;
    cout << "\n\n";

    bool quit = false;

    while (!quit) {
        bool help = false;
        bool command_incorrect = false;
        bool error = false;
        bool result_out = false;
        double num_1, num_2, result = 0.1f;
        char command = '0';

        cout << "Please enter the command ('h' for help) : ";
        cin >> command;
        cout << endl << endl;

        switch (command) {
            case '+':
                cout << "Please enter the number 1: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> num_2;
                cout << endl;

                result = num_1 + num_2;
                cout << num_1 << " " << command << " " << num_2 << " = ";
                result_out = true;
                break;
            case '-':
                cout << "Please enter the number 1: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> num_2;
                cout << endl;

                result = num_1 - num_2;
                result_out = true;
                break;
            case '*':
                cout << "Please enter the number 1: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> num_2;
                cout << endl;

                result = num_1 * num_2;
                result_out = true;
                break;
            case '/':
                cout << "Please enter the number 1: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> num_2;
                cout << endl;

                if (num_2 == 0) {
                    cout << "Error: Division by zero" << endl;
                    error = true;
                    break;
                }

                result = num_1 / num_2;
                result_out = true;
                break;
            case 'd':
                cout << "Please enter the number: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the exponent: ";
                cin >> num_2;
                cout << endl;

                if (num_2 >= 1001) {
                    cout << "exponent is too large\n";
                    error = true;
                }
                if (num_2 <= 1000) {
                    float counter = 1;
                    cout << num_1 << " ^ " << num_2 << " = ";
                    result = num_1;

                    while (counter < num_2) {
                        result *= num_1;
                        counter++;
                    }
                }
                result_out = true;
                break;
            case 'h':
                help = true;
                cout << "Enter '+' for addition\n"\
            << "Enter '-' for subtraction\n"\
            << "Enter '*' for multiplication\n"\
            << "Enter '/' for division\n"\
            << "Enter 'd' for exponentiation (number^exponent)\n"\
            << "Enter 'q' for quit"\
            << endl;
                break;
            case 'q': quit = true; break;
            default:
                command_incorrect = true;
                cout << "Error: Invalid command" << endl;
                break;
        }

        if (quit || help || command_incorrect || error) {
            cout << endl;
            continue;
        }
        if (result_out)
            cout << fixed << result << endl;
    }
}