#include <iostream>
#include <fstream>
#include "Pokemon.hpp"
using namespace std;


void start() {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile <<"{\n";
  myfile <<"\t\"pokemons\": [\n";
  myfile <<"\t\t{\n";
  myfile.close();
}

void end(){
ofstream myfile;
myfile.open ("example.txt", ios::app);
myfile <<"\t]\n";
myfile <<"}";
}

int main() {
Pokemon first("Alegg", 10, 2, 3, 4);
SuperPokemon second("Igor", 10, 2, 3, 4, "sunstrike", "dodge");
SuperPokemon2 third("Max", 10, 2, 3, 4, "sun", "doge");
SuperPokemon3 fourth("Min", 10, 2, 3, 4, "strike", "do");
start();
first.jsnout();
second.jsnoutSuper();
third.jsnoutSuper2();
fourth.jsnoutSuper3();
end();
}


//g++ main.cpp pok.cpp -o main.exe