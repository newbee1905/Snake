#include "Game.h"

// set namespace for better syntax when declaring Class name
// using namespace here for shorter code
using namespace usr;

// Private Functions
void Game::initVariables() {
  this->window = nullptr;
}

void Game::initWindow() {
  this->windowSize.width = 800;
  this->windowSize.height = 600;
  this->windowTitle = "Game Snake";

  this->window = new sf::RenderWindow(this->windowSize, this->windowTitle, sf::Style::Titlebar | sf::Style::Close);

  this->window->setFramerateLimit(60);
}

void Game::initEnemies() {
  this->enemy.setPosition(10.f, 10.f);
  this->enemy.setSize(sf::Vector2f(100.f, 100.f));
  this->enemy.setFillColor(sf::Color::Red);
  this->enemy.setOutlineColor(sf::Color(255, 0, 0, 125));
  this->enemy.setOutlineThickness(2.f);
}

// Contructor / Destructor
Game::Game() {
  this->initVariables();
  this->initWindow();
  this->initEnemies();
}

Game::~Game() {
  delete this->window;
}

// Accessors
const bool Game::running() const {
  return this->window->isOpen();
}

// Functions
void Game::pollEvents() {
  // Event polling
  while (this->window->pollEvent(this->ev)) {
    switch (this->ev.type) {
    case sf::Event::Closed:
      this->window->close();
      break;
    }
  }
}

void Game::update() {
  this->pollEvents();

  // mouse pos relative to this->window
  /* std::cout << "Mouse pos: " */
  /*           << sf::Mouse::getPosition(*this->window).x << " " */
  /*           << sf::Mouse::getPosition(*this->window).y << " " */
  /*           << std::endl; */
}

void Game::render() {
  /*
   return void
   
   * clear old frames
   * render object
   * display frames in window
  */

  this->window->clear(sf::Color(255, 255, 255, 255));  // Clear old frames

  // Draw game
  this->window->draw(this->enemy);

  this->window->display(); // Tell app that window is done drawing
}
