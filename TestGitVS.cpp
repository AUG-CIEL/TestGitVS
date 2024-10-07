// TestGitVS.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <iomanip>
int main()

{
	std::locale::global(std::locale("fr-FR"));// pour utilisation des accents
	int choix;
	int choix2;
	{

		// Affichage du menu !
		std::cout << "Menue :\n";
		std::cout << "1- Opérations booléenes\n";
		std::cout << "2- Opérations binaires\n";
		std::cout << "3- Permutation\n";
		std::cout << "4- Inversion de bits \n";
		std::cout << "Entrez votre choix (1 à 4) : ";
		std::cin >> choix;
	} while (choix < 1 || choix >4);
	// En fonction du choix, afficher le calcul sélectionné
	using namespace std;


	switch (choix) {
	case 1:
		std::cout << "operation booléenne" << endl;

		bool varB1, varB2;
		std::cout << "B1" << setw(6) << "B2" << setw(6) << "NOM" << setw(6)
			<< "ET" << setw(6) << "OU" << setw(6) << "NONOU" << endl;
		for (int i = 0; i < 2; i++)
		{
			varB1 = i;
			for (int j = 0; j < 2; j++)
			{
				varB2 = j;
				std::cout << varB1 << setw(6) << varB2 << setw(6);
				//Calcul et afficahge du nom
				cout << !varB1 << setw(6);
				cout << !varB2 << setw(6);
				//Calcul et affichage du ET
				cout << (varB1 && varB2) << setw(6) << endl;

			}

		}
		break;
	case 2:
		std::cout << "Vous avez choisi : Équation du 2nd degré\n";



		break;
	case 3:
		std::cout << "Vous avez choisi : Calcul de la surface et du volume d'une sphère\n";


		break;
	case 4:
	{

	}
	break;
	default:
		std::cout << "Erreur : choix non valide\n";
		break;
	}




	return(0);
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer :
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
