#include <iostream>
#include "Animale.hpp"
using namespace std;

#ifndef UCCELLO_HPP_
#define UCCELLO_HPP_

class Volatile: public virtual Animale {
public:
	Volatile(string nome, float peso, int numUova);
	virtual ~Volatile();
	void emettiSuono();
	void mangia();
	void azione();

protected:
	int numUova;
	void vola();
};

#endif /* UCCELLO_HPP_ */
