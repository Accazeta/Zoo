#include <iostream>
#include <random>
#include "Volatile.hpp"
#include "Animale.hpp"
#include "Pappagallo.hpp"
using namespace std;

Pappagallo::Pappagallo(string nome, float peso, int numUova, float coeff)
	: Animale(nome, peso), Volatile(nome, peso, numUova)
{
	this->coeffAbilita = coeff;
};

Pappagallo::~Pappagallo() {};

void Pappagallo::emettiSuono() {
	cout<<"Garrito\n";
};

void Pappagallo::mangia() {
	Animale::affamato = false;
};

void Pappagallo::ripeti() {
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(0, 1);

	string input;
	cout<<this->nome + " è in ascolto, parlagli: ";
	getline(cin, input);

	  // Sostituisci i caratteri casualmente
	for (char& c : input) {
	  if (dis(gen) < this->coeffAbilita) {
	    c = 'a' + (dis(gen) * 26); // Sostituisci con una lettera casuale
	  }
	}

	cout<<this->nome + " dice: " + input;

};

string Pappagallo::getName() {
	return this->nome;
}

void Pappagallo::setName(string name) {
	this->nome = name;
}

float Pappagallo::getPeso() {
	return this->peso;
}

void Pappagallo::setPeso(float peso) {
	this->peso = peso;
}

int Pappagallo::getNumUova() {
	return this->numUova;
}

void Pappagallo::setNumUova(int num) {
	this->numUova = num;
}

float Pappagallo::getCoeff() {
	return this->coeffAbilita;
}

void Pappagallo::setCoeff(float coeff) {
	this->coeffAbilita = coeff;
}
