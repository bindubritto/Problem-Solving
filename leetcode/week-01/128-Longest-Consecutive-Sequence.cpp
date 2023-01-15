#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

class Solution {
public:

    // Optimal |  Time - O(n) | Space - O(n)
    int longestConsecutiveSequence(vector<int>& nums) {
        unordered_set<int>bucket(nums.begin(), nums.end());
        int longestSeqLen = 0;
        for (auto num : nums) {
            if(bucket.count(num - 1) == 0) {
                int curr = num;
                while(bucket.count(curr)){
                    curr++;
                }
                longestSeqLen = max(longestSeqLen, curr - num);
            }
        }
        return longestSeqLen;
    }
};

int main()
{
    freopen("out.txt", "w", stdout);

    Solution sln;

    vector<int>v{100, 4, 200, 1, 3, 2};

    int res = sln.longestConsecutiveSequence(v);

    cout<<res<<endl;

    return 0;
}