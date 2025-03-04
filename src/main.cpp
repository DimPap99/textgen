//
// Created by dimpap on 3/4/25.
//


#include <iostream>

#include <algorithm>
#include "generator.h"
#include "utils.h"
#include <cctype>

int main(int argc, char *argv[]){

  if(argc >= 2){
    std::string file_path = argv[1];
    std::string distribution = "uniform";
    int length = -1;
    int text_sz = 20;
    std::string s = argv[3];
    if (argc >= 2) text_sz = atoi(argv[2]);
    if(argc >=3 ) distribution = argv[3];
    if(argc == 4) length = std::atoi(argv[4]);
    if (length == 0) {
      std::cout <<"Gave 0 length. Will use default." << std::endl;
      length = -1;
    }

    std::string alphabet = read_alphabet(file_path);

    std::transform(alphabet.begin(), alphabet.end(), alphabet.begin(),
      [] (unsigned char c){return std::tolower(c);});
    std::cout << alphabet << std::endl;

  }else{
    std::cout << "Invalid cmd arguments...\n1.Alphabet File path"
                 "\n2.Text Size: 20 (default)"
                 "\n3.Distribution: uniform (default)/zipf"
                 "\n4.Alphabet Length: -1 (default) uses all letters" << std::endl;
  }
  
  return 0;
}