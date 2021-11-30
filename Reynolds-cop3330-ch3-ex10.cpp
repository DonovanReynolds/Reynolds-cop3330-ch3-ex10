/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Donovan Reynolds
 */


#include "std_lib_facilities.h"

int main()
{
    string operation;
    double a,b, finalval;
    cin >> operation >> a >> b;
    cout << operation << a << b;

    if (operation == "+")
        finalval = a+b;
    else if (operation == "-")
        finalval = a-b;
    else if (operation == "*")
        finalval = a*b;
    else if (operation == "/")
        finalval = a/b;
        
    cout << "here is your final value" << finalval;

    return 0;

}


