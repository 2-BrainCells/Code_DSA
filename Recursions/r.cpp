// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>

class Player {
public:
    std::string name;
    int height;
    int weight;
    Player(std::string name, int height, int weight) : name(name), height(height), weight(weight) {}
};

class Team {
public:
    std::string name;
    std::string city;
    Player* captain;
    std::vector<Player*> players;
    Team(std::string name, std::string city) : name(name), city(city) {}
    void addPlayer(Player* player) {
        players.push_back(player);
    }
    void setCaptain(Player* player) {
        captain = player;
    }
};

class Play {
public:
    std::string type;
    std::vector<Player*> fielders;
    Play(std::string type) : type(type) {}
    void addFielder(Player* player) {
        fielders.push_back(player);
    }
};

class Match {
public:
    Team* team1;
    Team* team2;
    std::vector<Play*> plays;
    Match(Team* team1, Team* team2) : team1(team1), team2(team2) {}
    void addPlay(Play* play) {
        plays.push_back(play);
    }
};

