//
// Created by dimpap on 3/4/25.
//


#include <iostream>
#include "generator.h"

int main(int argc, char *argv[]){

  if(argc >= 2){
    std::string file_path = argv[1];
    std::string distribution = "uniform";
    int length = -1;
    int text_sz = 20;
    
    if(argc >=3 ) text_sz = std::stoi(argv[3]);
    if(argc >=4 ) distribution = argv[4];
    if(argc == 5) length = std::stoi(argv[5]);
    

  }else{
    std::cout << "Invalid cmd arguments...\n1.Alphabet File path"
                 "\n2.Text Size: 20 (default)"
                 "\n3.Distribution: uniform (default)/zipf"
                 "\n4.Alphabet Length: default (-1) uses all letters" << std::endl;
  }
  
  return 0;
}