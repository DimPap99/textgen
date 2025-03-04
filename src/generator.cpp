//
// Created by dimpap on 3/4/25.
//


#include <generator.h>

generator::generator(std::vector<char> &alphabet, std::string &dist, int &text_sz) {
    if (dist == "uniform") {
        distribution = UNIFORM;
    }else {
        distribution = ZIPF;
    }

    this->alphabet = alphabet;

    this->text_sz = text_sz;

}

std::string generator::generate(dist_parameters &params) {
    std::string result = "";
    if (distribution == UNIFORM) {
        std::random_device                  rand_dev;
        std::mt19937                        gen(rand_dev());
        std::uniform_int_distribution<int>  distr(params.min, params.max);
        for (int i = 0; i < text_sz; i++) {
            int sampled_idx = distr(gen);
            result += alphabet[sampled_idx];
        }
    }
    return result;
}



