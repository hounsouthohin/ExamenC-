#include "Quete.h"
#include"Aventurier.h"
#include<iostream>
Aventurier::Aventurier(int _niveau) :quetes(0) { niveau = _niveau; }
Aventurier::Aventurier(int _niveau,std::vector<Quete*> _quetes)
{
	niveau = _niveau;
	quetes = _quetes;
}
Aventurier::~Aventurier()
{
	for (auto it = quetes.begin(); it != quetes.end(); ++it)
	{
		if (*it != NULL) {
			delete* it;
			*it = nullptr;
		}

	}
}
void Aventurier::afficherQuete()
{
	for (auto it = quetes.begin(); it != quetes.end(); ++it)
	{
		std::cout << (*it)->to_string() << std::endl;
	}
}
void Aventurier::ajouterQuete(Quete* quete)
{
	quetes.push_back(quete);
}
int	Aventurier::getNiv() { return niveau; }

