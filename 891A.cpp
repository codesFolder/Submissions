// <!-- This code is wriiten by Priyanshu -->
#include <iostream>
using namespace std;

void solve() {
    int n; cin>>n;
    int a[n];
    int odd=0, even=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0)odd++;
        else even++;
    }
    if(odd%2!=0)cout<<"NO";
    else cout<<"YES";
    cout<<"\n";
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}