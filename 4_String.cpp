#include <iostream>
#include <string>
using namespace std;
int main(){
    // Task 1 (The Builder): Create two strings: first_name initialized to your first name, and last_name initialized to your last name. Create a third string full_name by combining them with a space in the middle.
    string first_name = "Subham";
    string last_name = "Dhar";
    string full_name = first_name + " " + last_name;
    cout << full_name << "\n";

    // Task 2 (The Extractor): Given a new string sentence = "The password is SUNYAM and it is secure", use the .substr() method to extract exactly the word "SUNYAM" into a new string variable. (You will need to count the index!).
    string sentence = "The password is SUNYAM and it is secure";
    string var = sentence.substr(16,6);
    cout << var << "\n";

    // Task 3 (The Searcher): Use the .find() method on the sentence string to locate the starting index of the word "secure". Store this index in an integer variable.
    int start = sentence.find("secure");
    cout << start;
    return 0;
}