#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) endl
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

bool sortbysecond(const pair<string, string> &a, const pair<string, string> &b){ 
    if(a.second != b.second){
            return (a.second > b.second); 
    }else{
        return (a.first < b.first);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    getI(cases);
    
    F(c, 0, cases){
        getI(numPpl);
        vector<pair<string, string>> ppl(numPpl);        

        F(i, 0, numPpl){
            string name, classSequence, classWord;
            cin >> name >> classSequence >> classWord;

            name.pop_back();
            ppl[i].first = name;

            istringstream iss(classSequence);
            string word = ppl[i].second = "";
            while(getline(iss, word, '-')){
                if(word == "upper"){
                    ppl[i].second.pb(3+48);
                }else if(word == "middle"){
                    ppl[i].second.pb(2+48);
                }else{
                    ppl[i].second.pb(1+48);
                }
            }

            REV(ppl[i].second);

            F(j, ppl[i].second.size() - 1, 10){
                ppl[i].second.pb(2+48);
            }
        }

        sort(ppl.begin(), ppl.end(), sortbysecond);

        F(i,0,ppl.size()){
            co ppl[i].first endl;
        }

        F(i, 0, 30){
            co "=";
        }
        co "" endl;

        ppl.clear();
    }
    
    return 0;
}