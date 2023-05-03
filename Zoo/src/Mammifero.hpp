#include <iostream>
#include "Animale.hpp"
using namespace std;
#ifndef MAMMIFERO_HPP_
#define MAMMIFERO_HPP_

enum colore {
	BIANCO = 0, NERO = 1, GRIGIO = 2, MULTICOLOR = 3, MARRONE = 4
};

class Mammifero : public virtual Animale {
public:
	Mammifero();
	Mammifero(string nome, float peso, colore coloreMantello);
	virtual ~Mammifero();
	void emettiSuono();
	void mangia();
	void azione();
	void cammina();

protected:
	colore mantello;

};

#endif /* MAMMIFERO_HPP_ */
