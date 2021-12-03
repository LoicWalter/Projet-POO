#include "Commande_service.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Commande_service::Commande_service(void) {
		this->Cad = gcnew CAD();
		this->CommandeMappTB = gcnew Commande_mapTB();
		this->AdressemapppTB = gcnew Adresse_mapTB();
	}
	DataSet^ Commande_service::Commandes(String^ dataTableName){
		return this->Cad->getRows(this->CommandeMappTB->Select(), dataTableName);
	}
	DataSet^ Commande_service::FactureLoad(int id, String^ dataTableName) {
		CommandeMappTB->setId_commande(id);
		return this->Cad->getRows(this->CommandeMappTB->SelectFacture(), dataTableName);
	}
	DataSet^ Commande_service::FactureLoad2(int id, String^ dataTableName) {
		CommandeMappTB->setId_commande(id);
		return this->Cad->getRows(this->CommandeMappTB->SelectFacture2(), dataTableName);
	}
	DataSet^ Commande_service::CommandesClient(String^ dataTableName) {
		return this->Cad->getRows(this->CommandeMappTB->Select1(), dataTableName);
	}
	DataSet^ Commande_service::CommandesArticle(String^ dataTableName) {
		return this->Cad->getRows(this->CommandeMappTB->Select2(), dataTableName);
	}
	DataSet^ Commande_service::CommandesArticleCommande(int id, String^ dataTableName) {
		CommandeMappTB->setId_commande(id);
		return this->Cad->getRows(this->CommandeMappTB->Select3(), dataTableName);
	}

	void Commande_service::setIdCommande(int id) {
		CommandeMappTB->setId_commande(id);
	}



	void Commande_service::AddCommande(String^ reference, String^ date_emission, String^ date_livraison, String^ pays, String^ complementaire, String^ nom_rue, String^ ville, int CP, int num_adresse, int id_aclient){
		CommandeMappTB->setReference(reference);
		CommandeMappTB->setDate_emission(date_emission);
		CommandeMappTB->setDate_livraison(date_emission);
		CommandeMappTB->setid_aclient(id_aclient);
		AdressemapppTB->setPays(pays);
		AdressemapppTB->setComplement(complementaire);
		AdressemapppTB->setAdress(nom_rue);
		AdressemapppTB->setVille(ville);
		AdressemapppTB->setCP(CP);
		AdressemapppTB->setNum_Adress(num_adresse);
		this->Cad->actionRows(this->CommandeMappTB->Insert());
	}
	void Commande_service::DeleteCommande(int id){
		CommandeMappTB->setId_commande(id);
		this->Cad->actionRows(this->CommandeMappTB->Delete());
	}
	void Commande_service::UpdateCommande(int id, String^ reference, String^ date_emission, String^ date_livraison, int TVA, float HT, float TTC, String^ remise_commerciale){
		CommandeMappTB->setId_commande(id);
		CommandeMappTB->setReference(reference);
		CommandeMappTB->setDate_emission(date_emission);
		CommandeMappTB->setDate_livraison(date_emission);
		CommandeMappTB->setTVA(TVA);
		CommandeMappTB->setPrixHT(HT);
		CommandeMappTB->setPrixTTC(TTC);
		CommandeMappTB->setRemise_commerciale(remise_commerciale);

		this->Cad->actionRows(this->CommandeMappTB->Update());
	}
	void Commande_service::AddArticleCommande(int id_commande, int id_article, int quantite) {
		CommandeMappTB->setId_commande(id_commande);
		CommandeMappTB->setId_article(id_article);
		CommandeMappTB->setQuantite(quantite);

		this->Cad->actionRows(this->CommandeMappTB->AddArticle());
	}
	DataSet^ Commande_service::PrixTotal(int id_commande, String^ dataTableName) {
		CommandeMappTB->setId_commande(id_commande);
		return this->Cad->getRows(this->CommandeMappTB->Select4(), dataTableName);
	}















}