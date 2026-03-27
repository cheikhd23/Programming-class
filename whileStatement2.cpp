#include <iostream>
using namespace std;
int main(){
int sum=0;
int X=1;
while(X<=10){
   sum+=X*X+X-1;
   X++;
 
}
cout<<sum<<endl; 
return 0;
}