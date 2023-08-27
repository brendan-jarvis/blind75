#include <iostream>
#include <vector>
#include "classes.h"

int main(){
  int count = 0;
  std::vector<Song> songs[5];

  songs->push_back(Song("The End", "The Doors", "The Doors", "Rock", 1967));
  songs->push_back(Song("Dreams", "Fleetwood Mac", "Rumours", "Rock", 1977));
  songs->push_back(Song("Stairway to Heaven", "Led Zeppelin", "Led Zeppelin IV", "Rock", 1971));
  songs->push_back(Song("Bohemian Rhapsody", "Queen", "A Night at the Opera", "Rock", 1975));
  songs->push_back(Song("Hotel California", "Eagles", "Hotel California", "Rock", 1976));
  
  if (songs->size() == 1)
    std::cout << "There is " << songs->size() << " song:\n";
  else if (songs->size() > 1)
  {
    std::cout << "There are " << songs->size() << " songs:\n";
  }

  for (int i = 0; i < songs->size(); i++)
  {
    std::cout << "\nSong #" << i + 1 << "\n";
    std::cout << songs->at(i).getSongInfo() << "\n";
  }
}