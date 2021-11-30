#include "Adresse_mapTB.h"

namespace NS_Comp_Mappage {
	String^ Adresse_mapTB::Select() {
		return "";
	}

	String^ Adresse_mapTB::Delete() {
		return "";
	}

	String^ Adresse_mapTB::Insert() {
		return "";
	}

	String^ Adresse_mapTB::Update() {
		return "";
	}

	void Adresse_mapTB::setId_Adress(int id) { this->id = id; }
	void Adresse_mapTB::setCP(int CP) { this->CP = CP; }
	void Adresse_mapTB::setNum_Adress(int num_adress) { this->num_adress = num_adress; }
	void Adresse_mapTB::setType_Adress(String^ type_adress){ this->type_adress = type_adress; }
	void Adresse_mapTB::setAdresse(String^ adress) { this->adress = adress; }
	void Adresse_mapTB::setVille(String^ ville){ this->ville = ville; }
	void Adresse_mapTB::setComplement(String^ complement){ this->complement = complement; }
	void Adresse_mapTB::setPays(String^ pays){ this->pays = pays; }

	int Adresse_mapTB::getId_Adress(void) { return this->id; }
	int Adresse_mapTB::getCP(void) { return this->CP; }
	int Adresse_mapTB::getNum_Adress(void) { return this->num_adress; }
	String^ Adresse_mapTB::getType_Adress(void) { return this->type_adress; }
	String^ Adresse_mapTB::getAdresse(void) { return this->adress; }
	String^ Adresse_mapTB::getVille(void) { return this->ville; }
	String^ Adresse_mapTB::getComplement(void) { return this->complement; }
	String^ Adresse_mapTB::getPays(void) { return this->pays; }


}

