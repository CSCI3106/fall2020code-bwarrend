#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    int grid; cin >> grid;

    vector<pair<int,int>> spies;
    vector<pair<int,int>> safeHouses;

    for(int i = 0; i < grid; ++i){
        string thisLine; cin >> thisLine;        
        for(int j = 0; j < thisLine.length(); ++j){
            if(thisLine[j] == 'S'){
                spies.push_back({i,j});
            }else if(thisLine[j] == 'H'){
                safeHouses.push_back({i,j});
            }
        }
    }

    int maxDistance = 0;

    for(int i = 0; i < spies.size(); ++i){
        int shortestDistance = 10001;
        for(int j = 0; j < safeHouses.size(); ++j){
            int xDist = abs(spies[i].first - safeHouses[j].first);
            int yDist = abs(spies[i].second - safeHouses[j].second);
            int currentDistance = xDist + yDist;

            if(currentDistance < shortestDistance) shortestDistance = currentDistance;
        }

        if(shortestDistance > maxDistance) maxDistance = shortestDistance;
    }

    cout << maxDistance << endl;
    
    return 0;
}