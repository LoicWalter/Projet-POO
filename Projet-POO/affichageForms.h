#pragma once
#include "MyForm.h"

using namespace System::Windows::Forms;
using namespace ProjetPOO;

ref class affichageForms
{
public:
	affichageForms();
	void afficherForms();

};

/* A faire encore :
classe:
- adresse_map/service	fait
- article *
- stocks *
- commande *
- payement *
- personnel *			fait

-------- Autre ---------
- faire lien entre adresse et client/personnel						en cours
\->changer diagramme classe et voir avec tuteur si bon chemin
- finir interface pour les 4 autres gestions						fait
- rajouter les noms boutons manquants interface 1					fait
- ajouter les click bouton pour client								fait
- ajouter les dates premieres commande a client_map et service
- refaire interface commande pour rajouter facture et payement

plutard:
- click bouton pour les autres										en cours
- fermer fenetre et retour au menu
- requetes															en cours
- requetes pour les statistiques
- faire les variations 
- test unitaire / fonctionnel
*/						