#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a;
    long long counter = 0;

    cin>>n;

    for(int i = 1; i < n; i++){

        a = (n * n) + (2 * n);

        counter = counter + pow((n + i),2);
    }
    cout<<":"<<counter+a<<endl;
    main();
}





