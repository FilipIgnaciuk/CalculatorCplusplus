#include <iostream>
using namespace std;

void menu(void) {
    std::cout << "Select an option:" << std::endl;
    std::cout << "1 - Add" << std::endl;
    std::cout << "2 - Subtract" << std::endl;
    std::cout << "3 - Multiply" << std::endl;
    std::cout << "4 - Divide" << std::endl;
    std::cout << "0 - END" << std::endl;
}

int main() {
    int option = 0;
    int number1 = 0;
    int number2 = 0;
    int result = 0;


    do {
        menu();
        cin >> option;
        switch (option) {
            case 0:
                break;
            case 1:{
                std::cout << "Enter first number: " << std::endl;
                cin >> number1;
                std::cout << "Enter second number: " << std::endl;
                cin >> number2;
                result = number1 + number2;
                cout << number1 << " + " << number2 << " = " << result << endl;
                break;}
            case 2:{
                std::cout << "Enter first number: " << std::endl;
                cin >> number1;
                std::cout << "Enter second number: " << std::endl;
                cin >> number2;
                result = number1 - number2;
                cout << number1 << " - " << number2 << " = " << result << endl;
                break;}
            case 3:{
                std::cout << "Enter first number: " << std::endl;
                cin >> number1;
                std::cout << "Enter second number: " << std::endl;
                cin >> number2;
                result = number1 * number2;
                cout << number1 << " * " << number2 << " = " << result << endl;
                break;
            }
            case 4:{
                int modulo = 0;
                std::cout << "Enter first number: " << std::endl;
                cin >> number1;
                std::cout << "Enter second number: " << std::endl;
                cin >> number2;
                if (number2!= 0) {
                    result = number1 / number2;
                    cout << number1 << " / " << number2 << " = " << result << endl;
                    modulo = number1 % number2;
                    cout << "Modulo: "<< modulo << endl;
                } else {
                    if (number1 == 0) {
                        cout << number1 << " / " << number2 << " = " << "NaN" << endl;
                    } else if (number1 > 0) {
                        cout << number1 << " / " << number2 << " = " << "+INF" << endl;
                    } else {
                        cout << number1 << " / " << number2 << " = " << "-INF" << endl;
                    }
                }
                break;
            }
            default:
                std::cout << "Choose the right number" << std::endl;
        }
    } while (option != 0);

    return 0;
}