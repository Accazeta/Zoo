#include <iostream>
#include "Mammifero.hpp"
#include "Zoo.hpp"
using namespace std;
#ifndef ELEFANTE_HPP_
#define ELEFANTE_HPP_

class Elefante : private Mammifero {
public:

	Elefante(string nome, float peso, colore mantello, float lenProb);
	virtual ~Elefante();
	void emettiSuono();
	void mangia();


private:
	float lenProboscide_;
	void sfondaRecinto(recinto r);
};




#endif /* ELEFANTE_HPP_ */
