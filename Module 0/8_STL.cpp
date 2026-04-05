#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    // Task 1 (The Setup): Create a vector of pairs named students. Each pair should contain a string (student's name) and an int (their math score).
    vector<pair<string,int>> students;

    // Task 2 (The Population): Add these three students to the vector: {"Alice", 85}, {"Bob", 92}, and {"Charlie", 78}.
    students.push_back({"Alice", 85});
    students.push_back({"Bob", 92});
    students.push_back({"Charlie", 78});

    // Task 3 (The Custom Sort): Use std::sort() and a lambda function to sort the students vector in Descending Order based on their math score (highest score first).
    sort(students.begin(),students.end(), [](pair<string,int> a, pair<string,int> b){
        return a.second>b.second;
    });

    // Task 4 (The Output): Write a range-based for loop to print the sorted list in the format: [Name] - [Score].
    for(auto x:students){
        cout << x.first << "-" << x.second << "." << "\n";
    }
    return 0;
}