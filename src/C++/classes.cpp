#include <iostream>
#include "classes.h"

int main(){
  int count = 0;
  Song song("Dreams", "Fleetwood Mac", "Rumours", "Rock", 1977);
  ++count;

  // print out song info
  // std::cout << "Title: " << song.getTitle() << "\n";
  // std::cout << "Artist: " << song.getArtist() << "\n";
  // std::cout << "Album: " << song.getAlbum() << "\n";
  // std::cout << "Genre: " << song.getGenre() << "\n";
  // std::cout << "Year: " << song.getYear() << "\n";
  if (count == 1)
    std::cout << "There is " << count << " song.\n";
  else if (count > 1)
  {
    std::cout << "There are " << count << " songs.\n";
  }
  std::cout << "\n" << song.getSongInfo() << "\n";
}