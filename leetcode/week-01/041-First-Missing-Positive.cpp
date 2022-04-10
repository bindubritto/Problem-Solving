#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

class Solution {
public:
    // Sub optimal | Space - O(n) | Time - O(n) // Index hashing, existance checking.
    int firstMissingPositive1(vector<int>nums) {        
        unordered_set<int> bucket(nums.begin(), nums.end());
        for(int i = 1; i<= nums.size() + 1; i++){
            if(bucket.count(i) == 0){
                return i;
            }
        }
        return 0;
    }

    // Optimal |  Time - O(n) | Space - O(n) // Put each number in its right place.
    int firstMissingPositive2(vector<int>& nums)
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1] != nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1;
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