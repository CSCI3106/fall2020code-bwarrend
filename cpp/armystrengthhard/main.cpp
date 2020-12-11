#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    vector<int> godzillasTeam;
    vector<int> mechaGodzillasTeam;
    
    int cases; cin >> cases;

    for(int c = 0; c < cases; ++c){
        string empty_line;
        getline(cin, empty_line);

        int a, b; cin >> a >> b;

        for(int i = 0; i < a; ++i){
            ll current; cin >> current;
            godzillasTeam.push_back(current);
        }

        for(int i = 0; i < b; ++i){
            ll current; cin >> current;
            mechaGodzillasTeam.push_back(current);
        }

        
        sort(godzillasTeam.begin(), godzillasTeam.end(), greater<int>());
        sort(mechaGodzillasTeam.begin(), mechaGodzillasTeam.end(), greater<int>());

        if(godzillasTeam.at(0) >= mechaGodzillasTeam.at(0)){
            cout << "Godzilla" << endl;
        }else{
            cout << "MechaGodzilla" << endl;
        }

        godzillasTeam.clear();
        mechaGodzillasTeam.clear();

    }
    return 0;
}
