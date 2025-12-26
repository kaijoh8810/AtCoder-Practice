#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<char> st;
    for(char c : s){
        st.insert(c);
    }
    if(st.size()==s.size()) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}