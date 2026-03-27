#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream input;
    ofstream output;
    int x;
    
    output.open("io2.txt");
    if(output.fail())
    {
        cout << "Error opening output file." << endl;
        return 1;
    }
    output<< "1\n";
    output<< "2\n";
    

    output.close();

    input.open("io2.txt");
    if(input.fail()){
        cout << "Error opening input file." << endl;
        return 1;
    }

    input >> x;
    cout << x << endl;
    input >> x;
    cout << x << endl;

    input.close();
    return 0;
}
