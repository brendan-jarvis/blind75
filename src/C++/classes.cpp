#include <iostream>
#include "classes.h"

int main(){
  // create Song object
  Song fleetwoodMacSong("Dreams", "Fleetwood Mac", "Rumours", "Rock", 1977);

  // print out song info
  // std::cout << "Title: " << fleetwoodMacSong.getTitle() << "\n";
  // std::cout << "Artist: " << fleetwoodMacSong.getArtist() << "\n";
  // std::cout << "Album: " << fleetwoodMacSong.getAlbum() << "\n";
  // std::cout << "Genre: " << fleetwoodMacSong.getGenre() << "\n";
  // std::cout << "Year: " << fleetwoodMacSong.getYear() << "\n";
  std::cout << fleetwoodMacSong.getSongInfo() << "\n";
}