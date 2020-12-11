#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl
//Shorthand
#define GCD __gcd
#define BS binary_search
#define co cout<<
#define endl <<"\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define getI(a) int a; cin >> a
#define getII(a, b) int a,b; cin>>a>>b
#define getIII(a,b,c) int a,b,c; cin>>a>>b>>c
#define F(i,L,R) for (int i = L; i < R; ++i)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define RF(i,n) for (int i = (n) - 1; i >= 0; --i) 
//Vectors/Strings
#define V_ALL(vec) (vec).begin(), (vec).end()
#define SORT(vec) sort(vec.begin(),vec.end())
#define REV(vec) reverse(v.begin(),vec.end())
#define ERASE(vec, index) (vec).erase((vec).begin() + index)
#define SUM(vec) accumulate(vec.begin(),vec.end(),0) 
#define MAXV(vec) *max_element(vec.begin(),vec.end()) 
#define MINV(vec) *min_element(vec.begin(),vec.end())
#define V_UNIQUE(vec) vec.erase(unique(vec.begin(),vec.end()),vec.end())
#define A_UNIQUE(array, n_elements) unique(array,array+n_elements)-array
#define INSERT(index, str) str.insert(index,str) 
#define COUNT(str,ch) count(str.begin(),str.end(),ch)
#define S_REPLACE(str,start,count,new_str) str.replace(start,count,new_str)
//Constants
#define PI 3.1415926535897932384626
#define INF 1001001001


void SieveOfSundaram(int* n, /*vi *primes*/ int* primes_a) { 
    int nNew = (*n-1)/2; 
    bool marked[nNew + 1];
    primes_a[nNew +1];
  
    memset(marked, false, sizeof(marked)); 
  
    for (int i=1; i<=nNew; i++) 
        for (int j=i; (i + j + 2*i*j) <= nNew; j++) 
            marked[i + j + 2*i*j] = true; 

    string dfd = "dfff";
    // if (n > 2) primes->pb(2);


    for (int i=1; i<=nNew; i++){
        if (marked[i] == false){
            // primes->pb(2*i+1);
            primes_a[i] = 2*i+1;
        }
    }
} 


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    getII(n, q);
    int p = n;
    // vi primes;
    int primes_a[((n-1)/2) +1];
    SieveOfSundaram(&p, primes_a);

    // co primes.size() endl;
    co n endl;

    F(i, 0, q){
        getI(query);

        co BS(primes_a, primes_a + (n-1)/2,query) endl;
    }
    

    
    return 0;
}