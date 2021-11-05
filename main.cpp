#include <iostream>
#include <string>

#include "Ship.hpp"

int main() {
    
    std::string shipType = "blablabla";
    Speed speed{15};
    Turning turning{80};
    Crew crew{10,100};
    Capacity capacity{230, 400};
    Cannons cannons{10, 16};
    HP hp{60, 100};
    Upkeep upkeep{250};
    Cost cost{120'000};
    std::string name = "Duke"; 


    Ship ship = Ship::create()
                .createShipModel().setShipType(shipType)
                                  .setSpeed(speed)
                                  .setTurning(turning)
                                  .setMaxCrew(crew)
                                  .setMaxCapacity(capacity)
                                  .setMaxCannons(cannons)
                                  .setUpkeep(upkeep)
                                  .setCost(cost)
                .createShipDetails().setName(name)
                                    .setCrew(crew)
                                    .setCapacity(capacity)
                                    .setCannons(cannons)
                                    .setHP(hp);
    
    std::cout << ship.getName() << '\n';

    return 0; 
}
