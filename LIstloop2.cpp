#include <iostream>
using namespace std;
int main() {
    const int maxWidth = 7;

    for (int X = 1; X <= maxWidth; X += 2) {
        for (int S = 0; S < (maxWidth - X) / 2; S++) {
            cout << " ";
        }
        for (int Y = 1; Y <= X; Y++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int X = maxWidth - 2; X >= 1; X -= 2) {
        for (int S = 0; S < (maxWidth - X) / 2; S++) {
            cout << " ";
        }
        for (int Y = 1; Y <= X; Y++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
