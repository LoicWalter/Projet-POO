#pragma once
#include "Client_mapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::Client_mapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		void supprimerUnePersonne(System::String^);
		void modifierUnePersonne(System::String^, System::String^, System::String^);
	};
}

