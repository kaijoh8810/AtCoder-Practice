#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    cin >> v[0]>>v[1]>>v[2];
    sort(all(v));

    int A = v[0];
    int B = v[1];
    int C = v[2];

    int diff_sum = (C-A)+(C-B);
    if(diff_sum %2==0){
        cout << diff_sum/2<<endl;
    }else{
        cout << (diff_sum+3)/2<<endl;
    }
    return 0;
}