#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
#define Mod 1000000007
#define Pair(a,b) make_pair(a,b)
#define Point(x) std::fixed<<setprecision(15)<<x
#define SetBits(x) __builtin_popcount(x);
#define Case(i,x) cout<<"Case #"<<i<<": "<<x<<'\n'
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Status(b) (cout<<(b?"YES\n":"NO\n"));

// https://www.codechef.com/submit/NEWPIECE

int main(){
  FastIO;
  int t;
  cin>>t; 
  while(t--){
    int a,b,p,q; 
    cin>>a>>b>>p>>q; 
    if(a==p and b==q) cout<<0;
    else if(((a+b)%2 and (p+q)%2==0) or ((a+b)%2==0 and (p+q)%2)){
      cout<<1;
    }else cout<<2; 
    cout<<'\n';
  }
  
  return 0;
} 
