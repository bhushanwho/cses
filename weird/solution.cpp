#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long int 
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vll vector<long long int> 
// #define ONLINE_JUDGE 1 

// https://cses.fi/problemset/task/1068/
 
int main() { 
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin); 
    freopen("out.txt", "w", stdout); 
    #endif 
    std::ios::sync_with_stdio(false); 
    
    ll n;
    cin >> n;

    unordered_set<ll> us;

    while( us.find(n) == us.end() ) {
        us.insert(n);
        cout << n << " ";
        // isn't 1 an odd number through? idk, weird test cases
        // "weird" algorithm checks out
        if( n == 1) break;
        n = n%2 ? 3*n+1 : n/2;
    }

    cout << '\n';
 
    return 0; 
} 
