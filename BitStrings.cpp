#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long num;
    cin >> num;
    long long ans = 1;
    while(num!=0){
        ans = (ans*2)%1000000007;
        num/=2;
    }
    cout << ans;
    }
// Not the most efficient way of doing this because it's O(n) but it works
// Faster way would be log(n) but that takes more time to code :^)
// Straightforward solution: multiply by 2 and mod 10^9+7