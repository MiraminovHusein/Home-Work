#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;
    long long counter = 1;

    cin>>a>>b;

    for(int i = a; i <= b; i++){

        counter = counter * pow((i),2);
    }
    cout<<"Multi= "<<counter<<endl;
    main();
}



