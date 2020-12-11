#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

int main(){
    int cases; cin >> cases;
    
    for(int i = 0; i < cases; ++i){
        int studentsNum; cin >> studentsNum;
        double average = 0;

        vector<int> students;
                
        for(int j = 0; j < studentsNum; ++j){
            int grade; cin >> grade;
            average += grade;
            students.push_back(grade);
        }
        average /= studentsNum;
        int aboveAverage = 0;
        
        for(int k = 0; k < students.size(); ++k){
            if(students[k] > average){
                aboveAverage++;
            }       
        }
        double percAbove = (double)aboveAverage / (double)studentsNum * 100;
        cout << setprecision(3) << fixed << percAbove << "%" << endl;

    }

    return 0;
}