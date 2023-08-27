#include <iostream>
#include <string>

class Song {
  std::string title;
  std::string artist;
  std::string album;
  std::string genre;
  int year;

public:
  // Constructor
  Song(std::string new_title, std::string new_artist, std::string new_album, std::string new_genre, int new_year){
    title = new_title;
    artist = new_artist;
    album = new_album;
    genre = new_genre;
    year = new_year;
  };

  // Destructor
  ~Song(){
    std::cout << "\nGoodbye, " << title << "!\n";
  };

  // Getters
  std::string getTitle(){
    return this->title;
  };
  std::string getArtist(){
    return this->artist;
  };
  std::string getAlbum(){
    return this->album;
  };
  std::string getGenre(){
    return this->genre;
  };
  
  int getYear(){
    return year;
  };

  std::string getSongInfo(){
    return "Title: " + title + "\nArtist: " + artist + "\nAlbum: " + album + "\nGenre: " + genre + "\nYear: " + std::to_string(year);
  };

  // Setters
  void setTitle(std::string new_title){
    if (new_title == ""){
      std::cout << "Title cannot be blank.\n";
      return;
    } else {
      std::cout << "Title changed to " << new_title << "\n";
      title = new_title;
    }
  };

  void setArtist(std::string new_artist){
    if (new_artist == ""){
      std::cout << "Artist cannot be blank.\n";
      return;
    } else {
      std::cout << "Artist changed to " << new_artist << "\n";
      artist = new_artist;
    }
  };


  void setAlbum(std::string new_album){
    if (new_album == ""){
      std::cout << "Album cannot be blank.\n";
      return;
    } else {
      std::cout << "Album changed to " << new_album << "\n";
      album = new_album;
    }
  };

  void setGenre(std::string new_genre){
    if (new_genre == ""){
      std::cout << "Genre cannot be blank.\n";
      return;
    } else {
      std::cout << "Genre changed to " << new_genre << "\n";
      genre = new_genre;
    }
  };

  void setYear(int new_year){
    if (new_year < 0){
      std::cout << "Year cannot be negative.\n";
      return;
    } else {
      std::cout << "Year changed to " << new_year << "\n";
      year = new_year;
    }
  };
};
    
