#include <iostream>
#include "Volatile.hpp"
using namespace std;

#ifndef PAPPAGALLO_HPP_
#define PAPPAGALLO_HPP_

class Pappagallo : public Volatile{
public:
	Pappagallo(string nome, float peso, int numUova, float coeff);
	virtual ~Pappagallo();
	void emettiSuono();
	void mangia();

private:
	float coeffAbilita;
	void ripeti();
};




#endif /* PAPPAGALLO_HPP_ */
