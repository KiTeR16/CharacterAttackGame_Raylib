#pragma once


class Characters
{
    public:
    Characters() = default;
    virtual void attack() = 0;
    
};

class Statek1 : public Characters
{
    std::string name;
    int health;
    int attack;
    int armor;
    int level;

    public:
    Statek1(std::string n, int h, int a, int ar, int lvl);
   
};









