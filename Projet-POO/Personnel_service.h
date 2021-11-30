#pragma once
#include "Personnel_mapTB.h"
#include "CAD.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	ref class Personnel_service
	{
	private:
		CAD^ Cad;
		Personnel_mapTB^ PersonnelMappTB;
	public:
		Personnel_service(void);
		DataSet^ Personnels(String^);
		DataSet^ SelectPersonnel(int id_client, String^ dataTableName);
		void AddPersonnel(String^, String^, String^);
		void DeletePersonnel(int);
		void UpdatePersonnel(int, String^, String^, String^);
		
	};
}

