#include <iostream>

using namespace std;

int main()
{

int h,m,s,t,w,x;

cout<<"geben sie eine zahl in sekunden ein";
cin>>x;
w=x/604800;             // das modulo wird erst benötigt beim nächsten,
t=(x%604800)/86400;    // 604800s in einem tag das wird hier wiederholt damit man nur das was übrigbleibt berücksichtigt
h=(x%86400)/3600;     // hier zb ist die eigentliche rechnung die 3600 das 86400 ist nur damit man sich nicht zu viel nimmt
m=(x%3600)/60;
s = x % 60;         //verbleibende Sekunden nach den Minuten



cout<<w<<"wochen"<<t<<"tage"<<h<<"Stunden "<<m<<"Minuten "<<s<<"sekunden ";
}
