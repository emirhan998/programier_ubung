#include <iostream>

using namespace std;

int main()
{
double x;
int summe = 0;
int schnitt = 0;
cout<<"(abbruch bedigung =-1)";

for (int i=1; x!=-1 ;i++){
cout<<" geben sie bliebig viele zahlen ein ";
cin>>x;
summe= summe + x;

if (x==-1){
summe = summe + 1;
i = i-1;
}
schnitt= summe/i;
}

cout<<"schnitt = "<<schnitt;
}

