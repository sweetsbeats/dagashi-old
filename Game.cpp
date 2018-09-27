#include "Game.hpp"


Game::Game() {}
Game::~Game() {}


//Runs the engine loop until running == false
void Game::run() {

  Game::load();
  
  while (running) {
    Game::update();
  }
}


//One time loading calls for managers and various utilities
bool Game::load() {
  window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE );

  return true;
}


//Update loop includes all non-rendering, frame-to-frame updating
void Game::update() {

  delta_time.restart();

  while(window.isOpen()) {

    sf::Event event;
      
    while( window.pollEvent(event) ) {
      
      if (event.type == sf::Event::Closed) {
	window.close();
	running = false;
      }
      
    }

    Game::render();
    
  }
}


//render loop
void Game::render() {
  //Render calls take place between 'window.clear()' and 'window.display()'
  window.clear(sf::Color::Cyan);

  
  window.display();
}




void Game::cleanup() {


}
