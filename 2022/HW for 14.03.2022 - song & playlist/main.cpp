#include <iostream>

using namespace std;

class Song {
    string name;
    string genre;
    string url;
public:
    // Default constuctor
    // Custom constructor for all fields
    // Copy constructor
    // Overloaded asign operator =
    // Getters and Setters
};

class Playlist {
    Song* songs;
    int songsCount;
    string name;
    string description;

public:
    // Default constuctor
    // Custom constructor for all fields
    // Copy constructor
    // Overloaded asign operator =
    // Getters and Setters  

    // Remove song from playlist p1 and move it to playlist p2
    // Check if there is such a song
    void move(const Playlist& p1, const Playlist& p2, const Song& song);
}

int main() {
    // Show every functionality you have written

    return 0;
}