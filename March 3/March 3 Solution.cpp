class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int res = 0;
        for(int i: nums)
            res ^= i;
        for(int i=0; i<=nums.size(); i++)
            res ^= i;
        
        return res;
    }
};
