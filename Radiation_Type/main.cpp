/* 
 * File:   Radiation
 * Author: Shen Jin
 * Created on July 2, 2014, 12:54 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Input
    //Declare Variable
    float L;
    
    cout << "What is the wavelength?  ";
    cin >> L;
    if (L>5e0)
        cout << "Radio" << endl;
    else if (L>5e-3)
        cout << "Microwave" << endl;
    else if (L>5e-6)
        cout << "Infrared" <<endl;
    else if (L>5e-7)
        cout <<"Visible" << endl;
    else if (L>5e-9)
        cout << "Ultraviolet" << endl;
    else if (L>5e-11)
        cout << "X-Ray" << endl;
    else 
        cout << "Gamma Ray" << endl;
    return 0;
}

