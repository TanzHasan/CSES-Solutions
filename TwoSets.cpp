#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    long long num;
    cin >> num;
    if ((num-3) %4 == 0){
        vector<int> first = {1,2};
        vector<int> second = {3};
        cout << "YES" << endl;
        for (int i = 4; i < num+1; ++i){
            if (i % 4 == 0 || i % 4 == 3){
                first.push_back(i);
            }
            else{
                second.push_back(i);
            }
        }
        cout << first.size() << endl;
        for (int i = 0; i < first.size(); ++i){
            cout << first[i] << " ";
        }
        cout << endl << second.size() << endl;
        for (int i = 0; i < second.size(); ++i){
            cout << second[i] << " ";
        }
    }
    else if (num %4 == 0 & num!=0){
        vector<int> first = {1,4};
        vector<int> second = {2, 3};
        cout << "YES" << endl;
        for (int i = 5; i < num+1; ++i){
            if (i % 4 == 1 || i % 4 == 0){
                first.push_back(i);
            }
            else{
                second.push_back(i);
            }
        }
        cout << first.size() << endl;
        for (int i = 0; i < first.size(); ++i){
            cout << first[i] << " ";
        }
        cout << endl << second.size() << endl;
        for (int i = 0; i < second.size(); ++i){
            cout << second[i] << " ";
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}

// The more i look at my solution the more unhappy I feel with it but I will leave it up
// This is only solveable two ways, if the number is a multiple of 4 or the number minus 3 is a multiple of 4.
// The implementation above is inelegant but should walk you through the logic of the problem.
// If multiple of 4: choose first and last num for one set, and the rest for the other. Repeat for every 4 nums.
// In the other case first and third go to one set and the rest go to the other. Repeat for every 4 nums.