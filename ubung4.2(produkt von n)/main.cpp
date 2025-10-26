#include <iostream>

using namespace std;

int main()
{
int n;

cout<<"geben sie eine zahl fur n ein ";
cin>>n;
int sum=1;

for(int i = 1; i<=n ;i++){

    sum=sum*i;
}
cout<<"ergebnis = "<<sum;
}
