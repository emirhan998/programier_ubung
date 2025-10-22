#include <iostream>

using namespace std;

int main()
{
int a,b,c;

cout<<"geben sie 3 zahlen jeweils fur a,b und c ein";
cin>>a>>b>>c;


if(a==b&&b==c){
cout<<"dein dreieck ist gleichseitig";
}

else if (a==b||a==c||c==b){
cout<<"dein dreieck ist gleichschenklig";
}

else{
    cout<<"dein dreieck ist weder gleichschenklig oder gleichseitig!";
}
}
