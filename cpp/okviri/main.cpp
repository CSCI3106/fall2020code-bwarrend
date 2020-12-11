#include <iostream>
using namespace std;

int main(){
    string one = {"..#...#...*...#...#...*...#...#...*...#...#...*...#...#...*."};
    string two = {".#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*"};
    string mid = {"#.$.#.$.*.$.*.$.#.$.*.$.*.$.#.$.*.$.*.$.#.$.*.$.*.$.#.$.*.$."};
    
    string word; cin >> word;

    int multiple = word.length() * 4;

    int count = 0;

    for(int i = 2; i < multiple; i+=4){
        mid[i] = word[count];
        count++;    
    }


    //..#...#...*...#...#...*...#...#...*...#...#...*...#...#...*.
    for(int i = 0; i < multiple; ++i){
        cout << one[i];
    }
    cout << "." << endl;

    //.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*
    for(int i = 0; i < multiple; ++i){
        cout << two[i];        
    }
    cout << "." << endl;

    //#.$.#.$.*.$.#.$.#.$.*.$.#.$.#.$.*.$.#.$.#.$.*.$.#.$.#.$.*.$.
    for(int i = 0; i < multiple; ++i){
        cout << mid[i];
    }
    if(word.length() % 3 == 0){
        cout << "*" << endl;
    }else{
        cout << "#" << endl;
    }
    

    //.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*
    for(int i = 0; i < multiple; ++i){
        cout << two[i]; 
    }
    cout << "." << endl;

    //..#...#...*...#...#...*...#...#...*...#...#...*...#...#...*.
    for(int i = 0; i < multiple; ++i){
        cout << one[i];        
    }
    cout << "." << endl;
    
    return 0;
}