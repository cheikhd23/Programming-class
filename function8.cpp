#include <iostream>
#include <cmath>
using namespace std;

 
void swap(double &x, double y){
    double temp = x;
    x = y;
    y = temp;
}
void swap(int &x, int y){
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    double x, y;
    cout << "Please enter two numbers\n";
    cin >> x >> y;
    swap(x, y);
    cout  << "swapped values: "<< x << " and " << y << endl;
    int a, b;
    cout << "Please enter two integers\n";
    cin >> a >> b;
    swap(a, b);
    cout << "swapped values: "<< a << " and " << b << endl;
	
		
return 0;
}