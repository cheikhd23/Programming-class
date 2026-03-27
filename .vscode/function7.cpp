#include <iostream>
#include <cmath>
using namespace std;

 
double findResult(double x, double y){
    double result = pow(x+y, 2) - 5*x;
    return result;
}
int findResult(int x, int y){
    int result = pow(x+y, 2) - 5*x;
    return result;
}
long findResult(long x,long y){
    long result = pow(x+y, 2) - 5*x;
    return result;
}
int main()
{
    double x, y;
    cout << "Please enter two numbers\n";
    cin >> x >> y;
    double result = findResult(x, y);
    cout << "the result is: " << result << endl;
    int a, b;
    cout << "Please enter two integers\n";
    cin >> a >> b;
    int intResult = findResult(a, b);
    cout << "the result is: " << intResult << endl;
    long m, n;
    cout << "Please enter a long integer\n";
    cin >> m >> n;
    long longResult = findResult(m, n);
    cout << "the result is: " << longResult << endl;

	
		
return 0;
}