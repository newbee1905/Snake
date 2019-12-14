#include "bits/stdc++.h"
#include "Game.h"

// init game engine
usr::Game game;

signed main() {

  // Game loop
  while (game.running()) {
    // Update
    game.update();

    // Render
    game.render();
  }
  
  return 0;
}
