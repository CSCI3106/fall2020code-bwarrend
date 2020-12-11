#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    string otherPlayersAnimal; cin >> otherPlayersAnimal;
    int animalsAmount; cin >> animalsAmount;
    string *animalBank = new string[animalsAmount];

    for(int i = 0; i < animalsAmount; ++i){
        string currentAnimal; cin >> currentAnimal;
        animalBank[i] = currentAnimal;
    }
    string firstMatch = "?";

    for(int i = 0; i < animalsAmount; ++i){
        if(animalBank[i][0] == otherPlayersAnimal[otherPlayersAnimal.length() -1]){
            if(firstMatch == "?") firstMatch = animalBank[i];

            bool perfect = true;
            for(int j = 0; j < animalsAmount; ++j){
                if(animalBank[i] != animalBank[j] && animalBank[j][0] == animalBank[i][animalBank[i].length() -1]){
                    perfect = false;
                    break;
                } 
            }

            if(perfect){
                cout << animalBank[i] << "!" << endl;
                return 0;
            }
        }
    }

    cout << firstMatch << endl;



    return 0;
}
