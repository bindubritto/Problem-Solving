class Solution {
public:
    bool startsWith(string &str, int offset, string &source) {
        if (offset + source.size() > str.size()) {
            return false;
        }
        for (int i = offset, j = 0; i < str.size() && j < source.size(); i++, j++) {
            if (str[i] != source[j]) {
                return false;
            }
        }
        return true;
    }

    string findReplaceString(string &input_string, vector<int> &indices, vector<string> &sources, vector<string> &targets) {
        unordered_map<int, int> table;


        for (int i = 0; i < indices.size(); i++) {
            // If a match is found in the original string, record it.
            if (startsWith(input_string, indices[i], sources[i])) {
                table[indices[i]] = i;
            }
        }
        string modified_string = "";
        for (int i = 0; i < input_string.size(); ) {
            if (table.count(i)) {
                // If a replacement was recorded before.
                modified_string += targets[table[i]];
                i += sources[table[i]].size();
            }
            else {
                // If no replacement happened at this index.
                modified_string.push_back(input_string[i]);
                i++;
            }
        }
        return modified_string;
    }
};