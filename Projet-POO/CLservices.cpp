#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::Client_mapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::String^ id)
{
	System::String^ sql;

	this->oMappTB->setId(int::Parse(id));
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ id, System::String^ nom, System::String^ prenom)
{
	System::String^ sql;
	this->oMappTB->setId(int::Parse(id));
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}

