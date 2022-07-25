#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<map>

using namespace std;

std::vector<long long>prefixHash;
int base = 26;

void calculatePrefixHash(string &str1) {
    prefixHash.resize(str1.size() + 1, 0);
    prefixHash[0] = str1[0]; // char converted to ascii value.
    for(int i = 1; i < str1.size(); i++) {
        prefixHash[i] = prefixHash[i - 1] * base;
        prefixHash[i] = prefixHash[i] + str1[i];
    }
}

long long generateHash(string &str){
    long long h = 0;
    string temp = "";
    for( auto s : str) {
        h = ( h * base ) + s;
        temp += s;
        cout<<temp<<" "<<h<<"\n";
    }

    return h;
}




int main()
{
    // freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    string str1 = "abcde";

    // cout<<s1[0]<<"\n";

    // vector<long long>hash;

    // hash.resize(6, 0);

    // hash[0] = s1[0];

    // cout<<typeid(hash[0]).name()<<endl;

    // cout<<hash[0]<<endl;

    // for(int i = 0; i< 255; i++){
    //     // int b = 'a' + i;
    //     // cout<< (char)i << " " << i<<"\n";
    // }

    calculatePrefixHash(str1);
    string str = "bc";
    generateHash(str);

    for(int i = 0; i < str1.size(); i++){
        // int b = 'a' + i;
        // cout<< (char)i << " " << i<<"\n";
        // cout<<str1[i]<< " "<< prefixHash[i] << "\n";
    }

    // Vector

    // vector<int> v = {5, 4, 3, 2, 1};
    // sort(v.begin(), v.end());

    // v.push_back(10);
    // v.pop_back();
    // v.erase();

    // for(int i=0; i < v.size(); i++)
    // {
    //     cout<<v[i]<< " ";
    // }


    // Pair

    // pair<int, int> p(1, 5);
    // pair<int, int> p = {1, 9};
    // cout<<p.first << " " << p.second<<endl;

    // pair<int, string> q;
    // q = make_pair(100, "Zannat");

    // pair q = make_pair(90, "Zannat");
    // cout<<q.first << " " << q.second<<endl;

    // set<int>s;

    // s.insert(10);
    // cout << s.count(10) << endl;
    // s.erase(10);
    // cout << s.count(10) << endl;

    // map<int, int> freq;

    // freq[5];
    // freq[4]++;
    // freq[3];
    // freq[2];
    // freq[1]++;

    // auto it = freq.begin();
    // pair<int, int> p = *it;

    // cout<<p.first << " " << p.second<< endl;

    // for(; it != freq.end(); it++){
    //     // cout<<it<<endl;
    //     // cout<<it->first << " " << it->second << endl;
    // }

    // for( pair<int, int> x:freq) {
    //     cout<<x.first << " " << x.second<<endl;
    // }
    
    return 0;
}