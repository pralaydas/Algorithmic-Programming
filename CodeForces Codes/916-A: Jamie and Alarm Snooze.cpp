//https://codeforces.com/contest/916/problem/A

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
using namespace std; 

typedef unsigned long long ul ;
typedef long long ll ;

typedef pair<ll, ll>  pll ;
typedef pair< ll , pll > edge ; 
typedef vector < ll > uwg ;
typedef vector < pll > wg ;

#define MOD 1000000007 
#define vec vector 
#define scu(x) ul x ; scanf("%llu", &x)  
#define scl(x) ll x ; scanf("%lld", &x)  
#define pr(x) printf("%llu", x)  
#define lp(i , n ) for ( ll i = 0 ; i < n ; i++ )
#define rep(i , a , b , n) for(ll i = a; i < b ; i += n )
#define f first 
#define s second
#define pb push_back
#define mp make_pair
#define tc(t) ul t ; cin>>t ; while ( t-- )
#define inarr(n) ll arr[n+10] = {0} ; lp ( i , n) cin>>arr[i] 
#define fast ios::sync_with_stdio(false); cin.tie(0);

ll htm ( ll h , ll m )
{
    return (h*60 + m ); 
}

pll mth ( ll m )
{
    return mp ( m/60 , m%60 ) ; 
}

int main() {
	 
	 scl(x) ; scl(h) ;  scl(m) ; 
	 
	 ll minu = htm ( h , m ) ; 
	 
	 ll count = 0 ; 
	 while(1)
	 {
	     pll p = mth (minu ) ; 
	     
	     if ( p.f % 10 == 7 || p.s % 10 == 7 )
	     {
	         cout<<count ; 
	         return 0 ; 
	     }
	     count++ ; 
	     minu -= x ; 
	     
	     if ( minu < 0 ) minu += (24 * 60) ; 
	 }
	return 0;
}









