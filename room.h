#ifndef ADVENTUREOFCMD_ROOM_H
#define ADVENTUREOFCMD_ROOM_H

#include <vector>
#include <string>
#include "livingentity.h"



class Room {
private:
    enum Aggression_Level {
        Friendly = 1,
        Passive = 3,
        Neutral = 5,
        Angry = 7,
        Murder = 9
    };
    int currentDescription = 0;
    int populationCount;

    std::string name;
    std::vector<std::string *> description;
    std::vector<LivingEntity *> population;

public:
    Room();
    ~Room()=default;

private:
    void modifyAggression() {
        switch (population[1]->getHostility()) {
            
        }
    };
};

#endif //ADVENTUREOFCMD_ROOM_H
