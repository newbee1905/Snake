#ifndef GAME_H
#define GAME_H

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "bits/stdc++.h"

// set namespace for better syntax when declaring Class name
namespace usr {
class Game {
private:
  // Variables
  // * Window
  sf::RenderWindow *window;
  sf::VideoMode windowSize;
  std::string windowTitle;
  sf::Event ev;

  // * Game Object
  sf::RectangleShape enemy;

  // private functions
  void initVariables();
  void initWindow();
  void initEnemies();

public:
  // Contructor / Destructor
  Game();
  virtual ~Game();

  // Accessors
  const bool running() const; // check if game is running or not

  // Functions
  void pollEvents();
  void update();
  void render();
};
} // namespace usr

#endif /* GAME_H */
