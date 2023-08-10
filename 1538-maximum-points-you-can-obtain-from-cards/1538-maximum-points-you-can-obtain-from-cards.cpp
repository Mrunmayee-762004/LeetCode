class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        for (int i=0; i<n; i++) {
            sum += cardPoints[i];
        }
        int ksum = 0;
        for (int i = 0; i < k; i++) {
            ksum += cardPoints[i];
        }
        int maxsum=ksum;
        for (int i = k - 1; i >= 0; i--) {
            ksum -= cardPoints[i];
            ksum += cardPoints[n - (k - i)];
            maxsum = max(maxsum,ksum);
        }
        return maxsum;
    }
};
