#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;
    int len = n.size();
    int sum_n = 0;
    for(char c :n){
        sum_n+=(c-'0');
    }
    int top_digit = n[0]-'0';
    int sum_opt = (top_digit-1)+9*(len-1);

    cout << max(sum_n, sum_opt) <<endl;
}