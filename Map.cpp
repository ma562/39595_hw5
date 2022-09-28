#include <map>

#include "Map.h"

void Map::insert(int key, TwoTuple* _data) {
   // fill this in. Insert a std::pair that contains an int and a TwoTuple* as its members.
	map.insert({key, _data});	
}

TwoTuple* Map::lookUp(int key) {
   // use the map container find function to lookup a key and get the Tuple that is the data.
   // Return a pointer to the data, or a nullptr if the entry corresponding to the key isn't
   // found.
   if(map.find(key) != map.end()) {
	return map.find(key) -> second;
   }
   return nullptr;
}
