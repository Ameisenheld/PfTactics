#ifndef MAP_H
#define MAP_H

// The Map where everything will be placed
// variable size?

#include "Hero.h"
#include "Monster.h"
#include "Furniture.h"
#include "MapTile.h"

class Map{
	std::vector<std::vector<MapTile>> map;
};

#endif