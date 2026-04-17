#include <iostream>
#include <vector>
#include "arena.h"
#include "creature.h"
#include <cstdlib>
#include <ctime>
#include "viper.h"
#include "segoblin.h"
#include "giantleech.h"

using namespace std;




int main()
{
    srand(time(0)); // begins randomness

    vector<Creature> creatures;
    // Create some creatures
    creatures.push_back(makeViper());
    creatures.push_back(makeSEGoblin());
    creatures.push_back(makeGiantleech());

    return 0;

int turn = 1;

// loop until 1 creature left alive
while (true)
{
    cout << "\nTurn " << turn << endl;

    // count alive creatures
    int aliveCount = 0;
    for (int i = 0; i < creatures.size(); i++)
    {
        if (creatures[i].isAlive())
            aliveCount++;
    }

    // stop if only one left
    if (aliveCount <= 1)
        break;

    turn++;
}

}

