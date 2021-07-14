# Two Number Summation

Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum. If any two numbers in the input array sum up to the target sum, the function should return them in an array, in sorted order. If no two numbers sum up to the target sum, then the function will return an empty array. Assume that there will be one pair of numbers summing up to the target sum.

## Input

```sh
[3, 5, -4, 8, 11, 1, -1, 6], 10
```

## Output

```sh
[-1, 11]
```

## Solution 01

Using O(n^2) time and O(1) space since no auxiliary structures are created.
Just using two for loops to check the sum.

## Code

```cpp
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	vector<int>res;
	int size = array.size()-1;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<array.size();j++){
			if((array[i] + array[j])==targetSum){
				if(array[i]<array[j]){
					res.push_back(array[i]);
					res.push_back(array[j]);
				}
				else{
					res.push_back(array[j]);
					res.push_back(array[i]);
				}
			}
		}
	}
	return res;
}
```

## Another Solution (More intuitive)

```cpp
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {

	for(int i=0;i<array.size()-1;i++){
		int firstNum = array[i];
		for(int j=i+1;j<array.size();j++){
			int secondNum = array[j];
			if((firstNum + secondNum) == targetSum){
				return firstNum > secondNum ? vector<int>{secondNum, firstNum} : vector<int>{firstNum, secondNum};
			}
		}
	}
	return {};
}
```

## Solution 02

This solution using hash tables. Here, X + Y = Sum, So, Y = Sum - X.
So, if we try to find Y in our hash table, we will find our solution. So, the approach is, if Y is in the hash_table? If no, then push X in the hash_table
and mark it as true. And if yes, then we'll just return X & Y. So, here the lookup is O(1) in hash_table, and O(n) for only traversing the array.

So, total time complexity is O(n), also O(n) for space complexity as we're using hash_tables.

```cpp

#include<vector>
#include<unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int>array, int targetSum){
	unordered_set<int> nums;
	for (int num : array) {
		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end()){
			return vector<int>{potentialMatch, num};
		} else {
			nums.insert(num);
		}
	}
	return {};
}
```

## Solution - 03

But we can do it in a very efficient and intuitive way. We'll sort the array first, then we'll use two pointer.
One from left side, one from right. If sum of these pointer is greater than the targetSum, then we'll decrease right pointer and
if lesser than increase left pointer.

So, O(nlogn) for sorting & O(n) for traverse. So, O(nlogn) will be the time complexity. And there is no additional space here. So, O(1) is
space complexity.

```cpp
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoNumberSum(vector<int>array, int targetSum){
	sort(array.begin(), array.end());
	int leftIdx = 0;
	int rightIdx = array.size() - 1;

	while (leftIdx < rightIdx) {
		int potentialSum = array[leftIdx] + array[rightIdx];
		if(potentialSum == targetSum){
			return vector<int>{parray[leftIdx],  array[rightIdx]};
		} else if( potentialSum > targetSum) {
			rightIdx--;
		} else {
			leftIdx++;
		}
	}
	return {};
}
```

That's all for this problem.
