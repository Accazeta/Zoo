#include <iostream>
#include <memory>
#include <vector>
#include <random>
#include "Animale.hpp"
using namespace std;

Animale::Animale(string nome, float peso) {
	this->nome = nome;
	this->peso = peso;
	this->affamato = false;
};
Animale::~Animale() {
	cout<<"Un Animale è morto."<<endl;
};



