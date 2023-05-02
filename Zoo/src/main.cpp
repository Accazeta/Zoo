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

int main() {
	Zoo * mioZoo = new Zoo();
	shared_ptr<recinto> r1 = make_shared<recinto>();
	r1.get()->nome = "Elefanti";

	shared_ptr<recinto> r2 = make_shared<recinto>();
	r2.get()->nome = "Pipistrelli";

	shared_ptr<recinto> r3 = make_shared<recinto>();
	r3.get()->nome = "Pappagalli";

	mioZoo->addRecinto(r1);
	mioZoo->addRecinto(r2);
	mioZoo->addRecinto(r3);

	Animale * ae = new Elefante("El1", 5900.3, GRIGIO, 2.4);
	cout<< "Elefante " + ae->getName() + " è di tipo "+ typeid(ae).name()<<endl; //debug
	Mammifero * me = new Elefante("El2", 5850.7, GRIGIO, 2.6);
	cout<< "Elefante " + me->getName() + " è di tipo "+ typeid(me).name()<<endl; //debug
	Elefante * ee = new Elefante("El3", 5880.3, GRIGIO, 2.5);
	cout<< "Elefante " + ee->getName() + " è di tipo "+ typeid(ee).name()<<endl; //debug

	mioZoo->addAnimalToRecinto("Elefanti", ae);
	mioZoo->addAnimalToRecinto("Elefanti", me);
	mioZoo->addAnimalToRecinto("Elefanti", ee);




	return 0;
}
