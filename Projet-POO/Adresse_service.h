#pragma once
#include "Adresse_mapTB.h"
#include "CAD.h"

using namespace NS_Comp_Mappage;
using namespace NS_Comp_Data;

namespace NS_Comp_Svc {
	ref class Adresse_service
	{
	private:
		CAD^ Cad;
		Adresse_mapTB^ AdresseMappTB;
		DataSet^ dataSetAdress;
	public:
		Adresse_service(void);
		DataSet^ Adresse(String^);
		void AddAdresse(String^, String^, String^, int, int, String^, String^);
		void DeleteAdresse(int);
		void UpdateAdresse(int, String^, String^, String^, int, int, String^ , String^);
	};
}

