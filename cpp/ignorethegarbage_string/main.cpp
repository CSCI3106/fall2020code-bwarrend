#include <iostream>
#include <string>

using namespace std;

// bool isValid(int n){
//     string nS = to_string(n);
//     if(nS.find("3") != string::npos || nS.find("4") != string::npos || nS.find("7") != string::npos) return false;
//     else return true;
// }

// string reverse(string s){

//     for(int i = 0; i < s.length()/2; ++i){
//          swap(s[i], s[s.length()-i -1]);
//     }

//     return s;
// }


// string replaceAll(string s, const string &old, const string &neww){
//     int starti;
//     while((starti = s.find(old, starti)) != string::npos){
//         s.replace(starti, old.length(), neww);
//         starti += neww.length();
//     }
//     return s;
// }

// string reverseAndUpsideDown(int n){
//     string nS = to_string(n);
//     nS = replaceAll(nS, "6", "-");
//     nS = replaceAll(nS, "9", "6");
//     nS = replaceAll(nS, "-", "9");

//     nS = reverse(nS);
    
//     return nS;
// }


int main(){
    int num;
    string numS;

    while(cin >> num){
        int count = 0;

        for(int i = 1; i <= num; ++i){
            count++;
            numS = to_string(count);

            if(numS.find("3") != string::npos || numS.find("4") != string::npos || numS.find("7") != string::npos){
                i--;
            }else{
                for(int j = 0; j < numS.length()/2; ++j){
                    string a = "" + numS[j];
                    string b = "" + numS[numS.length() - j - 1];
                    if(a.compare("6") == 0){
                        numS.replace(j,1,"9");
                    }else if(a.compare("6") == 0){
                        numS.replace(j,1,"6");
                    }
                    if(b.compare("6") == 0){
                        numS.replace(j,1,"9");
                    }else if(b.compare("6") == 0){
                        numS.replace(j,1,"6");
                    }
                    swap(numS[j], numS[numS.length() - j - 1]);
                }
            }            
        }
        cout << numS << endl;
    }

    return 0;
}