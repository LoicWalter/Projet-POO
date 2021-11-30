#include "Personnel_mapTB.h"

namespace NS_Comp_Mappage {

	String^ Personnel_mapTB::Select() {
		return "SELECT [id_personnel], [nom], [prenom], [superieur], [date_embauche] FROM [Projet].[dbo].[personnel]";
	}
	String^ Personnel_mapTB::SelectParticulierPersonnel() {
		return "SELECT [id_personnel], [nom], [prenom], [superieur], [date_embauche] FROM [Projet].[dbo].[personnel]  WHERE (id_personnel='" + this->id_personnel + "');";
	}
	String^ Personnel_mapTB::Delete() {
		return "DELETE FROM [Projet].[dbo].[personnel] WHERE (id_personnel ='" + this->id_personnel + "');";
	}
	String^ Personnel_mapTB::Insert() {
		return "INSERT INTO personnel (nom, prenom, superieur, date_embauche) VALUES('" + this->nom_personnel + "','" + this->prenom_personnel + "','" + this->superieur + "','" + this->date_embauche + "');";
	}
	String^ Personnel_mapTB::Update() {
		return "UPDATE [Projet].[dbo].[personnel] SET nom = '" + this->nom_personnel + "', prenom = '" + this->prenom_personnel + "',  superieur = '" + this->superieur + "', date_embauche = '" + this->date_embauche + "' WHERE (id_personnel='" + this->id_personnel + "');";
	}

	void Personnel_mapTB::setId_personnel(int Id) { this->id_personnel = Id; }
	void Personnel_mapTB::setNom_personnel(String^ nom) { this->nom_personnel = nom; }
	void Personnel_mapTB::setPrenom_personnel(String^ prenom) { this->prenom_personnel = prenom; }
	void Personnel_mapTB::setSuperieur(String^ superieur) { this->superieur = superieur; }
	void Personnel_mapTB::setDateEmbauche(String^ date_embauche) { this->date_embauche = date_embauche; }

	int Personnel_mapTB::getId_personnel(void) { return this->id_personnel; }
	String^ Personnel_mapTB::getNom_personnel(void) { return this->nom_personnel; }
	String^ Personnel_mapTB::getPrenom_personnel(void) { return this->prenom_personnel; }
	String^ Personnel_mapTB::getSuperieur(void) { return this->superieur; }
	String^ Personnel_mapTB::getDateEmbauche(void) { return this->date_embauche; }
}
