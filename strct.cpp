
#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

struct ComplexNumber {
    int I = -1;
    int A = 1;
    int B = 1;
    int Mult;
    int Plus;
    int Minus;
    int Del;
    int Z;
};

int plus_(ComplexNumber& a) {
    a.Z = a.A + (a.B * a.I);
    return a.Z;
}
int minus_(ComplexNumber& a) {
    a.Z = a.A - (a.B * a.I);
    return a.Z;
}
int mult(ComplexNumber& a) {
    a.Z = a.A * (a.B * a.I);
    return a.Z;
}
int del(ComplexNumber& a) {
    if (a.A == 0 || a.B == 0) {
        a.Z = 0;
    }
    else {
        a.Z = a.A / (a.B * a.I);
    }

    return a.Z;
}

void full(ComplexNumber& A) {
    int action = 0;
    int a = A.A;
    int b = A.B;
    do {
        cout << "\n[1] - Плюс\n[2] - минус\n[3] - умножение\n[4] - Деление\n[5] - Выход.\n";
        cin >> action;
        switch (action) {
        case 1:
            cout << a << " + (" << b << "*i) = ";
            cout << A.Plus;
            break;
        case 2:
            cout << a << " - (" << b << "*i) = ";
            cout << A.Minus;
            break;
        case 3:
            cout << a << " * (" << b << "*i) = ";
            cout << A.Mult;
            break;
        case 4:
            cout << a << " / (" << b << "*i) = ";
            cout << A.Del;
            break;
        default:
            cout << "Выход.";
            action = 5;
            break;
        }
    } while (action != 5);
}
void Enter_(ComplexNumber& A) {

    cout << "Введите вещ.число A\n"; cin >> A.A;
    cout << "Введите вещ.число B\n"; cin >> A.B;
    A.Plus = plus_(A);
    A.Minus = minus_(A);
    A.Mult = mult(A);
    A.Del = del(A);
}
void main() {

    setlocale(0, "");
    srand(time(NULL));
    ComplexNumber A;

    Enter_(A);

    full(A);

}
