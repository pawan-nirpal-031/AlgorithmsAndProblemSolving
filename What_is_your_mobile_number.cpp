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
#define BoolAnsCall(b) (cout<<(b?"YES\n":"NO\n"));

class UtilityFunctions{
  public:
    ull Gcd(ull a,ull b){
        return (a%b==0?b:Gcd(b,a%b));
    }

    ll Lcm(ll a,ll b){
        return (a*b)/Gcd(a,b);
    }

    ll Pow(ll a,ll n){
      if(n==1) return a;
      ll half = Pow(a,n>>1);
      return (n&1?half*half*a:half*half);
    }
    ll ModuloExpo(ll a,ll n,ll m){
      if(n==1) return a%m;
      ll half = ModuloExpo(a,n>>1,m)%m;
      if(n&1){
        return (((half*half)%m)*(a%m))%m;
      }else{
        return (half*half)%m;
      }
    }
    
    bool IsSubsequnece(string s,string t){
      int p1,p2;
      for(p2 =0,p1=0;p2<t.length() and p1<s.length();){
        if(t[p2]==s[p1]){
          p2+=1;
          p1+=1;
        }else{
          p1+=1;
        }
      }
      return (p2==t.length());
    }
};





int main(){
  FastIO;
  string s,t;
  cin>>s>>t;
  cout<<UtilityFunctions().IsSubsequnece(s,t);
  return 0;
} 