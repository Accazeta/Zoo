#include <iostream>
#include "Mammifero.hpp"
#include "Elefante.hpp"
using namespace std;

Elefante::Elefante(string nome, float peso, colore mantello, float lenProb)
	: Mammifero(nome, peso, mantello),
	  Animale(nome, peso) {
	this->lenProboscide_ = lenProb;
};

Elefante::~Elefante() {};

void Elefante::emettiSuono() {
	cout<<"Barrito"<<endl;
};

void Elefante::sfondaRecinto(recinto r) {
	// sfonda il recinto e tutti gli animali scappano
	r.recinto_animali.clear();
	cout<<"Il recinto " + r.nome + " è vuoto!"<<endl;
};

void Elefante::mangia() {
	this->affamato = false;
}
