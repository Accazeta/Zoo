#include <iostream>
#include <memory>
#include <vector>
#include "Animale.hpp"
using namespace std;

Animale::Animale(string nome) : nome_(nome) {};
Animale::Animale(string nome, float peso) : nome_(nome), peso_(peso) {};
Animale::~Animale() {};
