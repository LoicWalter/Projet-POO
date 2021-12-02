#include "Stock_mapTB.h"

namespace NS_Comp_Mappage{
	String^ Stock_mapTB::Select(void) {
		return "SELECT [id_article], [nom_article], [nature], [couleur], [quantite], [prix_HT_], [prix_TTC_], [prixAchat], [MargeCommerciale], [TVA], [seuil_reappro] FROM [Projet].[dbo].[article] WHERE (disponible = 1);";
	}
	String^ Stock_mapTB::SelectParticulier(void) {
		return "SELECT [id_article], [nom_article], [nature], [couleur], [quantite], [prix_HT_], [prix_TTC_], [prixAchat], [MargeCommerciale], [TVA], [seuil_reappro] FROM [Projet].[dbo].[article] WHERE (id_article='" + this->id_stock + "' AND disponible = 1);";
	}
	String^ Stock_mapTB::Insert(void) {
		return "INSERT INTO article (nom_article, couleur, nature, quantite, prix_HT_,prix_TTC_, prixAchat, MargeCommerciale, TVA, seuil_reappro, disponible) SELECT '" + this->nom + "', '" + this->couleur + "', '" + this->nature + "', '" + this->nbr_exemplaire + "', REPLACE('" + this->prixHT + "',',','.'), REPLACE('" + this->prixTTC + "',',','.'), REPLACE('" + this->prixAchat + "',',','.'), '" + this->Marge + "', '" + this->TVA + "', '" + this->seuil + "', '1' WHERE NOT EXISTS (SELECT * FROM [Projet].[dbo].[article] WHERE nom_article = '" + this->nom + "' AND couleur = '" + this->couleur + "' AND nature = '" + this->nature + "' AND quantite = '" + this->nbr_exemplaire + "' AND Prix_HT_ =  REPLACE('" + this->prixHT + "',',','.') AND Prix_TTC_ =  REPLACE('" + this->prixTTC + "',',','.') AND PrixAchat =  REPLACE('" + this->prixAchat + "',',','.') AND MargeCommerciale = '" + this->Marge + "' AND TVA = '" + this->TVA + "'AND seuil_reappro = '" + this->seuil + "'); UPDATE [Projet].[dbo].[article] SET disponible='1'  WHERE (nom_article = '" + this->nom + "' AND nature = '" + this->nature + "' AND couleur = '" + this->couleur + "' AND quantite = '" + this->nbr_exemplaire + "' AND Prix_HT_ =  REPLACE('" + this->prixHT + "',',','.') AND Prix_TTC_ =  REPLACE('" + this->prixTTC + "',',','.') AND PrixAchat =  REPLACE('" + this->prixAchat + "',',','.') AND MargeCommerciale = '" + this->Marge + "'  AND TVA = '" + this->TVA + "'AND seuil_reappro = '" + this->seuil + "');";
	}
	String^ Stock_mapTB::Delete(void) {
		return "UPDATE [Projet].[dbo].[article] SET disponible='0'  WHERE (id_article='" + this->id_stock + "');";
	}
	String^ Stock_mapTB::Update(void) {
		return "UPDATE [Projet].[dbo].[article] SET nom_article = '" + this->nom + "', couleur = '" + this->couleur + "', nature = '" + this->nature + "', quantite = '" + this->nbr_exemplaire + "', prix_HT_ = '" + this->prixHT + "',prix_TTC_ = '" + this->prixTTC + "', prixAchat = '" + this->prixAchat + "', MargeCommerciale = '" + this->Marge + "', TVA = '" + this->TVA + "', seuil_reappro = '" + this->seuil + "' WHERE (id_article='" + this->id_stock + "');";
	}
	String^ Stock_mapTB::Chiffre_affaire(void) {
		return "";
	}
	String^ Stock_mapTB::Seuil_produit(void) {
		return "SELECT [id_article], [nom_article], [nature], [couleur], [quantite] FROM [Projet].[dbo].[article] WHERE (quantite < seuil_reappro AND disponible=1);";
	}
	String^ Stock_mapTB::Panier_moyen(void) {
		return "";
	}
	String^ Stock_mapTB::Top10(void) {
		return "";
	}
	String^ Stock_mapTB::Bot10(void) {
		return "";
	}
	String^ Stock_mapTB::Val_com(void) {
		return "SELECT SUM(quantite * prix_HT_) AS ValeurCommerciale FROM article WHERE (disponible = 1) ;";
	}
	String^ Stock_mapTB::Val_achat(void) {
		return "SELECT SUM(quantite * prixAchat) AS ValeurAchat FROM article WHERE (disponible = 1) ;";
	}
	String^ Stock_mapTB::Montant_achat(void) {
		return "";
	}

	void Stock_mapTB::setId_Stock(int id_stock) { this->id_stock = id_stock; }
	void Stock_mapTB::setNom(String^ nom) { this->nom = nom; }
	void Stock_mapTB::setNature(String^ nature) { this->nature = nature; }
	void Stock_mapTB::setCouleur(String^ couleur) { this->couleur = couleur; }
	void Stock_mapTB::setNbr_exemplaire(int nbr_exemplaire) { this->nbr_exemplaire = nbr_exemplaire; }
	void Stock_mapTB::setPrixHT(float prixHT) { this->prixHT = prixHT; }
	void Stock_mapTB::setPrixTTC(float prixTTC) { this->prixTTC = prixTTC; }
	void Stock_mapTB::setPrixAchat(float prixAchat) { this->prixAchat = prixAchat; }
	void Stock_mapTB::setMarge(int Marge) { this->Marge = Marge; }
	void Stock_mapTB::setTVA(int TVA) { this->TVA = TVA; }
	void Stock_mapTB::setSeuil(int seuil) { this->seuil = seuil; }
	void Stock_mapTB::setDispo(bool dispo) { this->dispo = dispo; }

	int Stock_mapTB::getId_Stock(void) { return this->id_stock;  }
	String^ Stock_mapTB::getNom(void) { return this->nom; }
	String^ Stock_mapTB::getNature(void) { return this->nature; }
	String^ Stock_mapTB::getCouleur(void) { return this->couleur; }
	int Stock_mapTB::getNbr_exemplaire(void) { return this->nbr_exemplaire; }
	float Stock_mapTB::getPrixHT(void) { return this->prixHT; }
	float Stock_mapTB::getPrixTTC(void) { return this->prixTTC; }
	float Stock_mapTB::getPrixAchat(void) { return this->prixAchat; }
	int Stock_mapTB::getMarge(void) { return this->Marge; }
	int Stock_mapTB::getTVA(void) { return this->TVA; }
	int Stock_mapTB::getSeuil(void) { return this->seuil; }
	bool Stock_mapTB::getDispo(void) { return this->dispo;  }
}
