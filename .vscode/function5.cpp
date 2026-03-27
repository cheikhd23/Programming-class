#include <iostream>
using namespace std;

 
bool  passFail(int Grade){
   if (Grade>=60 and Grade<=100){
    return true;
   }
   else  {
    return false;
   }
}
    
int main()
{
	int grade;
	cout << "Please enter a grade (0-100)?\n";
	cin >> grade;
    if (passFail(grade)) {
        cout << "You have Passed the class" << endl;
    } else {
        cout << "You have Failed the class" << endl;
    }
    
		
return 0;
}