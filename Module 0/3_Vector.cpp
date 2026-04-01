#include <iostream>
#include <vector>
using namespace std;


int main(){
    // Task 1 (The Basic): Create an empty vector of integers. Add the numbers 5, 10, and 15 to it. Then, remove the last element.
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(15);
    v1.pop_back();
    
    // Task 2 (The DP Array): Create a second vector named memo that has exactly 50 elements, all initialized to the value -1.
    vector<int> memo(50,-1);

    // Task 3 (The Grid): Create a 2D vector (a matrix) named grid that has 3 rows and 4 columns, with all elements initialized to 0. Change the value at the 2nd row, 3rd column (index [1][2]) to 99.
    int rows=3, cols=4;
    vector<vector<int>> grid(rows, vector<int>(cols,0));
    grid[1][2]=99;
    return 0;
}