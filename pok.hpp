#pragma once


#include <string>
class Pokemon
{
private:

std::string m_PokemonName="Aleg";
int m_PokemonHP=20; 
int m_Pokemonattack=1;
int m_Pokemondefense=3; 
int m_Pokemonspeed=4;


public:
   /*User();
    User(std::string l_userName);
    User(std::string l_userName, std::string l_userEmail);
    User(std::string l_userName, std::string l_userEmail, std::string l_userSurname);
    User(std::string l_userName, std::string l_userEmail, std::string l_userSurname, std::string l_userLogin);
    */
    Pokemon(std::string l_PokemonName, int l_PokemonHP, int l_Pokemonattack, int l_Pokemondefense, int l_Pokemonspeed);



    void setPokemonName(std::string l_PokemonName);
    void setPokemonHP(int l_PokemonHP);
    void setPokemonattack(int l_Pokemonattack);
    void setPokemondefense(int l_Pokemondefense);
    void setPokemonspeed(int l_Pokemonspeed);

    std::string getPokemonName(); 
    int getPokemonHP(); 
    int getPokemonattack();
    int getPokemondefense();
    int getPokemonspeed();

void jsnout();

    void print();
    ~Pokemon();
};