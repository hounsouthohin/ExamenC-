#pragma once
#include <string>
#include<vector>
#include"Quete.h"
class Aventurier
{
protected:
	int niveau;
	std::vector<Quete*>quetes;
	//Constructeur et surcharge
public:
	Aventurier(int _niveau);
	Aventurier(int niveau,std::vector<Quete*> quetes);
	~Aventurier();

	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();
};