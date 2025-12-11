#include <iostream>
#include <unordered_map>
using namespace std;

struct Player {
    string name;
    int age;
    int score;
};

int main() {
    unordered_map<int, Player> playerDB;

    // Insert
    playerDB[101] = {"Rohit", 20, 88};
    playerDB[102] = {"Arjun", 22, 76};

    // Access
    cout << "Player 101: " << playerDB[101].name 
         << " Score: " << playerDB[101].score << endl;

    // Search
    if(playerDB.find(102) != playerDB.end()) {
        cout << "Player 102 Found!" << endl;
    }

    return 0;
}
