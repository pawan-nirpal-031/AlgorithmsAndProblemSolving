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

int main(){
  FastIO;
  string s;
  cin>>s;
  int n = s.length();
  if(s[0]=='0'){
      int i=0;
      while(s[i]=='0'){
          s[i]='-';
          i+=1;
      }
  }else if(s[n-1]=='0'){
      int i = n-1;
      while(s[i]=='0'){
          s[i] = '-';
          i-=1;
      }
  }
  string sn = "";
  for(char c : s) if(c!='-') sn+=c;
  n = sn.length();
  string rev ="";
  for(int i = n-1;i>=0;i--) rev+=sn[i];
  Status(rev==sn);
  return 0;
} 
// If Solved Mark (0/1) here => []