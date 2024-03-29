#include <iostream>
#include <memory>
#include <vector>

using namespace std;

#ifndef ANIMALE_HPP_
#define ANIMALE_HPP_

class Animale {
public:
	bool affamato;

	Animale(string, float);
	virtual ~Animale();
	virtual void emettiSuono() = 0; // metodo virtuale
	virtual void mangia() = 0; // metodo virtuale
	string getName();
	void setName(string name);
	float getPeso();
	void setPeso(float peso);

protected:
	string nome;
	float peso;
};



#endif /* ANIMALE_HPP_ */
