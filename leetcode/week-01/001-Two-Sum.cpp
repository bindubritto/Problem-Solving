#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
    public:
        // Optimal | O(n) space, O(n) time
        vector<int> twoSum(vector<int>nums, int target) {
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

int main() {

    freopen("out.txt", "w", stdout);

    Solution sln;

    vector<int> res = sln.twoSum({2,7,11,15}, 18);

    cout<<res[0]<<"\n";
    cout<<res[1]<<"\n";
}