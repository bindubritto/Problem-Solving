#include<iostream>
#include<vector>

using namespace std;
// Solotion - 01 | Space - O(1), Time - O(n)
class Solution {
    public:
        void moveZeroes(vector<int>&nums) {
          int L = 0, R = 0;

          for(; R <=nums.size(); R++){
            if(nums[R]) {
              swap(nums[L], nums[R]);
              L++;
            }
          }
        }
};

// Soltuion - 02 | Space - O() , Time - O()

class Solution2 {
    public:
        void moveZeroes(vector<int>&nums) {
          int L = 0, R = 0;

          for(; R <=nums.size(); R++){
            if(nums[R]) {
              swap(nums[L], nums[R]);
              L++;
            }
          }
        }
};

int main() {

    freopen("out.txt", "w", stdout);
    Solution sln;
    vector<int> input{0, 1, 0, 3, 12};
    sln.moveZeroes(input);
}