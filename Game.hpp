#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

#include <cstdint>

class Game {

public:

  Game();
  ~Game();

  //Runs the game loop in order
  void run();
  
  //Do all the neccessary load work for SFML and engine
  bool load();

  //Poll events and update engine game loop
  void update();

  //Proccess render calls made to the engine
  void render();


  uint16_t get_window_width(){ return WINDOW_WIDTH; }
  uint16_t get_window_height(){ return WINDOW_HEIGHT; }

private:

  uint16_t WINDOW_WIDTH  = 800;
  uint16_t WINDOW_HEIGHT = 600;

  bool running = true;
  
public:

  //main window 
  sf::RenderWindow window;

  const std::string WINDOW_TITLE = "Dagashi";
  
  //Elapsed time since start of update 
  sf::Clock delta_time;

};
