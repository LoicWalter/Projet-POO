#include "Personnel_mapTB.h"


namespace NS_Comp_Mappage {




	Personnel_mapTB::Personnel_mapTB(void)
	{

		this->getAdresse = gcnew Adresse_mapTB();
	}

	String^ Personnel_mapTB::Select() {
		return "SELECT [id_personnel], [nom], [prenom], [superieur], [date_embauche],[pays], [ville], [code_postal], [numero_adresse], [adresse], [complement_adresse] FROM [Projet].[dbo].[personnel] INNER JOIN [adresse] ON ([personnel].[id_adresse] = [adresse].[id_adresse]);";
	}
	String^ Personnel_mapTB::SelectParticulierPersonnel() {
		return "SELECT [id_personnel], [nom], [prenom], [superieur], [date_embauche] FROM [Projet].[dbo].[personnel]  WHERE (id_personnel='" + this->id_personnel + "');";
	}
	String^ Personnel_mapTB::Delete() {
		return "DELETE FROM [Projet].[dbo].[personnel] WHERE (id_personnel ='" + this->id_personnel + "');";
	}
	String^ Personnel_mapTB::Insert() {
		return "INSERT INTO adresse (type_adresse,adresse,ville,code_postal,numero_adresse,complement_adresse,pays) SELECT '" + getAdresse->getType_Adress() + "', '" + getAdresse->getAdresse() + "', '" + getAdresse->getVille() + "', '" + getAdresse->getCP() + "', '" + getAdresse->getNum_Adress() + "', '" + getAdresse->getComplement() + "', '" + getAdresse->getPays() + "' WHERE NOT EXISTS (SELECT * FROM [Projet].[dbo].[adresse] WHERE type_adresse = '" + getAdresse->getType_Adress() + "' AND adresse = '" + getAdresse->getAdresse() + "' AND ville = '" + getAdresse->getVille() + "' AND code_postal = '" + getAdresse->getCP() + "' AND numero_adresse = '" + getAdresse->getNum_Adress() + "'  AND complement_adresse = '" + getAdresse->getComplement() + "' AND pays = '" + getAdresse->getPays() + "'); INSERT INTO personnel  (nom, prenom, superieur, date_embauche, id_adresse) SELECT '" + this->nom_personnel + "', '" + this->prenom_personnel + "', '" + this->superieur + "', '" + this->date_embauche + "', id_adresse FROM adresse WHERE(type_adresse = '" + getAdresse->getType_Adress() + "' AND adresse = '" + getAdresse->getAdresse() + "' AND ville = '" + getAdresse->getVille() + "' AND code_postal = '" + getAdresse->getCP() + "' AND numero_adresse = '" + getAdresse->getNum_Adress() + "' AND complement_adresse = '" + getAdresse->getComplement() + "' AND pays = '" + getAdresse->getPays() + "');";
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