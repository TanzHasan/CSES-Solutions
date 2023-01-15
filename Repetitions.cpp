#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long

int main(){
    string n;
    cin >> n;
    char prev = n[0];
    int curr = 0;
    int ans = 0;
    for(char i: n){
        if (i == prev){
            curr++;
        }
        else{
            curr = 1;
            prev = i;
        }
        ans = max(curr, ans);
        // cout << res << endl;
    }
    cout << ans;
}

// This is a simple question that requires you to keep track of the previous character and the current character
// If the current character is the same as the previous character, increment the current counter
// else set to 0 and start again, return highest counter at the end