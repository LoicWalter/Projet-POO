#include "Stock_mapTB.h"

namespace NS_Comp_Mappage{
	String^ Stock_mapTB::Select(void) {
		return "";
	}
	String^ Stock_mapTB::Insert(void) {
		return "";
	}
	String^ Stock_mapTB::Delete(void) {
		return "";
	}
	String^ Stock_mapTB::Update(void) {
		return "";
	}
	String^ Stock_mapTB::Chiffre_affaire(void) {
		return "";
	}
	String^ Stock_mapTB::Seuil_produit(void) {
		return "";
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
		return "";
	}
	String^ Stock_mapTB::Val_achat(void) {
		return "";
	}
	String^ Stock_mapTB::Montant_achat(void) {
		return "";
	}

	void Stock_mapTB::setId_Stock(int id_stock) { this->id_stock = id_stock; }
	void Stock_mapTB::setNom(String^ nom) { this->nom = nom; }
	void Stock_mapTB::setNbr_exemplaire(int nbr_exemplaire) { this->nbr_exemplaire = nbr_exemplaire; }
	void Stock_mapTB::setPrixHT(float prixHT) { this->prixHT = prixHT; }
	void Stock_mapTB::setTVA(float TVA) { this->TVA = TVA; }
	void Stock_mapTB::setSeuil(int seuil) { this->seuil = seuil; }
	void Stock_mapTB::setRemise(int remise) { this->remise = remise; }
	void Stock_mapTB::setPourcentage_remise(String^ pourcentage_remise) { this->pourcentage_remise = pourcentage_remise; }

	int Stock_mapTB::getId_Stock(void) { return this->id_stock;  }
	String^ Stock_mapTB::getNom(void) { return this->nom; }
	int Stock_mapTB::getNbr_exemplaire(void) { return this->nbr_exemplaire; }
	float Stock_mapTB::getPrixHT(void) { return this->prixHT; }
	float Stock_mapTB::getTVA(void) { return this->TVA; }
	int Stock_mapTB::getSeuil(void) { return this->seuil; }
	int Stock_mapTB::getRemise(void) { return this->remise; }
	String^ Stock_mapTB::getPourcentage_remise(void) { return this->pourcentage_remise;}
}
