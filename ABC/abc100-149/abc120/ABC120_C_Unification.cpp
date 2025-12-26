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

    int count0 = 0;
    int count1 = 0;
    for(char c:s){
        if(c == '0') count0++;
        else count1++;
    }
    cout << 2*min(count0, count1)<<endl;
    return 0;
}