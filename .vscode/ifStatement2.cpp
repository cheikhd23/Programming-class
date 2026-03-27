#include <iostream>
using namespace std;
int main(){
   int Grade;
   cin>>Grade;
   if (Grade>=90 && Grade<=100){
    cout<<'A';
   }
   else if (Grade>=80 && Grade<=89){
    cout<<'B';
   }
   else if (Grade>=70 && Grade<=79){
    cout<<'C';
   }
   else if (Grade>=60 && Grade<=69){
    cout<<'D';
   }
   else{
    cout<<'F';
   }

return 0;
}
