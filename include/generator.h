//
// Created by dimpap on 3/4/25.
//

#ifndef GENERATOR_H
#define GENERATOR_H
#include <iostream>
enum Distribution {
    UNIFORM,
    ZIPF
};


class generator{

public:
    Distribution distribution;
    char* alphabet;

    int text_sz;

    generator()=default;
    generator(std::string dist, int alphabet_length, int text_sz );

    std::string generate();

};


#endif //GENERATOR_H
