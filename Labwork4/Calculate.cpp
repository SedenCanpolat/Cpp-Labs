// Labwork4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Operation.h"
#include <fstream>


int main()
{
    cout << "Seden Canpolat" << endl
        << "20070001044" << endl << endl;

    const string INPUT_FILE = "InputFile.txt"; 
    const string OUTPUT_FILE = "OutputFile.txt";


    ifstream fInput(INPUT_FILE);
    ofstream fOutput(OUTPUT_FILE);

    if (fInput.fail()) {
        cerr << "Error - Failed to open " << "InputFile.txt" << endl;
        exit(-1); 
    }

    const unsigned short MAX_OPERATIONS = 20;
    Operation* oper_ary[MAX_OPERATIONS]{};
    int num_opers = 0;


    char x;
    double y, z;

    for (int i = 0; !fInput.eof(); i++) {
        fInput >> x >> y >> z;
        cout << x << ' ' << y <<  ' ' << z << endl;
        if (x == '+') {
           oper_ary[i] = new Add(y,z);
        }
        else if(x == '-'){
            oper_ary[i] = new Subtract(y, z);
        }
        else if (x == '*') {
            oper_ary[i] = new Multiply(y, z);
        }
        else if (x == '/') {
            oper_ary[i] = new Divide(y, z);
        }
        num_opers++;
    } 

    for (int i = 0; i <= num_opers; i++) {
       // cout << oper_ary[i]->Result() << endl;
        fOutput << " " << oper_ary[i]->Result() << endl;
    }


}

