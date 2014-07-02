/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2014, 12:54 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Global Constants
//    float W1=1.0+3f, W2=1.0-2f, W3=1.0-5f, W4=0.5e-6f, W5=1.0-8f;
//    float W6=1.0-10f, W6=1.0-12f;
    float L;
    
    cout << "What is the wavelength?  ";
    cin >> L;
    if (L>5)
        cout << "Radio" << endl;
    else if (L>5e-3f)
        cout << "Microwave" << endl;
    else if (L>5e-6f)
        cout << "Infrared" <<endl;
    else if (L>5e-7f)
        cout <<"Visible" << endl;
    else if (L>5e-9f )
        cout << "Ultraviolet" << endl;
    else if (L>5e-11f )
        cout << "X-Ray" << endl;
    else 
        cout << "Gamma Ray" << endl;
    return 0;
}

