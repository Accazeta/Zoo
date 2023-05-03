#include <iostream>
#include <random>
#include "Pipistrello.hpp"
#include "Mammifero.hpp"
#include "Volatile.hpp"
#include "Animale.hpp"
using namespace std;

Pipistrello::Pipistrello(string nome, float peso, colore coloreMantello,
		int numUova, int potenza) :
		Animale(nome, peso), Volatile(nome, peso, numUova), Mammifero(nome,
				peso, coloreMantello) {
	this->potenzaSonar = potenza;
}
;

Pipistrello::~Pipistrello() {
	cout << "Un Pipistrello è morto" << endl;
}

void Pipistrello::emettiSuono() {
	cout << "Stridio" << endl;
}

void Pipistrello::mangia() {
	this->affamato = false;
}

void Pipistrello::azione() {
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> distribuzione(0, 100);
	// Estraggo un numero da 0 a 100. Se minore di 50 (50% di probabilità)
	// eseguo l'azione
	float val = distribuzione(gen);
	if (val < 50) {
		return this->cammina();
	} else {
		return this->vola();
	}
}

string Pipistrello::getName() {
	return this->nome;
}

void Pipistrello::setName(string name) {
	this->nome = name;
}

float Pipistrello::getPeso() {
	return this->peso;
}

void Pipistrello::setPeso(float peso) {
	this->peso = peso;
}

colore Pipistrello::getColore() {
	return this->mantello;
}

void Pipistrello::setColore(colore c) {
	this->mantello = c;
}

int Pipistrello::getNumUova() {
	return this->numUova;
}

void Pipistrello::setNumUova(int num) {
	this->numUova = num;
}

float Pipistrello::getPotenza() {
	return this->potenzaSonar;
}

void Pipistrello::setPotenza(float pot) {
	this->potenzaSonar = pot;
}
