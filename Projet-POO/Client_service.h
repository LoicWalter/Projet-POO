#pragma once
#include "Client_mapTB.h"
#include "CAD.h"

using namespace System::Data;
using namespace System;

namespace NS_Comp_Svc
{
	ref class Client_service
	{
	private:
		NS_Comp_Data::CAD^ Cad;
		NS_Comp_Mappage::Client_mapTB^ ClientMappTB;
		//insert de la table client

	public:
		//Client_service(void);
		//DataSet^ selectionnerToutesLesPersonnes(String^);
		//void ajouterUnClient(String^, String^);
		//void supprimerUnClient(int);
		//void MAJUnClient(int, String^, String^);
	};
}

