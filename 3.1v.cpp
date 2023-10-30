// 3.1v.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double x, y, A, B;
    cout << "x = "; cin >> x;
    A = 2 * x - 13, 5;
    // 1 метод
    if (x < -1) {
        B = sin(x) / 1 + cos(x) * cos(x);
    }
    if (x >= -1 && x <= 1) {
        B = pow(cos(pow(sin(x - 1), 2)), 2);
    }
    if (x > 1) {
        x = x + 0, 4;
        B = log10(x);
    };
    y = A - B;
    cout << "1) y = " << y << endl;
    // 2 метод
    if (x < -1) {
        B = sin(x) / 1 + cos(x) * cos(x);
    }
    else if (x >= -1 && x <= 1) {
        B = pow(cos(pow(sin(x - 1), 2)), 2);
    }
    else {
        x = x + 0, 4;
        B = log10(x);
    };
    y = A - B;
    cout << "2) y = " << y << endl;




    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
