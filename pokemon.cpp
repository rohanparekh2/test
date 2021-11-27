#include "pokemon.h"
#include <vector>
#include <cstdlib>

using namespace std;

Pokemon::Pokemon() {
    pokedexID_= -1;
    name_ = "null";
    gen_ = -1;
    status_ = "null";
    species_ = "null";
    typeOne_ = "null";
    typeTwo_ = "null";
    height_ = -1;
    weight_ = -1;
    catchRate_ = -1;
}

Pokemon::Pokemon(size_t dexID, string name, size_t gen, string status,
            string species, string type1, string type2, double height,
            double weight, double catchRate) {
    pokedexID_ = dexID;
    name_ = name;
    gen_ = gen;
    status_ = status;
    species_ = species;
    typeOne_ = type1;
    typeTwo_ = type2;
    height_ = height;
    weight_ = weight;
    catchRate_ = catchRate;
}

Pokemon::Pokemon(size_t dexID) {
    bool finished = false;
    fstream read;
    read.open(Pokedex.csv);
    std::vector<std::string>> pokemon;
    string line;
    string curr;
    string val;
    while(read >> curr && finished == false) {
        getline(read, line);
        stringsteam p(line);
        while(getline(p, val, ',')) {
            pokemon.push_back(val);
        }
        int curr_pokemon = stoi(pokemon[0]);
        pokemon.clear();
        if (dexID == curr_pokemon) {
            pokedexID_ = pokemon[1];
            name_ = pokemon[2];
            gen_ = pokemon[5];
            status_ = pokemon[6];
            species_ = pokemon[7];
            typeOne_ = pokemon[9];
            typeTwo_ = pokemon[10];
            height_ = pokemon[11];
            weight_ = pokemon[12];
            catchRate_ = pokemon[24];
            finished = true;
        }
    }
}

size_t Pokemon::getDexID() {
    return pokedexID_;
}

string Pokemon::getT1() {
    return test1;
}

string Pokemon::getT2() {
    return test2;
}

size_t Pokemon::getGen() {
    return gen_;
}

string Pokemon::getStatus() {
    return status_;
}

string Pokemon::getSpecies() {
    return species_;
}

string Pokemon::getType1() {
    return typeOne_;
}

string Pokemon::getType2() {
    return typeTwo_;
}

size_t Pokemon::getHeight() {
    return height_;
}

size_t Pokemon::getWeight() {
    return weight_;
}

size_t Pokemon::getCatchRate() {
    return catchRate_;
}
