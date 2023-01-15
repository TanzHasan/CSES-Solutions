#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long num;
    cin >> num;
    for (int i = num; i > 0; --i){
        unsigned long long temp;
        unsigned long long x;
        unsigned long long y;
        
        cin >> y;
        cin >> x;
        // cout << x << " " << y << endl;
        temp = max(x,y)*max(x,y);
        // cout << temp << endl;
        if (max(x,y)%2 ==0){
            temp -= (x -1);
            temp -= (max(x,y) - y);
        }
        else{
            // cout << temp << endl;
            temp -= (y -1);
            // cout << temp << endl;
            temp -= (max(x,y) - x); 
        }
        cout << temp << endl;
    }
        
}

// Fun Question but takes some time to wrap your head around
// Note that all positive squares are at the top and all negatives on the side
// Calculate the distance from the square you are currently in to the nearest squared value and subtract, that is your answer
// If you are in 5,4 then the nearest squared value is at 5,0 and its 25. 25-4 = 21