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
    int alphabet_length = -1;
    int text_sz = 20;

    if (argc >= 3) text_sz = atoi(argv[2]);
    if(argc >=4 ) distribution = argv[3];
    if(argc >= 5) alphabet_length = std::atoi(argv[4]);
    if (alphabet_length == 0) {

      alphabet_length = -1;
    }

    std::string alphabet = read_alphabet(file_path);

    std::transform(alphabet.begin(), alphabet.end(), alphabet.begin(),
      [] (unsigned char c){return std::tolower(c);});


    std::vector<char> c_alphabet;

    if (alphabet_length == -1) {
      c_alphabet.assign(alphabet.begin(), alphabet.end());
    } else {
      c_alphabet.assign(alphabet.begin(), alphabet.begin() + alphabet_length);
    }


    dist_parameters params = {0, alphabet_length};
    std::string result = generator(c_alphabet, distribution, text_sz).generate(params);

    std::cout << result << std::endl;
  }else{
    std::cout << "Invalid cmd arguments...\n1.Alphabet File path"
                 "\n2.Text Size: 20 (default)"
                 "\n3.Distribution: uniform (default)/zipf"
                 "\n4.Alphabet Length: -1 (default) uses all letters" << std::endl;
  }
  
  return 0;
}