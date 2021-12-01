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
- article *				fait
- stocks *				en cours
- commande *			en cours
- payement *			fait
- personnel *			fait

-------- Autre ---------
- faire lien entre adresse et client/personnel						fait mais a revoir les statics
\->changer diagramme classe et voir avec tuteur si bon chemin		fait
- finir interface pour les 4 autres gestions						fait
- rajouter les noms boutons manquants interface 1					fait
- ajouter les click bouton pour client								fait
- ajouter les dates premieres commande a client_map et service		fait mais a revoir
- refaire interface commande pour rajouter facture et payement		
- enlever adresse dans interface client								fait
- rajouter commentaire												en cours
- mettre en place la facture
- click bouton pour les autres										en cours
- fermer fenetre et retour au menu
- revoir BDD														fait (avec sylvain)
- requetes clients													fait
- requetes personnels												fait a revoir pour update
- requetes pour les statistiques									en cours
- requetes commande
- requetes articles													fait
- faire les variations 
- test unitaire / fonctionnel
/-> simple unitaire utiliser vs

REFERENCE -> voir comment recuperer les premieres lettres, date etc...
*/						