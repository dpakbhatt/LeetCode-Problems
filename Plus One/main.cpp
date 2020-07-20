class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l= digits.size();
        digits[l-1] += 1;
        int carry = digits[l-1]/10;
        digits[l-1] = digits[l-1]%10;

        for(int i = l-2; i >=0; i--){
            if(carry == 1){
                digits[i] += 1;
                carry = digits[i]/10;
                digits[i] = digits[i]%10;
            }
        }

        if(carry == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
