#include <iostream>
using namespace std;
int main(){
    double Rate=12;
    double Hours,Salary=0.0;
    cin>>Hours;
    if(Hours>40){
        Salary= 40*Rate+(Hours-40)*(Rate*1.5);}
    else{
        Salary= Hours*Rate;
    }
cout<<Salary;
return 0;
}