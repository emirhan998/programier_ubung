#include <iostream>

using namespace std;


int main() {

double f;                                 // Eingabe in Fahrenheit
double c;                               // Ergebnis in Celsius, a ist ein double, kann also comma zahlen haben

cout << "Geben Sie eine zahl ein: ";  //gebe eine zahl ein
cin>>f;                                // die zahl wird in den wert f eingegeben

c = (5.0 / 9.0) * (f - 32);

if (f>0){
cout<<"die temperatur in celsius ist="<<c;
}
else
cout<<"geben sie eine plausieble zahl ein";
// formel für farenheit zu celsius


return 0;


}
