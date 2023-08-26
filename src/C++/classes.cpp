#include <iostream>
#include "classes.h"

int main(){
  // create Song object
  Song song("Dreams", "Fleetwood Mac", "Rumours", "Rock", 1977);

  // print out song info
  // std::cout << "Title: " << song.getTitle() << "\n";
  // std::cout << "Artist: " << song.getArtist() << "\n";
  // std::cout << "Album: " << song.getAlbum() << "\n";
  // std::cout << "Genre: " << song.getGenre() << "\n";
  // std::cout << "Year: " << song.getYear() << "\n";
  std::cout << song.getSongInfo() << "\n";
}