#include <iostream>
#include <memory>
#include <vector>

#include "Animale.hpp"
using namespace std;

#ifndef ZOO_HPP_
#define ZOO_HPP_

struct recinto {
	int id;
	string nome;
	vector<unique_ptr<Animale>> recinto_animali;
};

static int count = 0;

class Zoo {

public:
	void addRecinto(recinto r);
	void addAnimalToRecinto(int index, unique_ptr<Animale> daAggiungere);
	void daiDaMangiare();
	Zoo();
	~Zoo();

private:
	vector<recinto> recinti_;

};

#endif /* ZOO_HPP_ */
