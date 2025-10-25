#include <iostream>

using namespace std;

int main()
{
int A,a,B,b;

cout<<"geben sie ein zahlen intervall ein";
cin>>A>>a;
cout<<"geben sie ein 2. zahlen intervall ein";
cin>>B>>b;

if (max(A,a)>min(B,b)){ //if (max(A,a)<min(B,a)) //keine überlappung

    cout<<min(B,b)<<"-"<<max(A,a);

}









if (A>a){
   cout<<"dein anfang ist grosser als dein ende bei dem intervall 1";
}
if (B>b){
    cout<<"dein anfang ist grosser als dein ende bei dem intervall 2";
}

}
