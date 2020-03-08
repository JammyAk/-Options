//
//  Binomial Option Pricer.cpp
//  LearningCPP
//
//  Created by Jammy Akodu on 08/03/2020.
//  Copyright © 2020 Jammy Akodu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //defining my variables
    
    double S0,U,D,R;
    
    //Entering Data
    
    cout << "Enter S0: "; cin >> S0;
    cout << "Enter U:  "; cin >> U;
    cout << "Enter D:  "; cin >> D;
    cout << "Enter R:  "; cin >> R;
    cout << endl;
    
    //making sure that 0<S0, -1<D<U, -1<R
    if (S0<=0.0 || U<=-1.0 || D<=-1.0 || U<=D
        || R<=-1.0)
    {
        cout << "Illegal data ranges" << endl;
        cout << "Please use different variables" << endl;
        return 1;
    }
    //checking for arbitrage
    if (R>=U || R<=D)
    {
        cout << "Arbitrage exists" << endl;
        cout << "TPlease use different variables" << endl;
        return 1;
    }
    cout << "Input data checked" << endl;
    cout << "There is no arbitrage" << endl << endl;
    
    //compute risk-neutral probability
    cout << "q = " << (R-D)/(U-D) << endl;
    
    //compute stock price at node n=3,i=2
    int n=3; int i=2;
    cout << "n = " << n << endl;
    cout << "i = " << i << endl;
    cout << "S(n,i) = " << S0*pow(1+U,i)*pow(1+D,n-i)
    << endl;
    return 0; }

