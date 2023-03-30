/*Solution 1 using String*/
class Solution {
    public int[] separateDigits(int[] nums) {
        String temp;
        ArrayList<Integer> list = new ArrayList<>();
        for(int i = 0; i < nums.length; i++){
            temp = Integer.toString(nums[i]);
            for(int j = 0; j < temp.length(); j++){
                list.add(temp.charAt(j)-'0');
            }    
        }
        int[] returnArray = new int[list.size()];       
        for (int i = 0; i < list.size(); i++) {       
            returnArray[i] = list.get(i);                
        }                                        
        return returnArray;
    } 
}
/*Solution 2 using int*/
/*
class Solution {
    public int[] separateDigits(int[] nums) {
        int num, n;
        ArrayList<Integer> list = new ArrayList<>();
        for(int i = 0; i < nums.length; i++){
            ArrayList<Integer> temp = new ArrayList<>();
            num = nums[i];
            while(num > 0){
                temp.add(num%10);
                num/=10;
            }
            for (int j = temp.size() - 1; j >= 0; j--) {
                list.add(temp.get(j));
            }
        }
        int[] returnArray = new int[list.size()];       
        for (int i = 0; i < list.size(); i++) {       
            returnArray[i] = list.get(i);                
        }                                        
        return returnArray;
    }   
}
*/
