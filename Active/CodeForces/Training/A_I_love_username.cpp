// Problem Link : 
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
#define Mod 1000000007
#define Infinity (ll)1e18
#define Append(a) push_back(a)
#define Pair(a,b) make_pair(a,b)
#define Clear(a) for(ll &x : a){x=0;}
#define Point(x) std::fixed<<setprecision(15)<<x
#define SetBits(x) __builtin_popcount(x);
#define DebugCase(i,x) cout<<"Case #"<<i<<": "<<x<<'\n'
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Status(b) (cout<<(b?"YES\n":"NO\n"));
#define Print(x) cout<<x
#define Input(x) cin>>x


/*
Problem Statement : 



*/


/*
Author's solution : 



*/





int main(){
  FastIO;
  ll n;
  cin>>n;
  ll a[n];
  for(ll &x : a) cin>>x;
  vector<pair<ll,ll>>prefix(n,{10000,0});
  prefix[0] = {a[0],a[0]};
  int c =0;
  for(int i =1;i<n;i++){
      if(a[i]<prefix[i-1].first) c+=1;
      if(a[i]>prefix[i-1].second) c+=1;
      prefix[i].first = min(prefix[i-1].first,a[i]);
      prefix[i].second = max(prefix[i-1].second,a[i]);
  }
  cout<<c;
  return 0;
} 
// If Solved Mark (0/1) here => []