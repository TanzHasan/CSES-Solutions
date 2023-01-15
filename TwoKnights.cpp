#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long num;
    cin >> num;
    long long counter = 0;
    for (int i = 1; i < num+1; ++i){
        long long spaces = i * i;
        long long temp = spaces*(spaces-1)/2;
        if (i > 1){
            counter += 8*(i-2);
        }
        temp -= counter;
        cout << temp << " " << counter << endl;
    }
}

// I'll be honest I solved this problem very cheaply by looking at how the number of valid knight
// positions varied from the number of spaces in the first solution shown on the site.
// Starting at 3 there was 8, 24, 48 etc less positions than the number of spaces and i just calculated that formula.
// +8, +16, +24 etc. formula was 8*(i-2)+ the past sum less than the current num of spaces.
// The actual solution is much more elegant and here is the link: https://www.youtube.com/watch?v=12Y8OrlRS3U&t=701s