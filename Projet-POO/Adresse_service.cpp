#include "Adresse_service.h"


using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Adresse_service::Adresse_service(void) {
		this->Cad = gcnew CAD();
		this->AdresseMappTB = gcnew Adresse_mapTB();
	}
	DataSet^ Adresse_service::Adresse(String^ dataTableName) {
		return this->Cad->getRows(this->AdresseMappTB->Select(), dataTableName);
	}
	void Adresse_service::AddAdresse(String^ type_adress, String^ adress, String^ ville, int CP, int num_adress, String^ complement, String^ pays) {
		AdresseMappTB->setType_Adress(type_adress);
		AdresseMappTB->setAdress(adress);
		AdresseMappTB->setVille(ville);
		AdresseMappTB->setCP(CP);
		AdresseMappTB->setNum_Adress(num_adress);
		AdresseMappTB->setComplement(complement);
		AdresseMappTB->setPays(pays);

		this->Cad->actionRows(this->AdresseMappTB->Insert());
	}
	void Adresse_service::DeleteAdresse(int id_adress) {
		this->AdresseMappTB->setId_Adress(id_adress);
		this->Cad->actionRows(this->AdresseMappTB->Delete());
	}
	void Adresse_service::UpdateAdresse(int id, String^ type_adress, String^ adress, String^ ville, int CP, int num_adress, String^ complement, String^ pays) {
		AdresseMappTB->setId_Adress(id);
		AdresseMappTB->setType_Adress(type_adress);
		AdresseMappTB->setAdress(adress);
		AdresseMappTB->setVille(ville);
		AdresseMappTB->setCP(CP);
		AdresseMappTB->setNum_Adress(num_adress);
		AdresseMappTB->setComplement(complement);
		AdresseMappTB->setPays(pays);

		this->Cad->actionRows(this->AdresseMappTB->Update());
	}
}