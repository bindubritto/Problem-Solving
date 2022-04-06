#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<map>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

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

    map<int, int> freq;

    freq[5];
    freq[4]++;
    freq[3];
    freq[2];
    freq[1]++;

    // auto it = freq.begin();
    // pair<int, int> p = *it;

    // cout<<p.first << " " << p.second<< endl;

    // for(; it != freq.end(); it++){
    //     // cout<<it<<endl;
    //     // cout<<it->first << " " << it->second << endl;
    // }

    for( pair<int, int> x:freq) {
        cout<<x.first << " " << x.second<<endl;
    }
    
    return 0;
}