 
    class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int sum =0;

        int num = mat.size();
        for(int i = 0 ; i < num ; i++){
          
                sum += mat[i][i];
            
        }
        for(int i = 0 ; i < num  ; i++){
            sum += mat[i][num -i -1];
        }
     

        if(num % 2 ){
            sum = sum - mat[num/2][num/2];
           
        }
       return sum;
           
          
    }
};
   
