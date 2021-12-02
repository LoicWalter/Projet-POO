#pragma once
#include "Personnel_mapTB.h"
#include "CAD.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	ref class Personnel_service : public Adresse_mapTB
	{
	private:
		CAD^ Cad;
		Personnel_mapTB^ PersonnelMappTB;
		Adresse_mapTB^ AdressemappTB;
	public:
		Personnel_service(void);
		DataSet^ Personnels(String^);
		DataSet^ SelectPersonnel(int id_aclient, String^ dataTableName);
		void AddPersonnel(String^, String^, String^, String^, String^, String^, String^, String^, int, int, String^);
		void DeletePersonnel(int);
		void UpdatePersonnel(int, String^, String^, String^, String^);
		
	};
}

