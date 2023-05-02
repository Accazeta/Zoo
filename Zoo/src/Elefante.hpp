#include <iostream>
#include "Mammifero.hpp"
#include "Zoo.hpp"
using namespace std;
#ifndef ELEFANTE_HPP_
#define ELEFANTE_HPP_

class Elefante : public Mammifero {
public:

	Elefante(string nome, float peso, colore mantello, float lenProb);
	virtual ~Elefante();
	void emettiSuono();
	void mangia();
	string getName();
	void setName(string name);
	float getPeso();
	void setPeso(float peso);
	colore getColore();
	void setColore(colore c);
	float getLenProb();
	void setLenProb(float len);

private:
	float lenProboscide_;
	void sfondaRecinto(recinto r);
};




#endif /* ELEFANTE_HPP_ */
