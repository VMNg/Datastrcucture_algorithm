class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

    int s = digits.size() - 1 ;
    
    if(digits[s]<9)
    {           
        digits[s] += 1;
    }
    
    else{
        while(digits[s]==9 && s>=0)
        {
            digits[s] = 0;
            s--;
            if(s<0)
            {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        digits[s] += 1;
    }
    
    
    return digits;
}
    
};