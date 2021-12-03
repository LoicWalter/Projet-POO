#pragma once
#include "Commande_mapTB.h"
#include "CAD.h"
#include "Adresse_mapTB.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	ref class Commande_service : public Adresse_mapTB
	{
	private:
		CAD^ Cad;
		Commande_mapTB^ CommandeMappTB;
		Adresse_mapTB^ AdressemapppTB;
	public:
		Commande_service(void);
		DataSet^ Commandes(String^);
		DataSet^ CommandesClient(String^);
		DataSet^ CommandesArticle(String^);
		DataSet^ CommandesArticleCommande(int, String^);
		DataSet^ PrixTotal(int, String^);
		void AddCommande(String^, String^, String^, String^, String^, String^, String^, int, int, int);
		void DeleteCommande(int);
		void UpdateCommande(int, String^, String^, String^, int, float, float, String^);
		void AddArticleCommande(int, int, int);
	};

}