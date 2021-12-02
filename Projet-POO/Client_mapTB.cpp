#include "Client_mapTB.h"
#include <iostream>
using namespace std;

namespace NS_Comp_Mappage {
	String^ Client_mapTB::Select() {
		return "SELECT [id_aclient], [nom], [prenom], [date_naissance], [date_premiere] FROM [Projet].[dbo].[client]";
	}

	String^ Client_mapTB::SelectParticulier() {
		return "SELECT [id_aclient], [nom], [prenom], [date_naissance], [date_premiere] FROM [Projet].[dbo].[client]  WHERE (id_aclient='" + this->Id + "');";
	}

	String^ Client_mapTB::Delete() {
		return "DELETE FROM [Projet].[dbo].[client] WHERE (id_aclient ='" + this->Id + "');";
	}

	String^ Client_mapTB::Insert() {
		return "INSERT INTO client (nom, prenom, date_naissance) VALUES('" + this->nom + "','" + this->prenom + "','" + this->date_naissance + "');";
	}

	String^ Client_mapTB::Update() {
		return "UPDATE [Projet].[dbo].[client] SET nom = '" + this->nom + "', prenom = '" + this->prenom + "', date_naissance = '" + this->date_naissance + "' WHERE (id_aclient='" + this->Id + "');";
	}


	void Client_mapTB::setid_aclient(int Id) { this->Id = Id; }
	void Client_mapTB::setNom_Client(String^ nom) { this->nom = nom; }
	void Client_mapTB::setPrenom_Client(String^ prenom) { this->prenom = prenom; }
	void Client_mapTB::setDateNaissance_Client(String^ date_naissance) { this->date_naissance = date_naissance; }
	void Client_mapTB::setDatePremier_achat(String^ date_premier_achat) { this->date_premier_achat = date_premier_achat; }

	int Client_mapTB::getid_aclient(void) { return this->Id; }
	String^ Client_mapTB::getNom_Client(void) { return this->nom; }
	String^ Client_mapTB::getPrenom_Client(void) { return this->prenom; }
	String^ Client_mapTB::getDateNaissance_Client(void) { return this->date_naissance; }
	String^ Client_mapTB::getDatePremier_achat(void) { return this->date_premier_achat; }
}