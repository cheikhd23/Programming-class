#include <iostream>
using namespace std;

string  colorLetter(char x){
switch(x){
    case 'B':
        return"Black";
        break;
    case 'W':
        return"White";
        break;
    case 'R':
        return"Red";
        break;
    default:
        return"Unknown color";
    
        break;
    }
}
int main()
{
	char x;
	cout << "Please enter a color code (B, W, R)?\n";
	cin >> x;
    cout<<"Color is: "<<colorLetter(x)<<endl;
	
		
return 0;
}