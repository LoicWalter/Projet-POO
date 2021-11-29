#pragma once
using namespace System;

namespace NS_Comp_Mappage {
	ref class Client_mapTB
	{
	private:
		//String^ req_Sql;
		int Id;
		String^ nom;
		String^ prenom;
		String^ date_naissance;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		void setId_Client(int);
		void setNom_Client(String^);
		void setPrenom_Client(String^);
		void setDateNaissance_Client(String^);
		//rajouter date premier achat
		int getId_Client(void);
		String^ getNom_Client(void);
		String^ getPrenom_Client(void);
		String^ getDateNaissance_Client(void);

	};
}

