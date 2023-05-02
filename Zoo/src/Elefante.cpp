#include <iostream>
#include "Mammifero.hpp"
#include "Elefante.hpp"
using namespace std;

Elefante::Elefante(string nome, float peso, colore mantello, float lenProb)
	: Animale(nome, peso), Mammifero(nome, peso, mantello)
	   {
	this->lenProboscide_ = lenProb;
};

Elefante::~Elefante() {};

void Elefante::emettiSuono() {
	cout<<"Barrito"<<endl;
};

void Elefante::sfondaRecinto(recinto r) {
	// sfonda il recinto e tutti gli animali scappano
	r.animali.clear();
	cout<<"Il recinto " + r.nome + " è vuoto!"<<endl;
};

void Elefante::mangia() {
	this->affamato = false;
}

string Elefante::getName() {
	return this->nome;
}
void Elefante::setName(string nome) {
	this->nome = nome;
}
float Elefante::getPeso() {
	return this->peso;
}
void Elefante::setPeso(float peso) {
	this->peso = peso;
}
colore Elefante::getColore() {
	return this->mantello;
}
void Elefante::setColore(colore c) {
	this->mantello = c;
}
float Elefante::getLenProb() {
	return this->lenProboscide_;
}
void Elefante::setLenProb(float len) {
	this->lenProboscide_ = len;
}
