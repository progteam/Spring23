#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //set up variables
    int t, s, n, temp;
    cin >> t >> s >> n;

    //set up more variables
    int currGrains = s, currTime = 0, tempTime;
    //keep track of which side is on the bottom, false if the hour glass is flipped from its original position
    bool side = false;

    for(int i = 0; i < n; i++){
        //take in the next time it will be flipped
        cin >> tempTime;
        //add or remove sand based on which side is on the bottom
        if(side){
            currGrains = max(0, currGrains - (tempTime-currTime));
            side = false;
        }
        else{
            currGrains = min(s, currGrains + (tempTime - currTime));
            side = true;
        }

        //set current time equal to the next time
        currTime = tempTime;
    }
    //print out the number of sand not in the side currently on the bottom with the remaining time taken into account
    if(side){
        cout << max(currGrains - (t - currTime), 0);
    }
    else{
        cout << max((s - currGrains) - (t-currTime), 0);
    }
}
