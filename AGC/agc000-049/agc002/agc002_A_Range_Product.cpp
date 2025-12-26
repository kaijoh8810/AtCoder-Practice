#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;
    
    if(a<=0 && 0<=b){
        cout << "Zero" << endl;
    }
    else if(a > 0){
        cout << "Positive" << endl;
    }
    else{
        int count = b-a+1;
        if(count % 2 == 0){
            cout << "Positive" << endl;
        }
        else {
            cout << "Negative" << endl;
        }
    }
    return 0;
}