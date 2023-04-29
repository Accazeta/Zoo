#include <iostream>
#include <memory>
#include <vector>

using namespace std;

#ifndef ANIMALE_HPP_
#define ANIMALE_HPP_

class Animale {
public:
	Animale(string nome);
	Animale(string nome, float peso);
	~Animale();
	virtual void emettiSuono();
	virtual void mangia();
	bool affamato;

private:
	string nome_;
	float peso_;
};



#endif /* ANIMALE_HPP_ */
