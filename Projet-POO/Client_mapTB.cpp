#include "Client_mapTB.h"
#include <iostream>
using namespace std;

namespace NS_Comp_Mappage {
	String^ Client_mapTB::Select() {
		return "SELECT [id_client], [nom], [prenom], [date_naissance] FROM [Projet].[dbo].[client]";
	}

	String^ Client_mapTB::SelectParticulier() {
		return "SELECT [id_client], [nom], [prenom], [date_naissance] FROM [Projet].[dbo].[client]  WHERE (id_client='" + this->Id + "');";
	}

	String^ Client_mapTB::Delete() {
		return "DELETE FROM [Projet].[dbo].[client] WHERE (id_client ='" + this->Id + "');";
	}

	String^ Client_mapTB::Insert() {
		return "INSERT INTO client (nom, prenom, date_naissance) VALUES('" + this->nom + "','" + this->prenom + "','" + this->date_naissance + "');";
	}

	String^ Client_mapTB::Update() {
		return "UPDATE [Projet].[dbo].[client] SET nom = '" + this->nom + "', prenom = '" + this->prenom + "', date_naissance = '" + this->date_naissance + "' WHERE (id_client='" + this->Id + "');";
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