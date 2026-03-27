#include <iostream>
using namespace std;
int main(){
char X;
cin>>X;
switch(X){
    case 'A':
        cout<<"Ahmad"<<endl;
        break;
    case 'B':
        cout<<"Bassam"<<endl;
        break;
    case 'C':
        cout<<"Cesar"<<endl;
        break;
    case 'D':
        cout<<"Dawood"<<endl;
        break;
    case 'E':
        cout<<"Edward"<<endl;
        break;
    case 'F':
        cout<<"Frederick"<<endl;
        break;
    default:
        cout<<"Unknown name "<<endl;
    
        break;
    }

        return 0;
}