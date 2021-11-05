#pragma once 

#include "StructsForShip.hpp"
#include "ShipBuilder.hpp"

class ShipOwnSettingsBuilder : public ShipBuilder {
  using Self = ShipOwnSettingsBuilder;

public:
  ShipOwnSettingsBuilder(Ship& ship) : ShipBuilder(ship) {}

  Self& setName(const std::string& name) {
        ship_.name_ = name;
        return *this;
  }

  Self& setCrew(const Crew& crew) {
        ship_.crew_.currentNumber = crew.currentNumber;
        return *this;
  }

  Self& setCapacity(const Capacity& capacity) {
        ship_.capacity_.currentUsed = capacity.currentUsed;
        return *this;
  }

  Self& setCannons(const Cannons& cannons) {
        ship_.cannons_.currentNumber = cannons.currentNumber;
        return *this;
  }

  Self& setHP(const HP& hp) {
        ship_.hp_.currentValue = hp.currentValue;
        return *this;
  }

};
