#include "Client_service.h"
#include "CAD.h"
#include "Client_mapTB.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Client_service::Client_service(void) {
		this->Cad = gcnew CAD();
		this->ClientMappTB = gcnew Client_mapTB();
	}
	DataSet^ Client_service::Clients(String^ dataTableName) {
		return this->Cad->getRows(this->ClientMappTB->Select(), dataTableName);
	}
	void Client_service::AddClient(String^ nom, String^ prenom, String^ DateNaissance/*, String^ DatePremierAchat*/) {
		ClientMappTB->setNom_Client(nom);
		ClientMappTB->setPrenom_Client(prenom);
		ClientMappTB->setDateNaissance_Client(DateNaissance);
		//ClientMappTB->setDatePremierAchat_Client(DatePremierAchat);

		this->Cad->actionRows(this->ClientMappTB->Insert());
	}
	void Client_service::DeleteClient(int id_aclient) {
		this->ClientMappTB->setid_aclient(id_aclient);
		this->Cad->actionRows(this->ClientMappTB->Delete());
	}
	void Client_service::UpdateClient(int id_aclient, String^ nom, String^ prenom, String^ DateNaissance/*, String^ DatePremierAchat*/ ) {
		ClientMappTB->setid_aclient(id_aclient);
		ClientMappTB->setNom_Client(nom);
		ClientMappTB->setPrenom_Client(prenom);
		ClientMappTB->setDateNaissance_Client(DateNaissance);
		//ClientMappTB->setDatePremierAchat_Client(DatePremierAchat);
		this->Cad->actionRows(this->ClientMappTB->Update());

	}
	DataSet^ Client_service::SelectClient(int id_aclient, String^ dataTableName) {
		this->ClientMappTB->setid_aclient(id_aclient);
		return this->Cad->getRows(this->ClientMappTB->SelectParticulier(), dataTableName);
	}
}
