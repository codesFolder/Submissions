// <!-- This code is wriiten by Priyanshu -->
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int x=a[n-1];
    for(int i=n-1; i>0; i--){
        if(a[i]<a[i-1])break;
        else if(a[i]>=a[i-1])x=i;
    }
    sort(a.begin(), a.begin()+x);
    if(x==1)cout<<0;
    else cout<<a[x-1];
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