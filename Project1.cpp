#include <iostream>
using namespace std;

void print_introduction() {
    cout << "Hello! The program will tell you the temperature of the earth at any depth.\n";
}

double celsius_at_depth(double depth) {
    
    return 20.0 + (10.0 * depth);
}

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

void print_conclusion(double depth) {
    double c = celsius_at_depth(depth);
    double f = celsius_to_fahrenheit(c);

    cout << "The temperature of the earth at a depth of " << depth
         << " KM is " << c << " in Celsius, and " << f << " in Fahrenheit.\n";
}

int main() {
    print_introduction();

    char again = 'y';

    while (again == 'y' || again == 'Y') {
        double depth;
        cout << "Enter a depth in KM: ";
        cin >> depth;

        print_conclusion(depth);

        cout << "Would you like to do it again? (Y/N): ";
        cin >> again;
    }

    return 0;
}
