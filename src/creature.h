#ifndef CREATURE_H
#define CREATURE_H

#include <string>
#include <iostream>

const int MIN_HEALTH = 80;
const int MAX_HEALTH = 120;



class Creature
{
private: 
    std::string name;
    int health;
    int damage;

    inline static int creatureCount = 0; // Static member to keep track of the number of creatures created

public: 
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    int getDamage() const { return damage; }

    // Static method to get the current count of creatures created
    static int getCreatureCount(){
    return creatureCount;
    }

Creature(std::string n, int h, int d) // constructor to initialize the creature's name, health, and damage
    : name(n), health(h), damage(d){
    creatureCount++;
    }

void takeDamage(int dmg) // method to reduce the creature's health by the damage taken
{
    health -= dmg;
    if (health < 0)
        health = 0;
}

void attack(Creature &other) // IT WANTS TO SUCK YOUR BLOOD! MUWAHAHHAHAHA
{
    other.takeDamage(damage);

    // Giant Leech heals after attacking because leeches drain life.
    if (name == "Giant Leech")
    {
        health += 5;
    }
}

    bool isAlive() const // method to check if the creature is still alive (health > 0)
    {
        return health > 0;
    }

    static bool validate(Creature &c){
        if(c.health < MIN_HEALTH || c.health > MAX_HEALTH){
            std::cerr << "Error: " << c.name << " has invalid health. Health must be between " << MIN_HEALTH << " and " << MAX_HEALTH << std::endl;
            return false;
        }
        if(c.damage <= 0 || c.damage > 20){
            std::cerr << "Error: " << c.name << " has invalid damage. Damage must be > 0 or <= 20" << std::endl;
            return false;
        }
        return true;
        // minimum health to start a battle is 80, otherwise the battle would be predictable
        // 
    }

    /*
    If Creature a or b does not have the valid stats for health or damage
    It will output an error message and abort
    */
    static bool validateBattle(Creature &a, Creature &b){
        if(!validate(a) || !validate(b)){
            std::cerr << "The Battle cannot take place as there are invalid stats" << std::endl;
            return false;
        }
        return true;
    }
};

#endif