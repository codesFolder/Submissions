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
        
        string s;
        cin >> s;
        
        string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
        unordered_map<char, int> um;
        
        for(int i=0; i<n; i++){
            char c = s[i];
            um[c]++;
        }
        
        int score = 0;;
        
        for(int i=0; i<26; i++){
            if(um[alp[i]] >= i+1){
                score++;
            }
        }
        
        cout<<score<<endl;
        
    }
    return 0;
}

