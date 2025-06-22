#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long int 
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vll vector<long long int> 
// #define ONLINE_JUDGE 1 
 
int main() { 
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin); 
    freopen("out.txt", "w", stdout); 
    #endif 
    std::ios::sync_with_stdio(false); 
    
    string s;
    cin >> s;

    ll p=1, c=0, ans=1;

    for( int i = 1; i < s.size(); i++ ) {
        c = s[i]==s[i-1] ? p+1 : 1;
        ans = max( ans, c );
        p = c;
    }

    cout << ans << '\n';
    
    return 0; 
} 
