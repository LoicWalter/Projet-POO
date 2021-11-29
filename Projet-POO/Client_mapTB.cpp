#include "Client_mapTB.h"

namespace NS_Comp_Mappage {
	String^ Client_mapTB::Select() {
		return "SELECT [id], [nom], [prenom] FROM [Projet].[dbo].[Client]";
	}

	String^ Client_mapTB::Delete() {
		return "";
	}

	String^ Client_mapTB::Insert() {
		return "";
	}

	String^ Client_mapTB::Update() {
		return "";
	}


	void Client_mapTB::setId(int Id)
	{
		this->Id = Id;
	}
	void Client_mapTB::setNom(String^ nom)
	{
		this->nom = nom;
	}
	void Client_mapTB::setPrenom(String^ prenom)
	{
		this->prenom = prenom;
	}
	void Client_mapTB::setDateNaissance(String^ DateNaissance)
	{
		this->prenom = prenom;
	}


	int Client_mapTB::getId(void) { return this->Id; }
	String^ Client_mapTB::getNom(void) { return this->nom; }
	String^ Client_mapTB::getPrenom(void) { return this->prenom; }
	String^ Client_mapTB::getDateNaissance(void) { return this->prenom; }

}