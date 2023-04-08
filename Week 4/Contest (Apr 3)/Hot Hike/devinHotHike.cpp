#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    // initialize variables
    int n, yesterday = INT_MAX, today = INT_MAX, tomorrow = INT_MAX;
    int currMin = INT_MAX, totMin =  INT_MAX, spot = 0;

    //take in total number of days
    cin >> n;

    for(int i = 0; i < n; i++){
        //read in the temperature of tomorrow
        cin >> tomorrow;
        //find the maximum of the current hiking day temperatures
        currMin = max(yesterday, tomorrow);
        //if the max is lower the the previous min, replace the value
        if(currMin < totMin){
            totMin = currMin;
            spot = i-1;
        }
        //set today to yesterday and tomorrow to today to check the next day
        yesterday = today;
        today = tomorrow;

    }

    //print out the answer
    cout << spot << " " << totMin;
}
