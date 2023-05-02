#include <iostream>
#include <string>
#include <thread>
#include "Zoo.hpp"
#include "Animale.hpp"
#include "Mammifero.hpp"
#include "Volatile.hpp"
#include "Elefante.hpp"
#include "Pipistrello.hpp"
#include "Pappagallo.hpp"
using namespace std;

void printZoo(Zoo input) {
	for(auto &recint : input.getRecinti()) {
		cout<<"Recinto " + recint.get()->nome + " contiene: "<<endl;
		for(auto &anim : recint.get()->animali) {
			cout<<anim->getName() + " di tipo " + typeid(anim).name() + " | ";
		}
		cout<<"\n";
	}
}



int main() {
	Zoo * mioZoo = new Zoo();

	// Aggiunta recinti

	shared_ptr<recinto> r1 = make_shared<recinto>();
	r1.get()->nome = "Elefanti";

	shared_ptr<recinto> r2 = make_shared<recinto>();
	r2.get()->nome = "Pipistrelli";

	shared_ptr<recinto> r3 = make_shared<recinto>();
	r3.get()->nome = "Pappagalli";

	mioZoo->addRecinto(r1);
	mioZoo->addRecinto(r2);
	mioZoo->addRecinto(r3);

	// Aggiunta Elefanti

	Animale * ae = new Elefante("El1", 5900.3, GRIGIO, 2.4);
	cout<< "Elefante " + ae->getName() + " è di tipo "+ typeid(ae).name()<<endl; //debug
	Mammifero * me = new Elefante("El2", 5850.7, GRIGIO, 2.6);
	cout<< "Elefante " + me->getName() + " è di tipo "+ typeid(me).name()<<endl; //debug
	Elefante * ee = new Elefante("El3", 5880.3, GRIGIO, 2.5);
	cout<< "Elefante " + ee->getName() + " è di tipo "+ typeid(ee).name()<<endl; //debug

	mioZoo->addAnimalToRecinto("Elefanti", ae);
	mioZoo->addAnimalToRecinto("Elefanti", me);
	mioZoo->addAnimalToRecinto("Elefanti", ee);

	// Aggiunta pipistrelli

	Animale * api = new Pipistrello("Pip1", 1.3, NERO, 3, 180);
	Volatile * vpi = new Pipistrello("Pip2", 1.5, NERO, 4, 185.3);
	Mammifero * mpi = new Pipistrello("Pip3", 1.2, NERO, 2, 195.1);
	Pipistrello * ppi = new Pipistrello("Pip4", 1.6, NERO, 5, 191.9);

	mioZoo->addAnimalToRecinto("Pipistrelli", api);
	mioZoo->addAnimalToRecinto("Pipistrelli", vpi);
	mioZoo->addAnimalToRecinto("Pipistrelli", mpi);
	mioZoo->addAnimalToRecinto("Pipistrelli", ppi);

	// Aggiunta Pappagalli

	Animale * apa = new Pappagallo("Pap1", 2.3, 4, 0.10);
	Volatile * vpa = new Pappagallo("Pap2", 1.9, 3, 0.90);
	Pappagallo * ppa = new Pappagallo("Pap3", 2.1, 1, 0.5);

	mioZoo->addAnimalToRecinto("Pappagalli", apa);
	mioZoo->addAnimalToRecinto("Pappagalli", vpa);
	mioZoo->addAnimalToRecinto("Pappagalli", ppa);

	printZoo(*mioZoo);

	return 0;
}


