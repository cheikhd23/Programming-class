#include <iostream>
using namespace std;

double sum(double x, double y) {
	

	double result = 0;
	result = x + y;
	return result;
}
int multiplication(int a, int b) {
	
	int result = a * b;
	return result;
}
int soustraction(int z, int w) {
    
    int result = z - w;
    return result;
}
int division(int m, int n) {
    
    int result = m / n;
    return result;
}

int main()
{
	double returnedValue = sum(3,2);
	cout << returnedValue;
	cout << endl;

	int res = multiplication(4,5);
	cout << res;
	////////////////
	cout << endl;
	cout << sum(7, 8);
	cout << endl;
	cout << multiplication(6, 10);
    cout << endl;
    cout << soustraction(15, 5);
    cout << endl;
    cout << division(20, 4);
return 0;



}