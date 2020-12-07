#include "pok.hpp"
#include "pokemon.hpp"
#include <iostream>
#include <fstream>
using namespace std;

Pokemon::Pokemon(std::string l_PokemonName, int l_PokemonHP, int l_Pokemonattack, int l_Pokemondefense, int l_Pokemonspeed) {
    m_PokemonName = l_PokemonName;
    m_PokemonHP = l_PokemonHP;
    m_Pokemonattack = l_Pokemonattack;
    m_Pokemondefense = l_Pokemondefense;
    m_Pokemonspeed = l_Pokemonspeed;
}

void Pokemon::setPokemonName(std::string l_PokemonName) {
    m_PokemonName = l_PokemonName;
}


void Pokemon::setPokemonHP(int l_PokemonHP) {
    m_PokemonHP = l_PokemonHP;
}

void Pokemon::setPokemonattack(int l_Pokemonattack) {
    m_Pokemonattack = l_Pokemonattack;
}

void Pokemon::setPokemondefense(int l_Pokemondefense) {
    m_Pokemondefense = l_Pokemondefense;
}

void Pokemon::setPokemonspeed(int l_Pokemonspeed) {
    m_Pokemonspeed = l_Pokemonspeed;
}

std::string Pokemon::getPokemonName()
    {return m_PokemonName;}
int Pokemon::getPokemonHP()
    {return m_PokemonHP;}
int Pokemon::getPokemonattack()
    {return m_Pokemonattack;}
int Pokemon::getPokemondefense()
    {return m_Pokemondefense;}
int Pokemon::getPokemonspeed()
    {return m_Pokemonspeed;}


std::string SuperPokemon::getSuperPokemonSuperattack()
    {return m_Superattack;}
std::string SuperPokemon::getSuperPokemonSuperdefense()
    {return m_Superdefense;}



std::string SuperPokemon2::getSuperPokemonSuperattack()
    {return m_Superattack;}
std::string SuperPokemon2::getSuperPokemonSuperdefense()
    {return m_Superdefense;}


std::string SuperPokemon3::getSuperPokemonSuperattack()
    {return m_Superattack;}
std::string SuperPokemon3::getSuperPokemonSuperdefense()
    {return m_Superdefense;}


void Pokemon::jsnout () {
  ofstream myfile;
  myfile.open ("example.txt", ios::app);
  myfile <<"\t\t{\n";
  myfile <<"\t\t\t\"Pokemon name\": \"" << getPokemonName() << "\",\n";
  myfile <<"\t\t\t\"Pokemon HP\": \"" << getPokemonHP() << "\",\n";
  myfile <<"\t\t\t\"Pokemon attack\": \"" << getPokemonattack() << "\",\n";
  myfile <<"\t\t\t\"Pokemon defense\": \"" << getPokemondefense() << "\",\n";
  myfile <<"\t\t\t\"Pokemon speed\": \"" << getPokemonspeed() << "\"\n";
 // myfile <<"\t\t\t\"Pokemon super attack\": \"" << f << "\",";
 // myfile <<"\t\t\t\"Pokemon super defense\": \"" << g << "\",";
  myfile <<"\t\t},\n";
  myfile.close();
}


void SuperPokemon::jsnoutSuper () {
  ofstream myfile;
  myfile.open ("example.txt", ios::app);
  myfile <<"\t\t{\n";
  myfile <<"\t\t\t\"Pokemon name\": \"" << getPokemonName() << "\",\n";
  myfile <<"\t\t\t\"Pokemon HP\": \"" << getPokemonHP() << "\",\n";
  myfile <<"\t\t\t\"Pokemon attack\": \"" << getPokemonattack() << "\",\n";
  myfile <<"\t\t\t\"Pokemon defense\": \"" << getPokemondefense() << "\",\n";
  myfile <<"\t\t\t\"Pokemon speed\": \"" << getPokemonspeed() << "\"\n";
  myfile <<"\t\t\t\"Pokemon super attack\": \"" << getSuperPokemonSuperattack() << "\"\n";
  myfile <<"\t\t\t\"Pokemon super defense\": \"" << getSuperPokemonSuperdefense() << "\"\n";
  myfile <<"\t\t},\n";
  myfile.close();
}


void SuperPokemon2::jsnoutSuper2 () {
  ofstream myfile;
  myfile.open ("example.txt", ios::app);
  myfile <<"\t\t{\n";
  myfile <<"\t\t\t\"Pokemon name\": \"" << getPokemonName() << "\",\n";
  myfile <<"\t\t\t\"Pokemon HP\": \"" << getPokemonHP() << "\",\n";
  myfile <<"\t\t\t\"Pokemon attack\": \"" << getPokemonattack() << "\",\n";
  myfile <<"\t\t\t\"Pokemon defense\": \"" << getPokemondefense() << "\",\n";
  myfile <<"\t\t\t\"Pokemon speed\": \"" << getPokemonspeed() << "\"\n";
  myfile <<"\t\t\t\"Pokemon super attack\": \"" << getSuperPokemonSuperattack() << "\"\n";
  myfile <<"\t\t\t\"Pokemon super defense\": \"" << getSuperPokemonSuperdefense() << "\"\n";
  myfile <<"\t\t},\n";
  myfile.close();
}


void SuperPokemon3::jsnoutSuper3 () {
  ofstream myfile;
  myfile.open ("example.txt", ios::app);
  myfile <<"\t\t{\n";
  myfile <<"\t\t\t\"Pokemon name\": \"" << getPokemonName() << "\",\n";
  myfile <<"\t\t\t\"Pokemon HP\": \"" << getPokemonHP() << "\",\n";
  myfile <<"\t\t\t\"Pokemon attack\": \"" << getPokemonattack() << "\",\n";
  myfile <<"\t\t\t\"Pokemon defense\": \"" << getPokemondefense() << "\",\n";
  myfile <<"\t\t\t\"Pokemon speed\": \"" << getPokemonspeed() << "\"\n";
  myfile <<"\t\t\t\"Pokemon super attack\": \"" << getSuperPokemonSuperattack() << "\"\n";
  myfile <<"\t\t\t\"Pokemon super defense\": \"" << getSuperPokemonSuperdefense() << "\"\n";
  myfile <<"\t\t},\n";
  myfile.close();
}

    Pokemon::~Pokemon()
{
}