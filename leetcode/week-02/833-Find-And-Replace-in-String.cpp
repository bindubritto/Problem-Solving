class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        string result = "";
        vector<int>detection(s.size(), 0);

        int m = 0;
        // Creating detection array
        for (int i = 0; i < indices.size(); i++){
            int srcLen = sources[i].size();
            if(s.substr(indices[i], srcLen) == sources[i]) {
                detection[indices[i]] = 1;
            }
        }

        int k = 0;
        for (int i = 0; i < s.size();){
            int index;
            if (detection[i]) {
                // Replace to that specific position
                auto it = std::find(indices.begin(), indices.end(), i);
                index = (it - indices.begin());
                result += targets[index];
                i += sources[index].size();
            } else {
                result += s[i];
                i++;
            }
        }
        return result;
    }
};