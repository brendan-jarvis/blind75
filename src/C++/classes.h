#include <string>

class Song {
  std::string title;
  std::string artist;
  std::string album;
  std::string genre;
  int year;

public:
  // Getters
  std::string getTitle(){
    return title;
  };
  std::string getArtist(){
    return artist;
  };
  std::string getAlbum(){
    return album;
  };
  std::string getGenre(){
    return genre;
  };
  
  int getYear(){
    return year;
  };

  // Setters
  void setTitle(std::string new_title){
    title = new_title;
  };

  void setArtist(std::string new_artist){
    artist = new_artist;
  };

  void setAlbum(std::string new_album){
    album = new_album;
  };

  void setGenre(std::string new_genre){
    genre = new_genre;
  };

  void setYear(int new_year){
    year = new_year;
  };
};
    
