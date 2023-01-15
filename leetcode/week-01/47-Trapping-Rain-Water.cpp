#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
    public:
        // Optimal | O(n) space, O(n) time
        int trap(vector<int>height) {
            int L = 0, R = height.size() - 1;
            int L_MAX = 0, R_MAX = 0, total_area = 0;

            while(L < R) {
                L_MAX = max(L_MAX, height[L]);
                R_MAX = max(R_MAX, height[R]);

                if (height[L] < height[R]) {
                    total_area += L_MAX - height[L];
                    L++;
                }
                else
                {
                    total_area += R_MAX - height[R];
                    R--;
                }
            }

            return total_area;
        }
};

int main() {

    freopen("out.txt", "w", stdout);

    Solution sln;

    int res = sln.trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1});
    cout<<endl;
    cout<<res<<endl;
}