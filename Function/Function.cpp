// Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using  namespace std;

int Add1(int a, int b) {
    int c = a + b;
    return c;
}

int Sub(int a, int b) {
    return a-b;
}

int Mul(int a, int b) {
    // Multiplication
    return a * b;
}
double Div(double a, double b) {
    // Multiplication
    return a / b;
}


void main()
{
    
    /*HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    SetConsoleDisplayMode(hconsole, CONSOLE_FULLSCREEN_MODE, &coord);*/

    setlocale(LC_ALL, "Russian");
       
    int a, b;
    cout << "¬ведите числа два: "; 
    cin >> a >> b;
   
    int c = Add1(a, b);
    cout << Sub(a, b) << endl; 
    cout << Div(a, b) << endl;
    
    cout << c;


}

