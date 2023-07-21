//MY template one
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vii vector<int,int>
#define vvi vector<vector<int >>
#define vvii vector<vector<int,int>>
#define vl vector<ll>
#define vll vector<ll,ll>
#define pl pair<ll,ll>
#define ml map<ll>
#define mii map<int,int>
#define mi map<int>
#define mll map<ll,ll>
#define pb push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define TEST_CASE  int tt; cin >> tt; while(tt--)
#define it iterator it;
#define PI 3.1415926535897932384626433832795
#define itloop for(it=vi.begin();it!=vi.end();++it);
#define tc int t;cin>>t;while(t--)
#define SQR(x) ((LL)(x) * (x)) 
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
ll minn(ll a,int b) { if (a<b) return a; return b; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

// ll POWER(LL x, LL y) {
//   LL res = 1;
//   x = x%MOD;
//   if (x == 0) return 0;
//   while (y > 0) {
//     if (y&1) res = mod(res * x);
//     y >>= 1; x = mod(x * x);
//   }
//   return res;
// }
void solve() {
  
}
int partition(int *arr,int low,int high){
int pivot=arr[high];
int idx=low;
for(int i=low;i<high;i++){
if(arr[i]<=pivot){
	swap(arr[idx],arr[i]);
	idx++;
}
}
cout<<"idx is"<<idx<<endl;
cout<<"pivot is"<<pivot<<endl;
cout<<"arr[high] is"<<arr[high]<<endl;
swap(arr[idx],arr[high]);
cout<<"idx1 is"<<idx<<endl;
cout<<"pivot1 is"<<pivot<<endl;
cout<<"arr[high]1 is"<<arr[high]<<endl;
return idx;
}
void quick(int *arr,int low,int high){
	if(low>=high){
		return;
	}
   int mid= partition(arr,low,high);
   quick(arr,low,mid-1);
   quick(arr,mid+1,high);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
int arr[]={7,3,1,2,9,4};
quick(arr,0,5);
for(int i=0;i<6;i++){
	cout<<arr[i]<<" ";
}
}             

