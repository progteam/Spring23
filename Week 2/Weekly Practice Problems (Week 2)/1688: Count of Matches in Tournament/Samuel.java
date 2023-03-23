class Solution {
    public int numberOfMatches(int teams) {
        int matches = 0;
        int sum = 0;
        while(teams > 1){
            if(teams % 2 == 0){
                matches = teams/2;
                sum += matches;
                teams = teams / 2; 
            }
            else{
                matches = (teams-1)/2;
                sum += matches;
                teams = (teams - 1) / 2 + 1;
            }
        } 
        return sum;
    }
}
