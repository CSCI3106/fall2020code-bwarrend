#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int minn;

    vector<int> godzillasTeam;
    vector<int> mechaGodzillasTeam;
    
    int cases; cin >> cases;

    for(int c = 0; c < cases; ++c){
        string empty_line;
        getline(cin, empty_line);

        int a, b; cin >> a >> b;

        for(int i = 0; i < a; ++i){
            int current; cin >> current;
            godzillasTeam.push_back(current);
        }

        for(int i = 0; i < b; ++i){
            int current; cin >> current;
            mechaGodzillasTeam.push_back(current);
        }

        sort(godzillasTeam.begin(), godzillasTeam.end());
        sort(mechaGodzillasTeam.begin(), mechaGodzillasTeam.end());

        while(godzillasTeam.size() > 0 && mechaGodzillasTeam.size() > 0){
            minn = min(godzillasTeam.at(0), mechaGodzillasTeam.at(0));
            for(int i = 0; i < mechaGodzillasTeam.size(); ++i){
                if(mechaGodzillasTeam.at(i) == minn){
                    mechaGodzillasTeam.erase(mechaGodzillasTeam.begin() + i);
                }
            }

            for(int i = 0; i < godzillasTeam.size(); ++i){
                if(godzillasTeam.at(i) == minn){
                    godzillasTeam.erase(godzillasTeam.begin() + i);
                }
            }
        }

        for(int i = 0; i < godzillasTeam.size(); ++i){
            if(godzillasTeam.at(i) == minn){
                godzillasTeam.erase(godzillasTeam.begin() + i);
            }
        }

        if(godzillasTeam.size() == 0 && mechaGodzillasTeam.size() == 0){
            cout << "uncertain" << endl;
            continue;
        }

        if(mechaGodzillasTeam.size() == 0){
            cout << "Godzilla" << endl;
        }else{
            cout << "MechaGodzilla" << endl;
        }
    }
    return 0;
}