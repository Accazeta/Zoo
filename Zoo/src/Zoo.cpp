#include <iostream>
#include <memory>
#include <vector>
#include <typeinfo> // debug

#include "Zoo.hpp"
#include "Animale.hpp"
using namespace std;

Zoo::Zoo() {
}

Zoo::~Zoo() {
}

void Zoo::addRecinto(shared_ptr<recinto> r) {
	this->recinti_.push_back(r);
	//debug
	cout << "Aggiunto recinto " + r.get()->nome << endl;
}
;

void Zoo::addAnimalToRecinto(int index, Animale *daAggiungere) {
	this->recinti_[index].get()->animali.push_back(daAggiungere);
}

void Zoo::addAnimalToRecinto(string name, Animale *daAggiungere) {
	int i = 0;

	for (auto &rec : this->recinti_) {
		if (rec.get()->nome == name) {
			this->recinti_[i].get()->animali.push_back(daAggiungere);
			// debug
			cout
					<< "Ho aggiunto " + daAggiungere->getName() + " di tipo "
							+ typeid(daAggiungere).name() + " al recinto "
							+ this->recinti_[i].get()->nome<<endl;
			return;
		}
		i++;
	}
}



vector<shared_ptr<recinto>> Zoo::getRecinti() {
	return this->recinti_;
}

int Zoo::contaAnimali() {
	int result = 0;
	for(auto &rec : this->recinti_) {
		for(auto &anim: rec.get()->animali) {
			result++;
		}
	}
	return result;
};

void Zoo::avvia() {

	while(contaAnimali() > 0) {
		for(auto &rec : this->recinti_) {
			for(auto &anim : rec.get()->animali) {
				anim->azione();
			}
		}
	}
};
