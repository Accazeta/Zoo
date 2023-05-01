#include <iostream>
#include "Pipistrello.hpp"
#include "Mammifero.hpp"
#include "Volatile.hpp"
#include "Animale.hpp"
using namespace std;

Pipistrello::Pipistrello(string nome, float peso, colore coloreMantello, int numUova, int potenza)
	: Volatile(nome, peso, numUova), Mammifero(nome, peso, coloreMantello), Animale(nome, peso) {
	this->potenzaSonar = potenza;
};

Pipistrello::~Pipistrello() {
	cout<<"Un Pipistrello è morto"<<endl;
}

void Pipistrello::emettiSuono() {
	cout<<"Stridio"<<endl;
}

void Pipistrello::mangia() {
	this->affamato = false;
}


