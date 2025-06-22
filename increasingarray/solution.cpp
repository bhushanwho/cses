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
    
    int n;
    cin >> n;

    ll maxe=0, ans=0;
    for( int i = 0 ; i < n; i++ ) {
        int num; cin >> num;
        if( num > maxe ) maxe = num;
        else {
            ans += maxe-num;
        }
    }

    cout << ans << '\n';
 
    return 0; 
} 
