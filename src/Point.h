#ifndef POINT_H
#define POINT_H

#include "Game.h"

// set namespace for better syntax when declaring Class name
namespace usr {
class Point {
public:
  // Contructor / Destructor
  Point();
  virtual ~Point();

  // Variables
  // Point position
  // Default value is { 0, 0 }
  int x = 0; // width pos // from left to right
  int y = 0; // height pos // from up to down

  // Functions
  // Generate random pos
  usr::Point generateRand(sf::VideoMode windowSize, std::string type);
};
} // namespace usr 
#endif
