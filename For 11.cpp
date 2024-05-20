#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a;
    long long counter = 0;

    cin>>n;

    for(int i = 1; i < n; i++){

        a = (n * n) + pow((2 * n),2);

        counter = counter + pow((n + i),2);
    }
    cout<<":"<<counter+a<<endl;
    main();
}





