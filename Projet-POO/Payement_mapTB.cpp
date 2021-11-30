#include "Payement_mapTB.h"

namespace NS_Comp_Mappage {

	String^ Payement_mapTB::Select() {
		return "";
	}

	String^ Payement_mapTB::Delete() {
		return "";
	}

	String^ Payement_mapTB::Insert() {
		return "";
	}

	String^ Payement_mapTB::Update() {
		return "";
	}


	void Payement_mapTB::setId_Payement(int id_payement ){ this->id_payement = id_payement; }
	void Payement_mapTB::setDate_Payement(String^ date_payement){ this->date_payement = date_payement; }
	void Payement_mapTB::setMoyen_Payement(String^ moyen_payement){ this->moyen_payement = moyen_payement; }
	void Payement_mapTB::setMontant(float montant){ this->montant = montant; }

	int Payement_mapTB::getId_Payement(void){ return this->id_payement; }
	String^ Payement_mapTB::getDate_Payement(void) { return this->date_payement; }
	String^ Payement_mapTB::getMoyen_Payement(void) { return this->moyen_payement; }
	float Payement_mapTB::getMontant(void) { return this->montant; }
}