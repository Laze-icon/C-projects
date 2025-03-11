//C++ program showing the player information system
//Eugen Mboya
//BSCIT-05-0003/2024
#include <iostream>
#include <string>
using namespace std;

struct player {
    string name;
    int score;
    int level;
};

// Function to display player details
void displayPlayer(const player& p) {
    cout << "Player Name: " << p.name << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
}

int main() {
    player player1, player2;

    // Details for the first player
    cout << "Enter details for Player 1: " << endl;
    cout << "Name: ";
    cin >> player1.name;
    cout << "Score: ";
    cin >> player1.score;
    cout << "Level: ";
    cin >> player1.level;

    // Details for the second player
    cout << "\nEnter details for Player 2: " << endl;
    cout << "Name: ";
    cin >> player2.name;
    cout << "Score: ";
    cin >> player2.score;
    cout << "Level: ";
    cin >> player2.level;

    // Display player details
    cout << "\nDisplaying Player 1 details:" << endl;
    displayPlayer(player1);

    cout << "\nDisplaying Player 2 details:" << endl;
    displayPlayer(player2);

    return 0;
}
