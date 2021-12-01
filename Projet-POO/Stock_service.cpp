#include "Stock_service.h"
#include "CAD.h"
#include "Stock_mapTB.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Stock_service::Stock_service(void) {
		this->Cad = gcnew CAD();
		this->StockMappTB = gcnew Stock_mapTB();
	}
	DataSet^ Stock_service::Stocks(String^ dataTableName){
		return this->Cad->getRows(this->StockMappTB->Select(), dataTableName);
	}
	void Stock_service::AddArticle(String^ nom, int nbr_exemplaire, float prixHT, int TVA, int seuil){
		StockMappTB->setNom(nom);
		StockMappTB->setNbr_exemplaire(nbr_exemplaire);
		StockMappTB->setPrixHT(prixHT);
		StockMappTB->setTVA(TVA);
		StockMappTB->setSeuil(seuil);

		this->Cad->actionRows(this->StockMappTB->Insert());
	}
	void Stock_service::DeleteArticle(int id){
		StockMappTB->setId_Stock(id);
		this->Cad->actionRows(this->StockMappTB->Delete());
	}
	void Stock_service::UpdateArticle(int id, String^ nom, int nbr_exemplaire, float prixHT, int TVA, int seuil){
		StockMappTB->setId_Stock(id);
		StockMappTB->setNom(nom);
		StockMappTB->setNbr_exemplaire(nbr_exemplaire);
		StockMappTB->setPrixHT(prixHT);
		StockMappTB->setTVA(TVA);
		StockMappTB->setSeuil(seuil);

		this->Cad->actionRows(this->StockMappTB->Update());
	}
}