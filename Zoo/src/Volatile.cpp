#include <iostream>
#include <random>
#include "Animale.hpp"
#include "Volatile.hpp"
using namespace std;
// Costruttore
Volatile::Volatile(string nome, float peso, int numUova)
	: Animale(nome, peso){
	this->numUova = numUova;
};

// Distruttore
Volatile::~Volatile() {};

void Volatile::vola() {
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> distribuzione(0,100);
	// Estraggo un numero da 0 a 100. Se minore di 40 (40% di probabilità)
	// allora il volatile diventa affamato, altrimenti non faccio nulla
	float val = distribuzione(gen);
	if(val < 40) {
		this->affamato = true;
	}
};

void Volatile::emettiSuono() {
	cout<<"Suono di un Volatile\n";
};

void Volatile::mangia() {
	Animale::affamato = false;
};

