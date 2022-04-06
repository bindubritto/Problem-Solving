#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:

    // Suboptimal - O(NlogN) time - O(1) Space
    int majorityElement(vector<int>nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }

    // Optimal - O(N) time - O(1) Space || Using voting algorithm
    int majorityElement2(vector<int>nums) {
        int winner = 0, vote_count = 0;
        for(auto num : nums) {
            if(vote_count == 0) {
                winner = num;
            }
            if(num == winner) {
                vote_count++;
            }
            else {
                vote_count--;
            }
        }
        return winner;
    }
};

int main()
{
    Solution sln;

    vector<int>v{2, 2, 1, 1, 1, 2, 2};

    int subOptimal = sln.majorityElement(v);
    int optimal = sln.majorityElement2(v);

    cout<<subOptimal<<"\n";
    cout<<optimal<<"\n";

    return 0;
}