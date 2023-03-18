class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
     int x = 0; 
     for(string i : operations){
         if(i == "++X" || i == "X++"){
             x++;
         }
         if(i == "--X" || i == "X--"){
             x--;
         }
     }

     return x;
     }

   

    
};
