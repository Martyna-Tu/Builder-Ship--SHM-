#pragma once 

#include "StructsForShip.hpp"
#include "ShipBuilder.hpp"

class ShipFactorySettingsBuilder : public ShipBuilder {
  using Self = ShipFactorySettingsBuilder;

public: 
  ShipFactorySettingsBuilder(Ship& ship) : ShipBuilder(ship) {}

  Self& setShipType(const std::string& shipType) {
        ship_.shipType_ = shipType;
        return *this;
  }

  Self& setSpeed(const Speed& speed) {
        ship_.speed_ = speed;
        return *this;
  }

  Self& setTurning(const Turning& turning) {
        ship_.turning_ = turning;
        return *this;
  }
  
  Self& setMaxCrew(const Crew& crew) {
        ship_.crew_.max = crew.max;
        return *this;
  }

  Self& setMaxCapacity(const Capacity& capacity) {
        ship_.capacity_.max = capacity.max;
        return *this;
  }

  Self& setMaxCannons(const Cannons& cannons) {
        ship_.cannons_.max = cannons.max;
        return *this;
  }

  Self& setUpkeep(const Upkeep& upkeep) {
        ship_.upkeep_ = upkeep;
        return *this;
  }

  Self& setCost(const Cost& cost) {
        ship_.cost_ = cost;
        return *this;
  }
};
