#include <iostream>
#include "Volatile.hpp"
#include "Mammifero.hpp"
using namespace std;
#ifndef PIPISTRELLO_HPP_
#define PIPISTRELLO_HPP_

class Pipistrello: public Volatile, public Mammifero {
public:
	Pipistrello(string nome, float peso, colore coloreMantello, int numUova, int potenza);
	virtual ~Pipistrello();
	void emettiSuono();
	void mangia();
	void azione();
	string getName();
	void setName(string name);
	float getPeso();
	void setPeso(float peso);
	colore getColore();
	void setColore(colore c);
	int getNumUova();
	void setNumUova(int num);
	float getPotenza();
	void setPotenza(float pot);


private:
	int potenzaSonar; // in decibel
};

#endif /* PIPISTRELLO_HPP_ */
