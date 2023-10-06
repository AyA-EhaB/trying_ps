#include <bits/stdc++.h>
#define pb push_back
#define ll  long long
#define AYA ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(var) var.begin(), var.end()
#define allr(var) var.rbegin(), var.rend()
#define F first
#define S second
#define e '\n'
using namespace std;
using pi = pair<int, int>;
using vi = vector<int>;
using vpi = vector<pair<int, int>>;
using vvi = vector<vector<int>>;
int main() {
    AYA;
    string s; cin >> s;
    multiset<char>ss;
    for (int i = 0 ; i < s.size();i++){
        if (isdigit(s[i]))ss.insert(s[i]);
    }
    for (auto i = ss.begin();i!=ss.end();i++){
        cout << *i;
        if (i!=--ss.end())cout << '+';//eplain why we use --ss.end() instead of ss.end()-1 and why we did not use *

    }

}
