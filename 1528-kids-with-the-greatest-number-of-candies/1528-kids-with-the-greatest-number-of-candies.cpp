class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        int n = candies.size();
        vector<bool> ans(n, false);
        for(int i=0; i<n; i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies >= max){
                ans[i] = true;
            }
        }
        return ans;
    }
};