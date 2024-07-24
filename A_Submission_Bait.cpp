#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n + 1, 0);
    for(int i = 0; i < n; i++) {
        int a; cin>>a;
        arr[a]++;
    }
    for(int i = n; i >= 1; i--){
        if(arr[i] & 1) {
            cout<<"YES\n";return;
        }
    }
    cout<<"NO\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}