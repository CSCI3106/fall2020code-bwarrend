#include <iostream>
#include <string>

using namespace std;

typedef long long int lli;
//Not large enough

int main(){
    string word; cin >> word;
    int wordLength = word.length();
    lli anagrams = 1;

    for(int i = 1; i <= wordLength; ++i){
        anagrams *= i;
    }

    //divide anagrams by factorial of the occurence of each letter
    cout << anagrams << endl;

    return 0;
}