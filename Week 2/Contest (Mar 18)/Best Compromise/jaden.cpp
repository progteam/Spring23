#include <iostream>
#include <vector>

using namespace std;
int main(){
    int tests, n, m;
    
    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> n >> m;
        vector<string> b(n, "");
        string result(m, ' ');
        
        for(int j = 0; j < n; j++){
            cin >> b[j];
        }
        
        for(int j = 0; j < m; j++){
            int count = 0;
            for(int k = 0; k < n; k++){
                if(b[k][j] == '0'){
                    count++;
                }
            }
            if(count > n/2){
                result[j] = '0';
            }
            else{
                result[j] = '1';
            }
        }
        
        cout << result << "\n";
    }
}
