//Solves first two test cases but fails third because wrong answer
//and cannot figure out what the problem is.


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl


struct Team{
    int solved;
    int penalty;

    Team(){
        solved = 0;
        penalty = 0;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n, m; cin >> n >> m;

    vector<Team> teams(n);
    vector<Team> bigger;
    
    ll t, p;
    for(int i = 0; i < m; ++i){
        cin >> t >> p;
        t--;

        teams[t].solved++;
        teams[t].penalty += p;

        if(t!=0){
            if(teams[t].solved > teams[0].solved || teams[t].solved == teams[0].solved && teams[t].penalty < teams[0].penalty){
                bigger.push_back(teams[t]);
            }
        }else{
            for(int j = 0; j < bigger.size(); ++j){
                if(bigger[j].solved <= teams[0].solved || bigger[j].solved == teams[0].solved && bigger[j].penalty >= teams[0].penalty){
                    bigger.erase(bigger.begin() + j);
                    j--;
                }
            }
        }

        cout << bigger.size() + 1 << endl;

    }
    return 0;
}