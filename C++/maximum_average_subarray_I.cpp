class Solution {
public:
    int sum(vector<int>& nums, int n) {
        int res = 0;
        for(int i = 0; i < n; i++) res += nums[i];
        return res;
    }
    
    double findMaxAverage(vector<int>& nums, int k) {
        double s = 0, tmp = 0;
        
        for(int i = 0; i < nums.size()-k; i++) {
            tmp += nums[i+k] - nums[i];
            if(tmp > s) s = tmp;
        }
            
        return ((double)sum(nums, k)+s) / k;
    }
};
