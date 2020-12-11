#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

void getVector(vector<ll> *vec, ll n);
void printVector(vector<ll> *vec);

int main(){
    ll a, b; cin >> a >> b;
   
    vector<ll> aVec;
    vector<ll> bVec;
    getVector(&aVec, a);
    getVector(&bVec, b);
    reverse(aVec.begin(), aVec.end());
    reverse(bVec.begin(), bVec.end());

    while(aVec.size() < bVec.size())    aVec.insert(aVec.begin(), 0);    
    while(bVec.size() < aVec.size())    bVec.insert(bVec.begin(), 0);

    int c = aVec.size() - 1;
    for(int i = 0; i < aVec.size(); ++i){
        if(aVec[c] > bVec[c])   bVec[c] = -1;
        else if(bVec[c] > aVec[c])  aVec[c] = -1;
        c--;
    }


    for(int i = aVec.size() -1; i >= 0; --i){
        if(aVec[i] == -1)   aVec.erase(aVec.begin() + i);
        if(bVec[i] == -1)   bVec.erase(bVec.begin() + i);
    }

    while(aVec[0] == 0 && aVec.size() > 1)  aVec.erase(aVec.begin()+0);
    while(bVec[0] == 0 && bVec.size() > 1)  bVec.erase(bVec.begin()+0);


    if(aVec.size() < 1) cout << "YODA" << endl;
    else printVector(&aVec);

    if(bVec.size() < 1) cout << "YODA" << endl;
    else    printVector(&bVec);

    return 0;
}

void getVector(vector<ll> *vec, ll n){
    while(n > 0){
        vec->push_back(n%10);
        n /= 10;
    }    
}

void printVector(vector<ll> *vec){
    vector<ll> veccy = *vec;
    for(int i = 0; i < vec->size(); ++i)    cout << veccy[i];
    cout << endl;
}