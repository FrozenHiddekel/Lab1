#pragma once
#include "pok.hpp"

class SuperPokemon : private Pokemon {
    private:
        std::string m_Superattack;
        std::string m_Superdefense;
    public:
    SuperPokemon();
        SuperPokemon(std::string l_PokemonName, int l_PokemonHP, int l_Pokemonattack, int l_Pokemondefense, int l_Pokemonspeed,
        std::string l_Superattack, std::string l_Superdefense): 
        Pokemon(l_PokemonName, l_PokemonHP, l_Pokemonattack, l_Pokemondefense, l_Pokemonspeed){
            m_Superattack = l_Superattack;
            m_Superdefense = l_Superdefense;
        }
    void setSuperPokemonSuperattack(std::string l_Superattack);
    void setSuperPokemonSuperdefense(std::string l_Superdefense);
    void print();
    void jsnoutSuper ();
    std::string getSuperPokemonSuperattack();
    std::string getSuperPokemonSuperdefense();

};


class SuperPokemon2 : private Pokemon {
    private:
        std::string m_Superattack;
        std::string m_Superdefense;
    public:
    SuperPokemon2();
        SuperPokemon2(std::string l_PokemonName, int l_PokemonHP, int l_Pokemonattack, int l_Pokemondefense, int l_Pokemonspeed,
        std::string l_Superattack, std::string l_Superdefense): 
        Pokemon(l_PokemonName, l_PokemonHP, l_Pokemonattack, l_Pokemondefense, l_Pokemonspeed){
            m_Superattack = l_Superattack;
            m_Superdefense = l_Superdefense;
        }
    void setSuperPokemonSuperattack(std::string l_Superattack);
    void setSuperPokemonSuperdefense(std::string l_Superdefense);
    void print();
    void jsnoutSuper2 ();
    std::string getSuperPokemonSuperattack();
    std::string getSuperPokemonSuperdefense();
};

class SuperPokemon3 : private Pokemon {
    private:
        std::string m_Superattack;
        std::string m_Superdefense;
    public:
    SuperPokemon3();
        SuperPokemon3(std::string l_PokemonName, int l_PokemonHP, int l_Pokemonattack, int l_Pokemondefense, int l_Pokemonspeed,
        std::string l_Superattack, std::string l_Superdefense): 
        Pokemon(l_PokemonName, l_PokemonHP, l_Pokemonattack, l_Pokemondefense, l_Pokemonspeed){
            m_Superattack = l_Superattack;
            m_Superdefense = l_Superdefense;
        }
    void setSuperPokemonSuperattack(std::string l_Superattack);
    void setSuperPokemonSuperdefense(std::string l_Superdefense);
    void print();
    void jsnoutSuper3 ();
    std::string getSuperPokemonSuperattack();
    std::string getSuperPokemonSuperdefense();
};