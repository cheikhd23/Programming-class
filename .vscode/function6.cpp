#include <iostream>
#include <cmath>
using namespace std;

 
double squareRoot(double a, double b, double c){
   if(a==0){
    return 0;
   }
    double D = pow(b,2) - 4*a*c;
    if (D<0){
        cout<<"The equation has no real roots"<<endl;
        return 0;
    }
    double result = (-b+sqrt(D))/(2*a);
    return result;
}
int main()
{
	int a, b, c;
	cout << "Please enter three numbers\n";
	cin >> a >> b >> c;
    double result = squareRoot(a, b, c);
    cout << "the result is: " << result << endl;
        
		
return 0;
}