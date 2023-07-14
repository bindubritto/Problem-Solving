#include<iostream>
#include<vector>

using namespace std;

vector<long long> prefixHash, power;
long long MOD = 1000000007;
int base = 26;

void preprocess(string &str){
    prefixHash[0] = str[0]; // char to ascii conversion.
    for(int i = 1; i < str.size(); i++){
        prefixHash[i] = (prefixHash[i - 1] * base) % MOD;
        prefixHash[i] += str[i];
        power[i] = (power[i - 1] * base) % MOD;
    }
}

long long getRangeHash(int L, int R){
    long long X1 = prefixHash[R];
    long long X2 = L == 0 ? 0 : (prefixHash[L - 1] * power[R - L + 1]) % MOD;
    return (X1 - X2 + MOD) % MOD;
}

long long generateHash(string &str){
    long long h = 0;
    for(auto s : str){
        h = (h * base) + s;
        h %= MOD; 
    }
    return h;
}

int strStr(string haystack, string needle) {
    int la = haystack.size();
    int lb = needle.size();

    prefixHash.resize(la + 1, 0);
    power.resize(la + 1, 1);
    preprocess(haystack);
    long long nH = generateHash(needle);

    for(int i = 0; i <= (la - lb); i++){
        long long rangeHash = getRangeHash(i, i + lb - 1);
        if(rangeHash == nH){
            return i;
        }
    }
    return -1;
}

int main() {
    // freopen("out.txt", "w", stdout);

    string haystack = "abcde";
    string needle = "bc";

    int res = strStr(haystack, needle);

    cout<< "res = " << res << "\n";

    return 0;
}