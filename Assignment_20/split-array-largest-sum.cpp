class Solution {
public:
    
      
    bool isPossibleToSplit(vector<int> &nums, int m, int mid) {
        int subarrays = 1;
        int sum = 0;
        
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            if(sum > mid) {
                subarrays++;
                if(subarrays > m) return false;
                sum = nums[i];
            }
        }
        
        return true;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int low = INT_MIN;
        int high = 0;
        
        for(int num: nums) {
            low = max(low, num);
            high += num;
        }
        
        int ans = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            
            if(isPossibleToSplit(nums, m, mid)) {
                ans = mid;
                high = mid-1;
            }
            
            else {
                low = mid+1;
            }
        }
        
        return ans;
    }
};
