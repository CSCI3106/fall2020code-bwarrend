#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    vector<int> scoreKeeper;

    for(int i = 1; i <= 13; ++i){
        scoreKeeper.assign(15, 0);
    }
    
    for (int i = 0; i < 5; ++i){
        string x;
        cin >> x;
        x = x[0];


        if(x.compare("A") == 0){
            scoreKeeper[1] ++;
        }else if(x.compare("J") == 0){
            scoreKeeper[11]++;
        }else if(x.compare("Q") == 0){
            scoreKeeper[12]++;
        }else if(x.compare("K") == 0){
            scoreKeeper[13]++;
        }else if(x.compare("T") == 0){
            scoreKeeper[10]++;
        }else{
            stringstream yss(x);
            int y;
            yss >> y;
            scoreKeeper[y]++;
        }
    }
        

    int current = 0;
    for (int i = 1; i <= 13; ++i){
        if (scoreKeeper[i] >= current){
            current = scoreKeeper[i];
        }
    }

    cout << current << endl;
    
    


    return 0;
}



