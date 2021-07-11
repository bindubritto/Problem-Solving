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
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {

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
