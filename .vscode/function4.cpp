 #include <iostream>
using namespace std;

 
string  passFail(int Grade){
   if (Grade>=60 and Grade<=100){
    return "Passed";
   }
   else  {
    return "Failure";
   }
}
    
int main()
{
	int grade;
	cout << "Please enter a grade (0-100)?\n";
	cin >> grade;
    cout<<"You have: "<<passFail(grade)<<endl;
	
		
return 0;
}