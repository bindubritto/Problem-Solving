#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<map>
using namespace std;

class Solution {
public:
    static const long long MOD = 202206214218227LL;
    long long getHash(string &str) {
        long long h = 1;
        int offset = 257;
        for (auto c : str) {
            h = (h * ((c - 'a') + offset)) % MOD;
        }
        return h;
    }

    vector< vector<string> > groupAnagrams(vector<string>& strs) {
        vector< vector<string> > anagrams;
        unordered_map<long long, vector<string> > buckets;

        for(auto str : strs) {
          buckets[getHash(str)].push_back(str);
        }

        for(auto bucket : buckets) {
          anagrams.push_back(bucket.second);
        }
        
        return anagrams;
    }
    
};

int main() {

    vector<string> a = {"eat","tea","tan","ate","nat","bat"};
    Solution obj;
    vector< vector<string> > res = obj.groupAnagrams(a);

    return 0;
}