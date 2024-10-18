class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    long long temp = x;
    long long reversed = 0;
    while(x > 0){
        int last_digit = x % 10;
        reversed = reversed * 10  + last_digit;
        x /= 10;
    }
    return temp == reversed;
    }
};