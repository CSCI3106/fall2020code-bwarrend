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
#define FE(i,L,R) for (int i = L; i <= R; ++i)
#define RF(i,n) for (int i = (n) - 1; i >= 0; --i) 
//Vectors/Strings
#define SORT(vec) sort(vec.begin(),vec.end())
#define REV(vec) reverse(vec.begin(),vec.end())
#define ERASE(vec, index) (vec).erase((vec).begin() + index)
#define SUM(vec) accumulate(vec.begin(),vec.end(),0) 
#define MAXV(vec) *max_element(vec.begin(),vec.end()) 
#define MINV(vec) *min_element(vec.begin(),vec.end())
#define V_UNIQUE(vec) vec.erase(unique(vec.begin(),vec.end()),vec.end())
#define A_UNIQUE(array, n_elements) unique(array,array+n_elements)-array
#define INSERT(index, str) str.insert(index,str) 
#define COUNT(str,ch) count(str.begin(),str.end(),ch)
#define S_REPLACE(str,start,count,new_str) str.replace(start,count,new_str)
#define C2I(ch) ch -= 48
//Constants
#define PI 3.1415926535897932384626
#define INF 1001001001

vector<string> makeArray(string line){
    vector<string> retVec;
    istringstream ss(line);

    string word;

    while(ss >> word){
        retVec.pb(word);
    }

    retVec[0].pop_back();

    return retVec;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    getI(num);
    vector<vector<string>> bigList;
    string nothing; getline(cin, nothing);

    F(i, 0, num){
        string line; getline(cin, line);
        bigList.pb(makeArray(line));
    }

    bool* used = new bool[num];
    memset(used, false, num);

    string buzz; cin >> buzz;

    queue<string> q;
    q.push(buzz);

    while(q.size() > 0){
        buzz = q.front();
        F(i,0,num){
            if(bigList[i][0] == buzz){
                used[i] = true;
            }

            if(!used[i]){
                F(j,1,bigList[i].size()){
                    if(bigList[i][j] == buzz){
                        q.push(bigList[i][j]);
                    }
                }
            }
        }
    }
        
    return 0;

}