#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main(){
    // Task 1 (The Setup): Create an unordered_set of integers named unique_ids.
    unordered_set<int> unique_ids;

    // Task 2 (The Population): Given this vector of IDs: vector<int> incoming_ids = {101, 102, 101, 103, 102, 104};, write a loop to insert all of these elements into your unique_ids set.
    vector<int> incoming_ids = {101, 102, 101, 103, 102, 104};
    for(int x: incoming_ids){
        unique_ids.insert(x);
    }

    // Task 3 (The Proof): Print the .size() of your set to prove that the duplicates were automatically destroyed.
    cout << unique_ids.size() << "\n";

    // Task 4 (The Security Check): Use an if statement with .count() to check if ID 105 is in the set. If it is not, print "Access Denied for 105".
    if(unique_ids.count(105)) cout << "105 is in the set" << "\n";
    else cout << "Access Denied for 105" << "\n";
    return 0;
}
