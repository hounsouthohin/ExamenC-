#include "Quete.h"

Quete::Quete(std::string _nom, int _exp, int _nivMin, int _recompenseOr,nivDifficulte _niveau)
{
	nom = _nom;
	expRecu = _exp;
	nivMin = _nivMin;
	recompenseOr = _recompenseOr;
	niveau = _niveau;
}
Quete::~Quete()
{
}
nivDifficulte Quete::getDifficulte() { return niveau; }
int	Quete::getNivMin() { return nivMin; }
int Quete::getRecompenseOr() { return recompenseOr; }
int Quete::getExp() { return expRecu; }
std::string Quete::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");
	info.append("experience : " + std::to_string(this->getRecompenseOr()) + "\n");
	info.append("niveau minimal : " + std::to_string(this->getNivMin()) + "\n");
	info.append("recompense en or: " + std::to_string(this->getRecompenseOr()) + "\n");
	info.append("Difficulte : " + std::to_string(this->getDifficulte()));
	return info;
}