#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d,n;
    cin >> d>>n;
    if(n == 100) n = 101;
    int power = 1;
    rep(i,d){
        power*=100;
    }
    cout << power*n<<endl;
    return 0;
}