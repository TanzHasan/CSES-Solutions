#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    string n;
    cin >> n;
    map <char, int> m;
    stack <char> s;
    for (char i: n){
        m[i]++;
    }
    int odd = 0;
    for (auto i: m){
        if (i.second%2 != 0){
            odd++;
        }
        if (odd > 1){
            cout << "NO SOLUTION";
            return 0;
        }
    }
    string rem = "";
    string res = "";
    for (auto i: m){
        if (i.second%2 == 1){
            rem += i.first;
        }
        for (int j = 0; j < i.second/2; ++j){
            res += i.first;
        }
    }
    cout << res << rem;
    reverse(res.begin(), res.end());
    cout << res;

}

// Straightforward solution, just check the number of instances of each letter to check if a palindrom is possible to make
// 1 odd letter is allowed, if there are more than 1 odd letter, then it's not possible to make a palindrome
// use reverse method to reverse the string and add it to the end of the string