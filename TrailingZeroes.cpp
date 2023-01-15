#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long int num;
    long long int check = 5;
    long long int modify = 1;
    cin >> num;
    long long int counter = 0;
    while (check <= num){
        counter += num/(check);
        check *= 5;
    }
    cout << counter;
    
    }

// This is a question that requires you to understand how to get a trailing 0. You need a 5 and an even number.
// Essentially find the number of 5s in the number. You have to remember that there are 2 5s in 25, 3 5s in 125, etc.