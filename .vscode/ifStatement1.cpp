#include <iostream>
using namespace std;
int main(){
   double Price,Total=00.000;
   cin>>Price;
   if (Price<0 || Price>100){
        cout<<"Error";
    }
    else if(Price>=50)
    {
    Total=Price+0;
}
    else if (Price>=25 && Price<50){
    Total=Price+(Price*0.05);
    }
    else {
    Total=Price+(Price*0.1);
    }
cout<<Total;

return 0;
}
