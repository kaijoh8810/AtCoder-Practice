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
    bool n = false, s_dir=false,e=false,w=false;
    
    for(char c:s){
        if(c=='N') n=true;
        if(c=='S') s_dir=true;
        if(c=='E') e=true;
        if(c=='W') w=true;
    }
    if((n==s_dir)&&(e==w)){
        cout << "Yes"<<endl;
    }
    else{
        cout <<"No"<<endl;
    }
    return 0;
}