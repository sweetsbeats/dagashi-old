
#include "Game.hpp"

Game::Game() {}
Game::~Game() {}

void Game::run() {

  load();
  
  while (running) {
    update();
    render();
  }

}

bool Game::load() {
  window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE );

  return true;
}

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

      //render loop
      window.clear(sf::Color::Cyan);

     
      window.display();
    }
  
  
  
}

void Game::render() {

}
