class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string a = "FizzBuzz";
        string b = "Fizz";
        string c = "Buzz";
        vector<string> arr;
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 && i % 5 == 0){
                arr.push_back(a);
            }
            else if(i % 3 == 0){
                arr.push_back(b);
            }
            else if(i % 5 == 0){
                arr.push_back(c);
            }
            else{
                string in = to_string(i);
               arr.push_back(in);
            }
        }
        return arr;
    }
};