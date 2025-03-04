//
// Created by dimpap on 3/4/25.
//

#ifndef GENERATOR_H
#define GENERATOR_H
#include <iostream>
#include <random>

enum Distribution {
    UNIFORM,
    ZIPF
};


struct dist_parameters {
    int min;
    int max;
    float q;
};

class generator{



public:
    // std::random_device                  rand_dev;
    //
    Distribution distribution;
    // std::mt19937                        gen;
    std::vector<char> alphabet;

    int text_sz;

    generator()=default;
    generator(std::vector<char> &alphabet, std::string &dist, int &text_sz );

    std::string generate(dist_parameters &params);



};


#endif //GENERATOR_H
