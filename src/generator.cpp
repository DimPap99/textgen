//
// Created by dimpap on 3/4/25.
//


#include <generator.h>
generator::generator(std::string dist, int alphabet_length, int text_sz) {
    if (dist == "uniform") {
        distribution = UNIFORM;
    }else {
        distribution = ZIPF;
    }

    alphabet = new char[alphabet_length];
    text_sz = text_sz;

}


