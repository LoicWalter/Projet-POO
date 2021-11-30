#pragma once
#include "Client_mapTB.h"
#include "CAD.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc
{
	ref class Client_service
	{
	private:
		CAD^ Cad;
		Client_mapTB^ ClientMappTB;
		DataSet^ dataSetClient;
	public:
		Client_service(void);
		DataSet^ Clients(String^);
		void AddClient(String^, String^ , String^/*, String^*/);
		void DeleteClient(int);
		void UpdateClient(int, String^, String^, String^ /*, String^*/);
	};
}

