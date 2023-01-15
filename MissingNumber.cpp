#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long

int main(){
    ll n;
    cin >> n;
    ll res = n*(n+1)/2;
    for( int i =0; i < n-1; ++i){
        int b;
        cin >> b;
        res = res - b;
        // cout << res << endl;
    }
    cout << res;
}

// Math question that needs you to know the formula for the sum of n contiguous numbers
// Formula is end(end + start)/2 in this case end is n and start is 1
