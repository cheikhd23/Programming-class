#include <iostream>
using namespace std;
int main(){
int sum=1;
int X=0;
cin>>X;
if(X<1 || X>50){
for(cin>>X;X<=50;X--)
sum*=X;
}
cout<<sum<<endl;
return 0;
}