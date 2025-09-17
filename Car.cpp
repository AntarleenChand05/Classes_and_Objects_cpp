#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
};

int main() {
    Car c;
    cout << "Enter car brand: ";
    getline(cin, c.brand);
    cout << "Enter manufacturing year: ";
    cin >> c.year;
    cout << "\nCar Details:\n";
    cout << "Brand: " << c.brand << endl;
    cout << "Year: " << c.year << endl;
    return 0;
}

/*OUTPUT
Enter car brand: Mclaren
Enter manufacturing year: 2021

Car Details:
Brand: Mclaren
Year: 2021
*/
