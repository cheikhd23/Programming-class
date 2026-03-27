#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream input;
    ofstream output;
    string x;
    
    output.open("io2.txt");
    if(output.fail())
    {
        cout << "Error opening output file." << endl;
        return 1;
    }
    output<< "Cheikh\n";
    output<< "Ahmed\n";
    output<< "Tidiane\n";
    output<< "Dione"; //do not put endl at the end of the last line to test the eof() function
    

    output.close();

    input.open("io2.txt");
    if(input.fail()){
        cout << "Error opening input file." << endl;
        return 1;
    }

    input >> x;
    cout << x << endl;
    while(!input.eof()){   // This loop will read until the end of the file is reached
        input >> x;
        cout << x << endl;

    }
    
   
    input.close();
    return 0;
}