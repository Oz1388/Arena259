#include <iostream>
#include <iomanip>
#include "arena.h"

void Arena::battle(Creature &a, Creature &b)
{

    if(!Creature::validateBattle(a, b)){
        return;
    }

    std::cout << "=============================\n";
    std::cout << "        ARENA BATTLE        \n";
    std::cout << "=============================\n";

    std::cout << a.name << " vs " << b.name << std::endl;

    int turn = 1;

    while (a.isAlive() && b.isAlive())
    {
        std::cout << "-----------------------------\n";
	std::cout << "\nTurn " << turn << std::endl;
	std::cout << "-----------------------------\n";


	std::cout << std::left
                  << std::setw(10) << a.name << " HP: " << a.health << "\n"
                  << std::setw(10) << b.name << " HP: " << b.health << "\n";


        std::cout << a.name << " attacks!" << " with " << a.damage << " blow\n";
        a.attack(b);
        std::cout << b.name << " HP is now " << b.health << "\n";


        if (!b.isAlive()){
		std::cout << "\n" << b.name << " has died\n";
            	break;
	}

        std::cout << b.name << " attacks back at " << a.name << "\n";
        b.attack(a);
        std::cout << a.name << " HP is now " << a.health << "\n";

	if (!a.isAlive())
        {
            std::cout << "\n" << a.name << " has died :(\n";
            break;
        }

        turn++;
    }

    std::cout << "\n=============================\n";
    if (a.isAlive())
    {
        std::cout << a.name << " wins!" << std::endl;
    }
    else
    {
        std::cout << b.name << " wins!" << std::endl;
    }
    std::cout << "\n=============================\n";
}
