#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long num;
    cin >> num;
    if (num == 2 || num == 3){
        cout << "NO SOLUTION";
        return 0;
    }
    if (num%2==0){
        for (int i = num-1; i > 0; ----i){
            cout << i << " ";
        }
        
        for (int i = num; i > 0; ----i){
            cout << i << " ";
        }
        
    }
    else {
        for (int i = num; i > 0; ----i){
            cout << i << " ";
        }
        for (int i = num-1; i > 0; ----i){
            cout << i << " ";
        }
    }
    
}

// Only problems without a solution are 2 and 3.
// For this problem you have to just start from the top and go down two at a time, even or odds.
// Only edge case to worry about i think is 4 where your code might print 4 2 3 1 so be wary of that and code appropriately