#include <iostream>
#include "Volatile.hpp"
#include "Mammifero.hpp"
using namespace std;
#ifndef PIPISTRELLO_HPP_
#define PIPISTRELLO_HPP_

class Pipistrello: private Volatile, private Mammifero {
public:
	Pipistrello(string nome, float peso, colore coloreMantello, int numUova, int potenza);
	virtual ~Pipistrello();
	void emettiSuono();
	void mangia();

private:
	int potenzaSonar; // in decibel
};

#endif /* PIPISTRELLO_HPP_ */
