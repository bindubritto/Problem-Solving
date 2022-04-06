// Optimal | O(n) space, O(n) time

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            int potentialMatch = target - nums[i];
            if(seen.count(potentialMatch)){
                return { seen[potentialMatch], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};