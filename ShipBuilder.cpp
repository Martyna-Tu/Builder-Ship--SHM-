#include "ShipBuilder.hpp"

ShipFactorySettingsBuilder ShipBuilder::createShipModel() {
    return ShipFactorySettingsBuilder(ship_);
}
ShipOwnSettingsBuilder ShipBuilder::createShipDetails() {
    return ShipOwnSettingsBuilder(ship_);
}



