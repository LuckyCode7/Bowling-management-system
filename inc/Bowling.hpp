#pragma once
#include <../inc/Game.hpp>
#include <vector>
#include <string>
#include <iostream>

class Bowling
{
    std::vector<Game> games_list;
    void gamesLoader(const std::string& path);
public:
    explicit Bowling(const std::string& files_directory_path);
    std::vector<Game> getGamesList() const;
    friend std::ostream& operator<<(std::ostream& os, const Bowling& bg);
    virtual ~Bowling();
};
