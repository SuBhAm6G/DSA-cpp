#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
int main(){
    // Task 1 (The Setup): Create an unordered_map named inventory where the Key is a string (item name) and the Value is an int (quantity).
    unordered_map<string,int> inventory;

    // Task 2 (Frequency Counting): Given this vector of strings: vector<string> items = {"sword", "shield", "potion", "sword", "potion", "potion"};, write a loop to populate the inventory map with the frequency of each item.
    vector<string> items = {"sword", "shield", "potion", "sword", "potion", "potion"};
    for (auto item: items){
        inventory[item]++;
    }

    // Task 3 (The Check): Write an if statement using .count() or .find() to check if "bow" exists in the inventory. If it doesn't, print "Bow not found".
    if(inventory.count("bow")==0){
        cout << "Bow not found.";
    }

    //Task 4 (The Output): Iterate through the inventory map and print each item and its quantity in the format: [Item]: [Quantity].
    for (auto item: inventory){
        cout << item.first << ": " << item.second << "\n";
    }
}