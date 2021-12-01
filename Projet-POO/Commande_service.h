#pragma once
#include "Commande_mapTB.h"
#include "CAD.h"


using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	ref class Commande_service
	{
	private:
		CAD^ Cad;
		Commande_mapTB^ CommandeMappTB;
	public:
		Commande_service(void);
		DataSet^ Commandes(String^);
		void AddCommande(String^, String^, String^, int, float, float, String^);
		void DeleteCommande(int);
		void UpdateCommande(int, String^, String^, String^, int, float, float, String^);
	};

}