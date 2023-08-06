// <!-- This code is wriiten by Priyanshu -->
#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int x=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) x=max(x,arr[i]);
    }
    cout<<x<<"\n";
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}