#include <iostream>
#include "pointers_functions.h"

std::string welcomeMessage()
{
  std::string message = "Welcome to the REFERENCES AND POINTERS!\n";
  return message;
}

int triple(int &i)
{
  i = i * 3;
  return i;
}

int tripleConst(const int &i)
{
  // i = i * 3; // This line will cause an error
  return i * 3;
}

bool findWord(const std::string &sentence, const std::string &word)
{
  return sentence.find(word) != std::string::npos;
}

std::string censorWord(std::string &sentence, const std::string &word)
{
  std::string censoredWord = "";
  for (int i = 0; i < word.length(); i++)
  {
    censoredWord += "*";
  }

  if (findWord(sentence, word))
  {
    int wordIndex = sentence.find(word);
    sentence.replace(wordIndex, word.length(), censoredWord);
  }
  return sentence;
}