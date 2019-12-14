#include "Point.h"

// set namespace for better syntax when declaring Class name
// using namespace here for shorter code
using namespace usr;

// Contructor / Destructor
Point::Point() {}
Point::~Point() {}

// Public Function
// generate random point base on type
//                                  * Snake
//                                  * Food
usr::Point Point::generateRand (sf::VideoMode windowSize, std::string type) {
  // generate random point from a -> b
  srand(time(NULL));
  int a;  int b;

  if (type == "Snake") {
    // beacause the snake's size is 4
    // generate from 5 to windowSize.width - 5
    a = 5;
    b = windowSize.width - 5;
  } else if (type == "Food") {
    // generate from 1 to windowSize.width - 1
    a = 1;
    b = windowSize.width - 1;
  }

  usr::Point pointRanPos; // generate random point from a to b
  pointRanPos.x = a + rand() / (RAND_MAX / (b - a + 1) + 1);
  pointRanPos.y = 1 + rand() / (RAND_MAX / ((windowSize.height - 1) - 1 + 1) + 1);
  return pointRanPos;
}
