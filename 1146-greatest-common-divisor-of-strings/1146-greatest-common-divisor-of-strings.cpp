class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // int lgt1 = str1.size();
        // int lgt2 = str2.size();
        // int c=0;
        // for(int i=1; i<lgt1/2; i++){
        //     if(str1.substr(i, lgt2) == str2){
        //         c++;
        //     }
        // }
        // if(c==0){
        //     return "";
        // }
        // else{
        //     // if(str2)
        //     return str2;
        // }
//     int gcd(int a, int b) {
//     while (b) {
//         a = a % b;
//         std::swap(a, b);
//     }
//     return a;
// }
    if (str1 + str2 != str2 + str1) {
        return "";
    }
    return str1.substr(0, gcd(str1.length(), str2.length()));
}
};
