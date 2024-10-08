class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //Not the best since not suitable for large input constraints

        //string num;
        // for(int i : digits){
        //     num.append(to_string(i));
        // }
        // long long after_conversion = stoll(num) + 1;
        
        // vector<int> vec1;
        // while(after_conversion > 0){
        //     int end_digit = after_conversion % 10;
        //     vec1.push_back(end_digit);
        //     after_conversion /= 10;
        // }
        // reverse(vec1.begin(), vec1.end());
        // return vec1;

        //Optimal Approach
        int size_of_digits = digits.size();
        for(int i = size_of_digits - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits; 
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};