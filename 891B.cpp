// <!-- This code is wriiten by Priyanshu -->
#include <iostream>
#include <vector>
using namespace std;

#define int long long

void solve() {
    string x;
    cin>>x;
    vector <int> n;
    for (int i=x.size()-1; i>=0; i--){
        int y = x[i] - '0'; // Convert char to int
        n.push_back(y);
    }
    int l=n.size(), c=-1;
    for(int i=0;i<l;i++){
        if(n[i]>=5){
            n[i+1]++;
            c=i;
        }
    }
    for(int j=c; j>=0; j--)n[j]=0;
    if(n[l-1]==0)cout<<1;
    for(int i=l-1;i>=0;i--){
        cout<<n[i];
    }
    cout<<"\n";
}

signed main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		int f=1,l=x.size(),p=l,f2=1;
		for(int i=l-1;i>=0;i--) if(x[i]=='0') f2=0;
		for(int i=l-2;i>=-1;i--){
			if(x[i+1]>='5'){
				while(x[i]=='9'&&i>=0) i--;
				if(i>=0) x[i]++;
				f=0;
				p=i+1;
			}
		}
		for(int i=p;i<l;i++) x[i]='0';
		if(p<=0) x='1'+x;
		cout<<x<<endl;
	}
}

*/

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int j=-1;
        int carry=0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]>='5'){
                j=i;
                carry=1;
            }else if(s[i]+carry>='5'){
                j=i;
                carry=1;
            }else{
                carry=0;
            }
        }
        if(j==-1){
            cout<<s<<"\n";
            continue;
        }
        if(j==0){
            cout<<1;
            for(int i=0;i<s.size();++i){
                cout<<0;
            }
            cout<<"\n";
            continue;
        }
        for(int i=0;i<j-1;++i){
            cout<<s[i];
        }
        cout<<char(s[j-1]+1);
        for(int i=j;i<s.size();++i){
            cout<<0;
        }
        cout<<"\n";
    }
    return 0;
}
*/