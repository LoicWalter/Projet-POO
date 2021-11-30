#include "Personnel_service.h"
#include "Personnel_mapTB.h"

namespace NS_Comp_Svc {
	Personnel_service::Personnel_service(void) {
		this->Cad = gcnew CAD();
		this->PersonnelMappTB = gcnew Personnel_mapTB();
		
	}

	DataSet^ Personnel_service::Personnels(String^ dataTableName) {
		
		return this->Cad->getRows(this->PersonnelMappTB->Select(), dataTableName);
	}

	void Personnel_service::AddPersonnel(String^ nom_personnel, String^ prenom_personnel,String^ superieur, String^ dateEmbauche) {
		PersonnelMappTB->setNom_personnel(nom_personnel);
		PersonnelMappTB->setPrenom_personnel(prenom_personnel);
		PersonnelMappTB->setSuperieur(superieur);
		PersonnelMappTB->setDateEmbauche(dateEmbauche);

		this->Cad->actionRows(this->PersonnelMappTB->Insert());
	}

	void Personnel_service::DeletePersonnel(int id_personnel) {
		PersonnelMappTB->setId_personnel(id_personnel);
		this->Cad->actionRows(this->PersonnelMappTB->Delete());
	}
	void Personnel_service::UpdatePersonnel(int id_personnel, String^ nom_personnel, String^ prenom_personnel, String^ superieur, String^ dateEmbauche) {
		PersonnelMappTB->setId_personnel(id_personnel);
		PersonnelMappTB->setNom_personnel(nom_personnel);
		PersonnelMappTB->setPrenom_personnel(prenom_personnel);
		PersonnelMappTB->setSuperieur(superieur);
		PersonnelMappTB->setDateEmbauche(dateEmbauche);

		this->Cad->actionRows(this->PersonnelMappTB->Update());
	}
	DataSet^ Personnel_service::SelectPersonnel(int id_personnel, String^ dataTableName) {
		this->PersonnelMappTB->setId_personnel(id_personnel);
		return this->Cad->getRows(this->PersonnelMappTB->SelectParticulierPersonnel(), dataTableName);
	}
}