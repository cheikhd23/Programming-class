#include <iostream>
using namespace std;

int minValue(int x, int y, int z) {
	int min = x;
	if (x < y) {
		if (x < z)
			return x;
		else
			return z;
	}
	else {
		if (y < z)
			return y;
		else
			return z;
	}
}

int main()
{
	int x, y, z;
	cout << "Please enter 3 values to find the minimum?\n";
	cin >> x >> y >> z;
	cout << minValue(x, y, z);
}