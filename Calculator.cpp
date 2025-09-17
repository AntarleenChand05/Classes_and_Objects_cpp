//ANTARLEEN CHAND
//24070123018 | ENTC A1

#include <iostream>
using namespace std;

class Calculator {
public:
    double num1, num2;
    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator c;
    cout << "Enter first number: ";
    cin >> c.num1;
    cout << "Enter second number: ";
    cin >> c.num2;

    cout << "\nAddition: " << c.add() << endl;
    cout << "Subtraction: " << c.subtract() << endl;
    cout << "Multiplication: " << c.multiply() << endl;
    cout << "Division: " << c.divide() << endl;
    
    return 0;
}

/*OUTPUT
Enter first number: 20
Enter second number: 5

Addition: 25
Subtraction: 15
Multiplication: 100
Division: 4
*/
