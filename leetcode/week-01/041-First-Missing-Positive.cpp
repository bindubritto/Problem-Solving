#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

class Solution {
public:
    // Sub optimal | Space - O(n) | Time - O(n) // Existance checking.
    int firstMissingPositive1(vector<int>nums) {        
        unordered_set<int> bucket(nums.begin(), nums.end());
        for(int i = 1; i<= nums.size() + 1; i++){
            if(bucket.count(i) == 0){
                return i;
            }
        }
        return 0;
    }

    // Optimal |  Time - O(n) | Space - O(1) // Index Hashing Technique, value wise index er value k -ve kore disi. Jodi positive pai, means oi index + 1 er value
    // ta exist korto na.
    int firstMissingPositive2(vector<int>& nums) {
        if (find(nums.begin(), nums.end(), 1) == nums.end()) return 1;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = max(1, nums[i]);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;
            if(index < nums.size() && nums[index] > 0) {
                nums[index] = -nums[index];
            }   
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0) return i + 1;
        }
        return nums.size() + 1;
    }

};

int main()
{
    freopen("out.txt", "w", stdout);

    Solution sln;

    vector<int>v{3, 4, -1, 1};

    // int res = sln.firstMissingPositive1(v);
    int res = sln.firstMissingPositive2(v);

    cout<<res<<endl;

    return 0;
}