#include "arena.h"
#include "creature.h"
#include "creatures/viper.h"
#include "creatures/segoblin.h"
#include "creatures/giantleech.h"

using namespace std;




int main()
{
    srand(time(0)); // begins randomness

    std::vector<Creature> creatures;
    // Create some creatures
    Creature c1 = makeViper();
    Creature c2 = makeSEGoblin();
    Creature c3 = makeGiantleech();

    creatures.push_back(c1);
    creatures.push_back(c2);
    creatures.push_back(c3);

    Arena::Colluseum(creatures);
    return 0;
}

