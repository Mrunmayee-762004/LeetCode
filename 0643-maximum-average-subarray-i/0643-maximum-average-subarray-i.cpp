class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int kSum = 0;
        for(int i=0; i<k; i++){
            kSum += nums[i];
        }
        int max_sum = kSum;
        for(int i=k; i<n; i++){
            kSum += nums[i] - nums[i-k];
            max_sum = max(max_sum, kSum);
        }
        double max2 = max_sum;
        return max2/k; 
    }
};