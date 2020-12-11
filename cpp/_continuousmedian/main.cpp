#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int C; cin >> C;

    for(int c = 0; c < C; ++c){
        int N; cin >> N;
        vector<int> nums;


        for(int n = 0; n < N; ++n){
            int thisNum; cin >> thisNum;
            nums.push_back(thisNum);
        }

        int median = 0;
        for (int i = 1; i < nums.size(); ++i){

        }
        cout << median << endl;




    }
    




    
    return 0;
}