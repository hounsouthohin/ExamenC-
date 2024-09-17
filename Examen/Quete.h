#pragma once
#include <string>
class Quete
{
protected:
	enum nivDifficulte niveau;
	int nivMin;
	int recompenseOr;
	int expRecu;
	std::string nom;
	//Constructeur et surcharge
public:
	Quete(std::string _nom,int _exp, int _nivMin, int _recompenseOr,nivDifficulte niveau);
	~Quete();

	nivDifficulte getDifficulte();
	int getNivMin();
	int getRecompenseOr();
	int getExp();

	virtual std::string to_string();

};

