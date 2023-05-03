#include <iostream>
#include <random>  // rng
#include "Mammifero.hpp"
using namespace std;

// Costruttori
Mammifero::Mammifero(string nome, float peso, colore coloreMantello) :
		Animale(nome, peso) {
	this->mantello = coloreMantello;
}
;

//Distruttore
Mammifero::~Mammifero() {
	cout << "Un Mammifero è morto" << endl;
}
;

void Mammifero::cammina() {
	if (this->affamato) {
		return;
	} else {
		random_device rd;
		mt19937 gen(rd());
		uniform_real_distribution<> distribuzione(0, 100);
		// Estraggo un numero da 0 a 100. Se minore di 30 (30% di probabilità)
		// allora l'animale diventa affamato, altrimenti non faccio nulla
		float val = distribuzione(gen);
		if (val < 30) {
			this->affamato = true;
		}
	}
}
;

// da implementare per forza in quanto Mammifero è classe derivata di una classe base astratta
void Mammifero::emettiSuono() {
	cout << "Suono di un mammifero" << endl;
}
;

// da implementare per forza in quanto Mammifero è classe derivata di una classe base astratta
void Mammifero::mangia() {
	Animale::affamato = false;
	Animale::countdown_fame = 3;
}
;

void Mammifero::azione() {
	return Mammifero::cammina();
}

