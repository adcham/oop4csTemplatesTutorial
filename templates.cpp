#include <iostream>
#include "Fraction.h"
#include "MyVector.h"

using namespace std;

template<typename T>T& getMax(T& a, T& b){
    return a>b?a:b;
}

int main()
{
    MyVector<int> intVec;
    MyVector<float> floatVec;
    MyVector<Fraction*> fractionVec;

    int i1 = 10;
    int i2 = 20;

    int i3 = getMax(i1, i2);


    Fraction f1(1, 2);
    Fraction f2(1, 3);

    f1.displayFraction();
    cout << "\n";
    f2.displayFraction();

    Fraction& f3 = getMax(f1, f2);

    return 0;
}
