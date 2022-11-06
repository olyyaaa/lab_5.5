// lab_5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;

int calculate(int p, int b);
int main()
{
    int r, m, b;
    int p;
    
    cout << "p = "; cin >> p;
    cout << "b = "; cin >> b;
    cout << "m = "; cin >> m;

    r = calculate(p, b);

    cout << r % m;
}

int calculate(int p, int b)
{
    int r;
    if (p == 0)
    {
        r = pow(b, p);
        return r;
    }
    if (p % 2 == 0)
    {
        r = pow(b, p / 2) * pow(b, p / 2);
        return r;
    }
    else
    {
        r = b * (pow(b, abs(p / 2))) * (pow(b, abs(p / 2)));
        return r;
    }
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
