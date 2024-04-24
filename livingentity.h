#ifndef ADVENTUREOFCMD_LIVINGENTITY_H
#define ADVENTUREOFCMD_LIVINGENTITY_H

#include <utility>
#include <vector>
#include <string>
#include <memory>

class LivingEntity {
private:
    int health;
    int hostility;
    int moodLevel;
    int currentDialogPlace = 0;
    std::vector<std::string> Dialog;
    std::vector<std::string> Items;
public:

    LivingEntity(const std::string) {
    // Todo: File read
    }

    ~LivingEntity() = default;

    [[nodiscard]] int getHealth() const {
        return health;
    }

    void setHealth(int value) {
        health += value;
    }

    [[nodiscard]] int getHostility() const {
        return hostility;
    }

    void setHostility(int value) {
        hostility += value;
    }

    [[nodiscard]] int getMood() const {
        return moodLevel;
    }

    void setMood(int currentMood) {

    }

    [[nodiscard]] int getDialogPlace() const{
        return currentDialogPlace;
    }

    virtual std::string advanceDialog();

    virtual std::string advanceCombat();


};

#endif //ADVENTUREOFCMD_LIVINGENTITY_H
