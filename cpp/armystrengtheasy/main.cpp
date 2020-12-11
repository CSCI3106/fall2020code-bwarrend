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

        
        sort(godzillasTeam.begin(), godzillasTeam.end());
        sort(mechaGodzillasTeam.begin(), mechaGodzillasTeam.end());

        //The war is over if in one of the armies all monsters are dead. 
        while(godzillasTeam.size() > 0 && mechaGodzillasTeam.size() > 0){
            /*
            If there are several weakest monsters, but all of them in the same army, 
            one of them is killed at random. If both armies have at least one of the weakest 
            monsters, a random weakest monster of MechaGodzilla’s army is killed.
            */
            if(mechaGodzillasTeam.at(0) <= godzillasTeam.at(0)){
                mechaGodzillasTeam.erase(mechaGodzillasTeam.begin());
                if(mechaGodzillasTeam.size() == 0){
                     cout << "Godzilla" << endl;
                    break;
                }
            }else{
                godzillasTeam.erase(godzillasTeam.begin());
                if(godzillasTeam.size() == 0) {
                    cout << "MechaGodzilla" << endl;
                    break;
                }
            }            
        }

        godzillasTeam.clear();
        mechaGodzillasTeam.clear();

    }
    return 0;
}
