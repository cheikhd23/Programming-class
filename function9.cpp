#include <iostream>
#include <cmath>
using namespace std;

int maxValue(int x, int y);
int maxValue(int x, int y, int z);
int maxValue(int x, int y, int z, int w);
int main()
{
    int x, y;
    cout << "Please enter two numbers\n";
    cin >> x >> y;
    int result = maxValue(x, y);
    cout << "the Max value is: " << result << endl;

    int z;
    cout << "Please enter three integers\n";
    cin >> x >> y >> z;
    int threeResult = maxValue(x, y, z);
    cout << "the result is: " << threeResult << endl;

    int w;
    cout << "Please enter four integers\n";
    cin >> x >> y >> z >> w;
    int fourResult = maxValue(x, y, z, w);
    cout << "the result is: " << fourResult << endl;

	
		
    return 0;
}
int maxValue(int x, int y){
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
int maxValue(int x, int y, int z){
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}
int maxValue(int x, int y, int z, int w){
    if (x >= y && x >= z && x >= w) {
        return x;
    } else if (y >= x && y >= z && y >= w) {
        return y;
    } else if (z >= x && z >= y && z >= w) {
        return z;
    } else {
        return w;
    }
}
