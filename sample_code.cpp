// <!-- This code is wriiten by Priyanshu -->
#include <iostream>
using namespace std;

void solve() {
    int n; cin>>n;
    int a[n];
    int odd=0,even=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0 && i%2!=0)odd++;
        else if(a[i]%2!=0 && i%2==0)even++;
    }
    if(odd!=even)cout<<-1<<endl;
    else cout<<(even+odd)/2<<endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int t, n, a[50], i;
    scanf("%d", &t);
    while (t--){
        int count1 = 0, count2 = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if (a[i] % 2 != i % 2){
                if (i % 2 == 1)
                    count1++;
                if (i % 2 == 0)
                    count2++;
            }
        }
        if (count1 == count2)
            printf("%d\n", count1);
        else
            printf("-1\n");
    }
    return 0;
}
*/