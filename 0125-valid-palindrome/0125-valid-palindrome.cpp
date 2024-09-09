class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(auto ch : s){
            if(isalnum(ch)){
                filtered += tolower(ch);
            }
        }
        string t = filtered;
        int i = 0;
        int j = filtered.size()-1;
        while(i < j){
            swap(filtered[i], filtered[j]);
            i++;
            j--;
        }
        return filtered == t;
    }
};