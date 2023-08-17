class Solution {
public:
    string reverseVowels(string s){
        int n = s.size();
        set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int left = 0;
        int right = n-1;
        while (left < right) {
            if (vowels.find(s[left]) == vowels.end()) {
                left++;
                continue;
            }
            if (vowels.find(s[right]) == vowels.end()) {
                right--;
                continue; 
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};