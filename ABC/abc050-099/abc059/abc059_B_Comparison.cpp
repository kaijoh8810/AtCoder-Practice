#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A,B;
    cin >> A >> B;

    if(A.size()>B.size()){
        cout << "GREATER" << endl;
    }
    else if(A.size() < B.size()){
        cout <<"LESS" << endl;
    }
    else{
        if(A>B){
            cout << "GREATER" << endl;
        }
        else if(A < B){
            cout << "LESS" << endl;
        }
        else cout << "EQUAL" << endl;
    }
    return 0;
}