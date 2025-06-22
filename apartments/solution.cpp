#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long int 
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vll vector<long long int> 
#define pq priority_queue<ll>
#define minpq priority_queue<ll, vector<ll>, greater<ll>>

// #define ONLINE_JUDGE 1 \

// https://cses.fi/problemset/task/1084
 
int main() { 
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin); 
    freopen("out.txt", "w", stdout); 
    #endif 
    std::ios::sync_with_stdio(false); 

    int n, m, k;
    cin >> n >> m >> k;

    minpq A, B;
    for( int i = 0; i < n; i++ ) {
        ll a; cin >> a;
        A.push(a);
    }   

    for( int i = 0; i < m; i++ ) {
        ll a; cin >> a;
        B.push(a);
    }

    int ans = 0;


    while( !A.empty() && !B.empty() ) {

        ll a = A.top();
        ll b = B.top();

        if( abs(a-b) <= k ) {
            ans++;
            A.pop(); B.pop();
        }
        else if( a > b ) B.pop();
        else if( a < b ) A.pop();

    }
    
    cout << ans << '\n';
 
    return 0; 
} 
