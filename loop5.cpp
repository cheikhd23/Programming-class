#include <iostream>
using namespace std;
int main(){
int number = 225;
    int largestDivisor = 1;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            largestDivisor = i;
        }
    }

    cout << "The largest number that divides 225 without remainder is: "
         << largestDivisor << endl;

    

return 0;
}