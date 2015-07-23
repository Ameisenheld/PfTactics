#include "MapTile.h"

MapTile::MapTile(){
	view = new GraphicView(' ');
}

MapTile::MapTile(GraphicView* gView)
	: view(gView){
	MapTile();
}

MapTile::~MapTile(){
	delete prop;
	delete view;
}