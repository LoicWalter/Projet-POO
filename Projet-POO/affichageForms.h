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
- adresse_map/service
- article *
- stocks *
- commande *
- payement *
- personnel *

-------- Autre ---------
- faire lien entre adresse et client/personnel
\->changer diagramme classe et voir avec tuteur si bon chemin
- finir interface pour les 4 autres gestions
- rajouter les noms boutons manquants interface 1
- ajouter les click bouton pour client
- ajouter les dates premieres commande a client_map et service

plutard:
- click bouton pour les autres 
- fermer fenetre et retour au menu
- requetes*/