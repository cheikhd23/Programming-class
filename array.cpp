#include <iostream>
using namespace std;

int main(){
int x[5];
for(int a=0;a<5;a++){
 cout<<"Please enter a number\n";
cin>>x[a];
}
cout<<"the following code will print out all items in the array\n";
for(int i=0;i<5;i++){
 cout<<"The item number "<<i<<" is: "<<x[i]<<endl;
}
int sum=0;
int maxValue=x[0];
for(int i=1;i<5;i++){
    sum+=x[i];
    if(x[i]>maxValue){
        maxValue=x[i];
    }
}
cout<<"the sum of all items in the array is: "<<sum<<endl;
cout<<"the max value in the array is: "<<maxValue<<endl;
return 0;
}
