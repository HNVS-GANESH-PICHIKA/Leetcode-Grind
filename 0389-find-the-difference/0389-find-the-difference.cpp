class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for(char i : s){
            result ^= i;
        }
        for(char i : t){
            result ^= i;
        }
        return result;
    }
};