#ifndef ADVENTUREOFCMD_ROOM_H
#define ADVENTUREOFCMD_ROOM_H

#include <vector>
#include <string>
#include "livingentity.h"

enum Aggression_Level {
    Friendly,
    Passive,
    Neutral,
    Angry,
    Murder
};

class Room {
private:
    int currentDescription = 0;
    int populationCount;

    std::string name;
    std::vector<std::string *> description;
    std::vector<LivingEntity *> population;

public:
    Room(int populationNumber, std::string_view roomName, std::vector<std::string *> descriptions,
         std::vector<LivingEntity *> people) : populationCount(populationNumber), name(roomName),
                                               description(std::move(descriptions)), population(std::move(people)) {}

    ~Room() = default;

    void modifyHostility() {
        for(auto i: population) {
            if(Friendly) {

            }
            if(Passive) {

            }
            if(Neutral) {

            }
            if(Angry) {

            }
            if(Murder) {

            }
        }
    }
};

#endif //ADVENTUREOFCMD_ROOM_H
