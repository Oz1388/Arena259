#include <iostream>
#include "arena.h"
using namespace std;

void Arena::battle(Creature &a, Creature &b)
{
    std::cout << a.name << " vs " << b.name << std::endl;

    int turn = 1;

    while (a.isAlive() && b.isAlive())
    {
        std::cout << "\nTurn " << turn << std::endl;

        std::cout << a.name << " attacks!" << std::endl;
        a.attack(b);
        std::cout << b.name << " health: " << b.health << std::endl;

        if (!b.isAlive())
            break;

        std::cout << b.name << " attacks!" << std::endl;
        b.attack(a);
        std::cout << a.name << " health: " << a.health << std::endl;

        turn++;
    }

    if (a.isAlive())
    {
        std::cout << a.name << " wins!" << std::endl;
    }
    else
    {
        std::cout << b.name << " wins!" << std::endl;
    }

}
/**
void Arena::Colluseum(std::vector<Creature> creatures){
        srand(time(0)); // begins randomness
        int turn = 1;

        // loop until 1 creature left alive
        while (true)
            {
                cout << "\nTurn " << turn << endl;

                int aliveCount = 0;

                // count living creatures
                for (int i = 0; i < creatures.size(); i++)
                {
                    if (creatures[i].isAlive())
                    {
                        aliveCount++;
                    }
                }

                // stop if only 1 is left
                if (aliveCount <= 1)
                {
                    break;
                }

                int attackerIndex;

                // find random living attacker
                attackerIndex = rand() % creatures.size();
                
                while (!creatures[attackerIndex].isAlive());

                int targetIndex;

                // find random living target that is not the attacker
                do
                {
                    targetIndex = rand() % creatures.size();
                }
                while (targetIndex == attackerIndex || !creatures[targetIndex].isAlive());

                // attack target
                cout << creatures[attackerIndex].name << " attacks "
                    << creatures[targetIndex].name << endl;

                creatures[attackerIndex].attack(creatures[targetIndex]);

                cout << creatures[targetIndex].name << " health: "
                    << creatures[targetIndex].health << endl;

                turn++;
            }

            // print winner
            for (int i = 0; i < creatures.size(); i++)
            {
                if (creatures[i].isAlive())
                {
                    cout << "\nWinner, Winner Chicken Dinner! " << creatures[i].name << endl;
                }
            }
        }
        */