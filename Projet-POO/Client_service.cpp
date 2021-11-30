#include "Client_service.h"
#include "CAD.h"
#include "Client_mapTB.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Client_service::Client_service(void) {
		this->Cad = gcnew CAD();
		this->ClientMappTB = gcnew Client_mapTB();
		//this->dataSetClient = gcnew DataSet();
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
		//peut etre un return si ça marche po
	}
	void Client_service::DeleteClient(int id_client) {
		this->ClientMappTB->setId_Client(id_client);
		this->Cad->actionRows(this->ClientMappTB->Delete());
	}
	void Client_service::UpdateClient(int id_client, String^ nom, String^ prenom, String^ DateNaissance/*, String^ DatePremierAchat*/ ) {
		ClientMappTB->setId_Client(id_client);
		ClientMappTB->setNom_Client(nom);
		ClientMappTB->setPrenom_Client(prenom);
		ClientMappTB->setDateNaissance_Client(DateNaissance);
		//ClientMappTB->setDatePremierAchat_Client(DatePremierAchat);
		this->Cad->actionRows(this->ClientMappTB->Update());

	}
	DataSet^ Client_service::SelectClient(int id_client, String^ dataTableName) {
		this->ClientMappTB->setId_Client(id_client);
		return this->Cad->getRows(this->ClientMappTB->SelectParticulier(), dataTableName);
	}
}
//Reste a rajouter les click boutons de la page client dans le form.cpp, PAS OUBLIER DE CONVERT id en int des le debut !
//Rajouter Date de premier achat