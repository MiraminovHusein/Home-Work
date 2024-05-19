#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    float counter = 0;

    cin>>n;

    for(float i = 1; i <= n; i++){

        counter = counter + (1/i);
    }
    cout<<"Multi= "<<counter<<endl;
    main();
}




