#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int findSumOfDigits(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b;
    cin >> n >> a >> b;

    int total = 0;
    for(int i = 1; i<=n; i++){
        int sum = findSumOfDigits(i);
        if(sum >= a && sum <= b){
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}