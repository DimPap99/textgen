//
// Created by dimpap on 3/4/25.
//

#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>

inline std::string read_alphabet(std::string path, int length = -1){
    if(std::filesystem::exists(path)){
      std::ifstream file(path);
      std::ostringstream buffer;
      buffer << file.rdbuf();
      if(length != -1){
        return buffer.str().substr(0,length);
      }
      return buffer.str();
    }

    return "";

}




#endif //UTILS_H
