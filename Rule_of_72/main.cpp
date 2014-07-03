/* 
 * File:   Rule_of_72
 * Author: Shen Jin
 * Created on July 2, 2014, 1:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Input
    //Declare Variables
    unsigned short N; //number of years
    
    //Output
    //Declare Variables
    float i; //interest rate
    float number; // number should be close to 2
       
    //Prompt the User
    cout << "How long is the term(in years)?" << endl;
    cin >> N;
       
    //Calculation
    i = 72/N/100;
    number = pow(1 + i, N);
    cout << number;
    
    return 0;
}

