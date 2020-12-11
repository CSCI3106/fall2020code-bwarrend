#include <iostream>
#include <vector>

using namespace std;


int main() {

    int dataSets = 0;
    cin >> dataSets;

    for(int k = 0; k < dataSets; ++k){
        
        int cases;
        cin >> cases;

        vector<vector<string>> bigVec;

        for(int i = 0; i < cases; ++i){
            bool found = false;
            string currentCity;
            cin >> currentCity;

            for(int j = 0; j < bigVec.size(); ++j){
                if(currentCity.compare(bigVec[j][0]) == 0){
                    bigVec[j].push_back(currentCity);
                    found = true;
                }
            }

            if(!found){
                vector<string> intoit;
                intoit.push_back(currentCity);
                bigVec.push_back(intoit);
            }
        }

        cout << bigVec.size() << endl;
    }   


    return 0;
}