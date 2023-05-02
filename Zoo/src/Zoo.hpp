#include <iostream>
#include <memory>
#include <vector>

#include "Animale.hpp"
using namespace std;

#ifndef ZOO_HPP_
#define ZOO_HPP_

struct recinto {
	string nome;
	vector<Animale*> animali;
};

class Zoo {

public:
	void addRecinto(shared_ptr<recinto> r);
	void addAnimalToRecinto(int index, Animale* daAggiungere);
	void addAnimalToRecinto(string name, Animale* daAggiungere);
	void daiDaMangiare();
	vector<shared_ptr<recinto>> getRecinti();
	Zoo();
	~Zoo();

private:
	vector<shared_ptr<recinto>> recinti_;
};

#endif /* ZOO_HPP_ */
