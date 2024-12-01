#pragma once
#include <iostream>
#include <map>
#include <string>
#include <SFML/Graphics.hpp>

class Window{
public:
    Window();
    Window(int x, int y);
    std::map<std::string, std::string> users;
    bool registr();
    void render(int h, int w, bool log);
    void addpass(std::string name, std::string password);
    void read(std::string names);
    void edit(std::string website);
    void del(std::string websites);


};