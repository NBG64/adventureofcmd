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
    int currentDialogPlace = 0;
    std::vector<std::string *> Dialog;
    std::vector<std::string *> Items;
public:
    LivingEntity(int healthPoints, int hostility, std::vector<std::string *> Dialogs,
                 std::vector<std::string *> ItemList)
            : health(healthPoints), hostility(hostility), Dialog(std::move(Dialogs)),
              Items(std::move(ItemList)) {}

    ~LivingEntity() = default;

    [[nodiscard]] int getHealth() const {
        return health;
    }

    [[nodiscard]] int setHealth(int value) const {
        return health + value;
    }

    [[nodiscard]] int getHostility() const {
        return hostility;
    }

    [[nodiscard]] int setHostility(int value) const {
        return hostility + value;
    }

    [[nodiscard]] int getDialogPlace() const{
        return currentDialogPlace;
    }

    virtual std::string advanceDialog();

    virtual std::string advanceCombat();


};

#endif //ADVENTUREOFCMD_LIVINGENTITY_H
