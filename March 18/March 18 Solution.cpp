class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int count = 1, prev = 0;
        for (int i = 1; i < nums.size(); i++) 
        {
            int diff = nums[i] - nums[i - 1];
            if (diff > 0 && prev <= 0 || diff < 0 && prev >= 0) 
            {
                prev = diff;
                count++;
            }
        }
        return count;
    }
};
