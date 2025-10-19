#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Geben Sie a ein: ";
    cin >> a;
    cout << "Geben Sie b ein: ";
    cin >> b;
    cout << "Geben Sie c ein: ";
    cin >> c;
    cout << "Geben Sie d ein: ";
    cin >> d;

    cout << "Vor Vertauschung: a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;

    // Nur eine Hilfsvariable nötig
    int temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;

    cout << "Nach Vertauschung: a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;

    return 0;
}
