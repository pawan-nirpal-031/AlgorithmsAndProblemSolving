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
#define GoogleOutput(i,x) cout<<"Case #"<<i<<": "<<x<<'\n'
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define BoolAnsCall(b) (cout<<(b?"Yes\n":"No\n"));
#define Print(x) cout<<x
#define Input(x) cin>>x


int main(){
  FastIO;
  ll n;
  cin>>n;
  if(n<=3 and n>1){
    cout<<"NO SOLUTION";
    return 0;
  }
  vector<ll>odds;
  for(int i = 1;i<=n;i+=1){
    if(i&1) odds.emplace_back(i);
    else cout<<i<<' ';
  }
  for(ll x : odds) cout<<x<<' ';
  return 0;
} 