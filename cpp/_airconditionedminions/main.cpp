//Algorithm #1
//struct minions with min and max temps
//loop each number from 1 to 2N to see number with largest amount of minions
//  that can be satisfied by one number.  Remove them from array.  Repeat until
//  no minions remain.

//Algorithm 2
//Find minion with smallest range.
//Lump together all other minions that fall within that range.
//Remove from array.  Repeat until no minions remain.

//Algorithm 3??
//number of distint ranges? No.  

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
#define V_ALL(vec) vec.begin(), vec.end()
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


struct minion{
    int low;
    int high;

    minion(int _low, int _high){
        low = _low;
        high = _high;
    }

    
};

int sort_by_high_range(const minion &a, const minion &b) { 
    return (a.high - b.high); 
} 


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    

    getI(pop);

    vector<minion> minions;

    F(i, 0, pop){
        getII(low, high);

        minions.pb(minion{low, high});
    }

    int count = 1;

    sort(V_ALL(minions), sort_by_high_range);

    F(i, 0, pop){
        co i << " " << minions[i].low << " " << minions[i].high endl;
    }
    



    
    return 0;
}