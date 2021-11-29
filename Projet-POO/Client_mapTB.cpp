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


	void Client_mapTB::setId_Client(int Id) { this->Id = Id; }
	void Client_mapTB::setNom_Client(String^ nom) { this->nom = nom; }
	void Client_mapTB::setPrenom_Client(String^ prenom) { this->prenom = prenom; }
	void Client_mapTB::setDateNaissance_Client(String^ date_naissance) { this->date_naissance = date_naissance; }


	int Client_mapTB::getId_Client(void) { return this->Id; }
	String^ Client_mapTB::getNom_Client(void) { return this->nom; }
	String^ Client_mapTB::getPrenom_Client(void) { return this->prenom; }
	String^ Client_mapTB::getDateNaissance_Client(void) { return this->date_naissance; }
	//rajouter date premier achat
}