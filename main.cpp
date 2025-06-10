#include <iostream>
#include <string>
#include <random>

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
            case '+': {
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
            }
            case '-': {
                cout << "Please enter the number 1: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> num_2;
                cout << endl;

                result = num_1 - num_2;
                result_out = true;
                break;
            }
            case '*': {
                cout << "Please enter the number 1: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the number 2: ";
                cin >> num_2;
                cout << endl;

                result = num_1 * num_2;
                result_out = true;
                break;
            }
            case '/': {
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
            }
            case 'd': {
                cout << "Please enter the number: ";
                cin >> num_1;
                cout << endl;

                cout << "Please enter the exponent: ";
                cin >> num_2;
                cout << endl;

                if (num_2 > 1000) {
                    cout << "Error: Exponent is too large!\n";
                    error = true;
                    break;
                }
                if (num_1 == 0 || num_2 == 0) {
                    cout << "Error: Some number is equal to zero!\n";
                    error = true;
                    break;
                }

                int counter = 1;
                cout << num_1 << " ^ " << num_2 << " = ";
                result = num_1;

                while (counter < num_2) {
                    result *= num_1;
                    counter++;
                }

                result_out = true;
                break;
            }
            case 'r': {
                int random_min_number;
                cout << "Please enter the minimum number: ";
                cin >> random_min_number;
                cout << endl;

                int random_max_number;
                cout << "Please enter the maximum number: ";
                cin >> random_max_number;
                cout << endl;

                if (random_max_number < random_min_number) {
                    cout << "Error: The minimum number is greater than the maximum!\n";
                    error = true;
                    break;
                }

                    random_device rd;
                    mt19937 gen(rd());
                    uniform_int_distribution<> dist(random_min_number, random_max_number);

                    cout << "Random number: ";
                    result = dist(gen);
                    result_out = true;
                    break;
            }
                case 'h': {
                    help = true;
                    cout << "Enter '+' for addition\n"\
                << "Enter '-' for subtraction\n"\
                << "Enter '*' for multiplication\n"\
                << "Enter '/' for division\n"\
                << "Enter 'd' for exponentiation (number^exponent)\n"\
                << "Enter 'r' for random number\n"\
                << "Enter 'q' for quit"\
                << endl;
                    break;
                }
                case 'q': {quit = true; break;}
                default: {
                    command_incorrect = true;
                    cout << "Error: Invalid command!" << endl;
                    break;
                }
            }

        if (quit || help || command_incorrect || error) {
            cout << endl;
            continue;
        }
        if (result_out)
            cout << fixed << result << endl << endl;
    }
}