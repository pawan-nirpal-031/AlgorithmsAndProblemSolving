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
  int t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
      vector<bool>f(26,0);
      for(char x : s){
          f[x-'a'] =1;
      }
      char c;
      for(int i =0;i<26;i++){
          if(f[i]){
            c = i+'a';
            break;
          }
      }
      cout<<c<<' ';
      bool flg = 0;
      for(char x : s){
          if(x==c and flg==0){
              flg = 1;
              continue;
          }
          cout<<x;
      }
      cout<<'\n';
  }
  return 0;
} 
// If Solved Mark (0/1) here => []