#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main(){
    // Task 1 (The Single Pair): Create a pair named highest_score that holds a string (for a player's name) and an int (for their score). Initialize it with the values "Maya" and 999 using the modern curly brace {} syntax. Print both values.
    pair<string,int> highest_score={"Maya", 999};
    cout << highest_score.first << " " << highest_score.second << "\n";

    // Task 2 (The Vector of Pairs): Create a vector named graph_edges that stores pairs of integers.
    vector<pair<int,int>> graph_edges;

    // Task 3 (The Population): Add three edges to this vector: {0, 1}, {1, 2}, and {2, 0}.
    graph_edges.push_back({0, 1});
    graph_edges.push_back({1, 2});
    graph_edges.push_back({2, 0});
    
    // Task 4 (The Traversal): Write a range-based for loop to iterate through the graph_edges vector and print each edge in the format: Node A -> Node B.
    for(auto i:graph_edges){
        cout << i.first << "->" << i.second << "\n";
    }
    return 0;
}