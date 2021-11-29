#include "Personnel_mapTB.h"

namespace NS_Comp_Mappage {

	String^ Personnel_mapTB::Select() {
		return "";
	}
	String^ Personnel_mapTB::Delete() {
		return "";
	}
	String^ Personnel_mapTB::Insert() {
		return "";
	}
	String^ Personnel_mapTB::Update() {
		return "";
	}

	void Personnel_mapTB::setId_personnel(int Id) { this->id_personnel = Id; }
	void Personnel_mapTB::setNom_personnel(String^ nom) { this->nom_personnel = nom; }
	void Personnel_mapTB::setPrenom_personnel(String^ prenom) { this->prenom_personnel = prenom; }
	void Personnel_mapTB::setDateEmbauche(String^ date_embauche) { this->date_embauche = date_embauche; }

	int Personnel_mapTB::getId_personnel(void) { return this->id_personnel; }
	String^ Personnel_mapTB::getNom_personnel(void) { return this->nom_personnel; }
	String^ Personnel_mapTB::getPrenom_personnel(void) { return this->prenom_personnel; }
	String^ Personnel_mapTB::getDateEmbauche(void) { return this->date_embauche; }
}
