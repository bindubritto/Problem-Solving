#include<iostream>
using namespace std;

class Solution {
public:

    // Sub-optimal => We can create a fresh copy then assign to nums1, but it's not the case, the problem asked for.
    // Optimal - Time - O(m+n) | Space - O(1)
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
        int firstIdx = m - 1, secondIdx = n - 1, finalIdx = m + n - 1;

        while(firstIdx >= 0 && secondIdx >= 0){
            if(nums1[firstIdx] < nums2[secondIdx]){
                nums1[finalIdx] = nums2[secondIdx];
                finalIdx--;
                secondIdx--;
            }
            else {
                nums1[finalIdx] = nums2[firstIdx];
                finalIdx--;
                firstIdx--;
            }
        }
        while (secondIdx >= 0)
        {
            nums1[finalIdx] = nums2[secondIdx];
            finalIdx--;
            secondIdx--;
        }
    }
};