#include <iostream>
#include <string>

#include "functions.hpp"

int main() {
  
  std::string word = "ranch";
  
  std::string sentence = "I sometimes eat ranch. The interesting thing about ranch is that there are three interesting things about ranch. Number One. Everyone seems to hate it. Number Two. It goes good on everything. Number Three. It's delivious. #ranch";
  
  bleep(word, sentence);
  
  for (int i = 0; i < sentence.size(); i++) {
    
    std::cout << sentence[i];
    
  }
  
  std::cout << "\n";
  
}