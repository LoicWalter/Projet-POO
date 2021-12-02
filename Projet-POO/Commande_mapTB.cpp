#include "Commande_mapTB.h"

namespace NS_Comp_Mappage {
	String^ Commande_mapTB::Select(void) {
		return "SELECT [client].[id_client] AS numero_client, [nom], [prenom], [reference] AS Reference_commande FROM [Projet].[dbo].[commande] INNER JOIN [client] ON ([commande].[id_client] = [client].[id_client])";
	}
	String^ Commande_mapTB::Insert(void){
		return "";
	}
	String^ Commande_mapTB::Delete(void){
		return "";
	}
	String^ Commande_mapTB::Update(void){
		return "";
	}

	void Commande_mapTB::setId_commande(int id_commande) { this->id_commande = id_commande; }
	void Commande_mapTB::setReference(String^ reference) { this->reference = reference; }
	void Commande_mapTB::setDate_emission(String^ date_emission) { this->date_emission = date_emission; }
	void Commande_mapTB::setDate_livraison(String^ date_livraison) { this->date_livraison = date_livraison; }
	void Commande_mapTB::setTVA(int TVA) { this->TVA = TVA; }
	void Commande_mapTB::setPrixHT(float prixHT) { this->prixHT = prixHT; }
	void Commande_mapTB::setPrixTTC(float prixTTC) { this->prixTTC = prixTTC; }
	void Commande_mapTB::setRemise_commerciale(String^ remise_commerciale) { this->remise_commerciale = remise_commerciale; }

	int Commande_mapTB::getId_commande(void) { return this->id_commande; }
	String^ Commande_mapTB::getReference(void) { return this->reference; }
	String^ Commande_mapTB::getDate_emission(void) { return this->date_emission; }
	String^ Commande_mapTB::getDate_livraison(void) { return this->date_livraison; }
	int Commande_mapTB::getTVA(void) { return this->TVA; }
	float Commande_mapTB::getPrixHT(void) { return this->prixHT; }
	float Commande_mapTB::getPrixTTC(void) { return this->prixTTC; }
	String^ Commande_mapTB::getRemise_commerciale(void) { return this->remise_commerciale; }
}
