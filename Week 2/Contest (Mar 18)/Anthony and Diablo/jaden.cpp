#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double a, n;
    cin >> a >> n;
    
    double radius = n/(2*M_PI);
    
    double area = (radius * radius) * M_PI;
    
    if(area >= a){
        cout << "Diablo is happy!";
    }
    else{
        cout << "Need more materials!";
    }
}
