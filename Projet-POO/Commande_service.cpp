#include "Commande_service.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Commande_service::Commande_service(void) {
		this->Cad = gcnew CAD();
		this->CommandeMappTB = gcnew Commande_mapTB();
	}
	DataSet^ Commande_service::Commandes(String^ dataTableName){
		return this->Cad->getRows(this->CommandeMappTB->Select(), dataTableName);
	}
	DataSet^ Commande_service::CommandesClient(String^ dataTableName) {
		return this->Cad->getRows(this->CommandeMappTB->Select1(), dataTableName);
	}
	void Commande_service::AddCommande(String^ reference, String^ date_emission, String^ date_livraison, int TVA, float HT, float TTC, String^ remise_commerciale){
		CommandeMappTB->setReference(reference);
		CommandeMappTB->setDate_emission(date_emission);
		CommandeMappTB->setDate_livraison(date_emission);
		CommandeMappTB->setTVA(TVA);
		CommandeMappTB->setPrixHT(HT);
		CommandeMappTB->setPrixTTC(TTC);
		CommandeMappTB->setRemise_commerciale(remise_commerciale);

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
}