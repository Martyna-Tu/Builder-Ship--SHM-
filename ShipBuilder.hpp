#pragma once 

#include "Ship.hpp"

class ShipFactorySettingsBuilder;
class ShipOwnSettingsBuilder;

class ShipBuilder {
  Ship s_;
protected:
  Ship& ship_;
  explicit ShipBuilder(Ship& ship) : ship_(ship) {}

  ShipFactorySettingsBuilder createShipModel() {
    return ShipFactorySettingsBuilder(ship_);
  }

  ShipOwnSettingsBuilder createShipDetails(){
    return ShipOwnSettingsBuilder(ship_);
  }

  operator Ship() {
    return std::move(ship_);
  }
};

