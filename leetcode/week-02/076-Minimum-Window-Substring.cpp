class Solution {
public:
    string minWindow(string s, string t) {

        vector<int>freqT(256, 0);
        int L = 0, R = 0, minLen = INT_MAX / 2, startIdx = -1;

        for(auto ch : t) {
            freqT[ch]++;
        }

        int remCharCount = t.size();

        while( R < s.size()) {
            // Business logic
            if(freqT[s[R]] > 0) {
                remCharCount--;
            }

            // Common
            freqT[s[R]]--;
            R++;
            
            while(remCharCount == 0) {
                // To track info
                if (minLen > (R - L)) {
                    minLen = R - L;
                    startIdx = L;
                }
                // Business logic
                if(freqT[s[L]] == 0){
                    remCharCount++;
                }

                // Common part
                freqT[s[L]]++;
                L++;
            }
        }

        return startIdx == -1 ? "" : s.substr(startIdx, minLen);
        
    }
};