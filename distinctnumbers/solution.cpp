#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long int 
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vll vector<long long int> 
// #define ONLINE_JUDGE 1 

// https://cses.fi/problemset/task/1621

int main() { 
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin); 
    freopen("out.txt", "w", stdout); 
    #endif 
    std::ios::sync_with_stdio(false); 

    int n;
    cin >> n;

    set<int> s;
    for( int i = 0; i < n; i++ ) {
        int a; cin >> a;
        s.insert(a);
    }

    cout << s.size() << '\n';
 
 
    return 0; 
} 
