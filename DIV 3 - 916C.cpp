#include <bits/stdc++.h>
using namespace std;

#define sr srand(time(0));
#define ra(l, h) (rand() % ((h)-(l)+1) + (l))
#define sync { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }
#define ll long long int
#define vi vector<int>
#define fn(n) for(int i = 0; i < n; i++)
#define fr(i, a, b) for(int i = a; i <= b; i++)
#define rfr(i, a, b) for(int i = a; i >= b; i--)
#define pb push_back
#define all(a) a.begin(), a.end()
#define tt int test; cin >> test; while(test--)
#define ff first
#define ss second
#define en cout<< "\n"
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl



int main() {
    sync
    tt {
        int n;
        cin >> n;
        
        vi ski(n), mov(n), boa(n);
        
        fn(n) cin>>ski[i];
        fn(n) cin>>mov[i];
        fn(n) cin>>boa[i];
        
        
        sort(all(ski), greater<int>());
        sort(all(mov), greater<int>());
        sort(all(boa), greater<int>());
        
        
        int ma = -1;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                
                if(j == i) continue;
                for(int k=0; k<3; k++){
                    
                    if(k == j || k == i) continue;
                    cout << i <<" " << j << " " << k << endl;
                    ma = max(ma, ski[i] + mov[j] + boa[k]);
                    cout<<ma<<endl;
                    
                }
            }
        }
        
        cout << ma << "\n";
        
        
    }
    return 0;
}

