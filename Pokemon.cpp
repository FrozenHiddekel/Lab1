#include "Pokemon.hpp"
#include <iostream>



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

    Pokemon::~Pokemon()
{
}