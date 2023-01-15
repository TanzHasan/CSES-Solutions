#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long int num;
    cin >> num;
    
    while (num!=0){
        long long int pile1, pile2;
        cin >> pile1 >> pile2;
        if ((pile1 + pile2)%3 == 0 && 2*min(pile1, pile2) >= max(pile1, pile2)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        num --;
    }
    
    }

// The way to think about this one is, you can rebalance the totals no matter what as long as they are a multiple of 3. 
// The only exception is if the split greater than 1:2 or 2:1 between piles. Since the most we can remove is 2 from the biggest pile
// we will never be able to rebalance.