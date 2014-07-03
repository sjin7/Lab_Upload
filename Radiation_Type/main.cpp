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
    float L; //L = lambda
    
    cout << "What is the wavelength?  ";
    cin >> L;
    if (L>5e0f)
        cout << "Radio" << endl;
    else if (L>5e-3f)
        cout << "Microwave" << endl;
    else if (L>5e-6f)
        cout << "Infrared" <<endl;
    else if (L>1e-7f)
        cout <<"Visible" << endl;
    else if (L>1e-9f)
        cout << "Ultraviolet" << endl;
    else if (L>1e-11f)
        cout << "X-Ray" << endl;
    else 
        cout << "Gamma Ray" << endl;
    return 0;
}

