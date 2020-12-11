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


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    

    getI(N);

    
    vector<vector<string>> words;
    vector<string> word;
    
    F(i,0,N){
        string inLine; cin >> inLine;
        word.pb(inLine);
        words.pb(word);
    }

    F(i, 0, N){
        getII(x, y);    
        x--; y--;
        
        F(j, 0, words[y].size()){
            words[x].pb(words[y][j]);
        }

        words[y].clear();
    }

    F(i, 0, words.size()){
        F(j, 0, words[j].size()){
            co words[i][j] endl;
        }
    }
    
    
    

    



    
    return 0;
}