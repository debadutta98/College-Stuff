// Created by ganesh bhandarkar
#include <bits/stdc++.h>
using namespace std;

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using ll = long long;
typedef pair<int,int> pii;
typedef vector<int> vec;

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define scn2(n,m) scanf("%d%d",&n,&m)
#define scn3(n,m,w) scanf("%d%d%d",&n,&m,&w)
#define scn2ll(n,m) scanf("%lld%lld",&n,&m)
#define atoz(v) v.begin(),v.end()
#define Fill(a,v) memset(a,v,sizeof(a))
#define sz(v) v.size()
#define fi first
#define se second
#define inf 1e9
#define pi acos(-1.0)
#define sqr(x) x*x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define N 100005
bool cmp(pair<int, int>& a, pair<int, int>& b) 
{ 
    return a.second > b.second; 
} 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    map<int,int> freq;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	freq[a[i]]++;
    }
    vector<pair<int, int>> vec;

  	map<int, int> :: iterator it2;
	for (it2=freq.begin(); it2!=freq.end(); it2++){
		vec.push_back(make_pair(it2->first, it2->second));
	}
	sort(vec.begin(),vec.end(),cmp);
    for (int i = 0; i < vec.size(); i++){
    	for(int j=0;j<vec[i].se;j++)cout<<vec[i].fi<<endl;
		//cout << vec[i].first << ": " << vec[i].second << endl;
	}
    
    return 0;
}