#include <iostream>
#include "Difference.h"
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    Difference difference(a, b, c, d);
    difference.printResult();

    return 0;
}
