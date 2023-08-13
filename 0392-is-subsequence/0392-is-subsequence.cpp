class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1 = s.size();
        int t1 = t.size();
        int si=0;
        int ti=0;
        while( si<s1 && ti<t1){
            if(s[si] == t[ti]){
                si++;
            }
            ti++;
        }
        return si == s1;
        // for(int i=0; i<t1; i++){
        //     for(int j=0; j<s1; j++){
        //         if(t[i] == s[j]){
        //             c++;
        //         }
        //     }
        // }
        // if(c==s1){
        //     return true;
        // }
        // else {
        //     return false;
        // }
    }
};