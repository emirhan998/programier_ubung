#include <iostream>

using namespace std;

int main()
{

double h;
cout<<"geben sie ein grad 0-360 ein";
cin>>h;

if (337.5<h||h<=22.5){
    cout<<"Osten";
}
else if (22.5< h && h<=67.5){
    cout<<"Nordosten";
}
else if (67.5< h && h<=112.5){
    cout<<"Norden";
}
else if (112.5<h&&h<=157.5){
    cout<<"Nordwesten";
}
else if (157.5<h&&h<=202.5){
    cout<<"Westen";
}
else if (202.5<h&&h<=247.5){
    cout<<"Südwest";
}
else if (247.5<h&&h<=292.5){
    cout<<"süden";
}
else if (292.5<h&&h<=337.5){
    cout<<"südosten";
}
}
