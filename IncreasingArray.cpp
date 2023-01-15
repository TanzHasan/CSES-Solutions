#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long

int main(){
    ll n;
    cin >> n;
    ll last;
    cin >> last;
    ll ans = 0;
    for (int i = 0; i <n-1; ++i){
        ll cur;
        cin >> cur;
        if (cur < last){
            ans += last - cur;
        }
        // cout << cur << " " << last << endl;
        last = max(cur, last);
    }
    cout << ans;
}

// Check the difference between current element and previous element and add it to our answer if that number is positive.
// Set previous element to be max of all elements seen so far. Repeat this process for all elements.
//I used define ll long long and i don't like it :(