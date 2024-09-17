#include"Factory.h"
#include"Quete.h"
#include<string>
#include"cstdlib"
#include"Utilitaire.h"
enum nivDifficulte {
	Facile,
	Moyen,
	Difficile
};
Quete* Factory::getRandomQuete()
{
	Quete* quete(0);

	//Generer statistiques aleatoires
	int nivMin(0);
	int recompenseOr(0);
	int expRecu(0);
	int proba = Utilitaire::genererNb(1, 101);
	//Generer type aleatoire
	nivDifficulte niveau = nivDifficulte::Facile;
	if (proba <= 75)
	{
		niveau = (nivDifficulte)nivDifficulte::Facile;
		nivMin = Utilitaire::genererNb(1, 11);
		recompenseOr = Utilitaire::genererNb(100, 1001);
		expRecu = Utilitaire::genererNb(100, 2000);
	}
	else if (proba <= 15)
	{
		niveau = (nivDifficulte)nivDifficulte::Moyen;
		nivMin = Utilitaire::genererNb(10, 26);
		recompenseOr = Utilitaire::genererNb(1000, 5001);
		expRecu = Utilitaire::genererNb(2000, 4000);
	}
	else
	{
		niveau = (nivDifficulte)nivDifficulte::Difficile;
		nivMin = Utilitaire::genererNb(25, 100);
		recompenseOr = Utilitaire::genererNb(5000, 35001);
		expRecu = Utilitaire::genererNb(4000, 14001);
	}
	quete = new Quete("Quete fantastique", expRecu, nivMin, recompenseOr,niveau);
	return quete;
}
