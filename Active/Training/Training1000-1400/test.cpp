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
  int n,m;
  cin>>n>>m; 
  int a[n][m];
  for(int i =0;i<n;i++){
    for(int j =0;j<m;j++) cin>>a[i][j];
  }
  int t;
  cin>>t;
  int i = 0;
  int j = m-1;
  bool found =0;
  while(i>=0 and i<n and j>=0 and j<m){
    if(a[i][j]==t){
      found =1;
      break;
    }else if(t<a[i][j]) j-=1;
    else i+=1;
  }
  Status(found);
  return 0;
} 
// If Solved Mark (0/1) here => []