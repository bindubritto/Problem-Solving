class Solution {
public:

    // Optimal - Time O(n^2) | Space O(n)
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int leftIdx = i + 1;
            int rightIdx = nums.size() - 1;
            int target = -a;
            
            while(leftIdx < rightIdx) {
                if(nums[leftIdx] + nums[rightIdx] > target){
                     rightIdx--;
                }
                else if(nums[leftIdx] + nums[rightIdx] < target){
                    leftIdx++;
                }
                else {
                    int b = nums[leftIdx];
                    int c = nums[rightIdx];
                    
                    // ignoring duplicates
                    while(leftIdx + 1 < rightIdx && nums[leftIdx + 1] == b) {
                        leftIdx++;
                    }
                    
                    // ignoring duplicates
                    while(leftIdx < rightIdx - 1 && nums[rightIdx - 1] == c) {
                        rightIdx--;
                    }
                    triplets.push_back({a, b, c});
                    leftIdx++;
                    rightIdx--;
                }
            }
            // ignoring duplicates 
            while(i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }
        return triplets;
        
    }
};