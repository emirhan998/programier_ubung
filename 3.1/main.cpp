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


if (w>0){
cout<<w;

if (w<2){
cout<<"woche";
}
else{
    cout<<"wochen";
}}
if (t>0){
cout<<t;

if(t<2){
cout<<"tag";
}
else{
    cout<<"tage";
}}
if (h>0){
cout<<h;

if (h<2){
cout<<"stunde";
}
else{
    cout<<"stunden";
}}                         // doppelt da ist das } vom if und vom else da so sorge ich dafür das dass "stunde" und "stunden" überspringt wird wenn der fall vom if nicht zutrifft
if (m>0){                 // bei 40 sekunden wird nix ausgegeben
cout<<m;

if (m<2) {
    cout<<"minute";
}
 else{
        cout<<"minuten";
}}
if (s>0){
cout <<s;

if (s<2){
cout<<"sekunde";

}
else{
    cout<<"sekunden";
}}}                         //man kann if statements verschachteln heisst das } placement ist wichtig manche bedingungen kann man damit überspringen



