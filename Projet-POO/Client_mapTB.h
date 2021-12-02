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
		String^ date_premier_achat;

	public:
		String^ Select(void);
		String^ SelectParticulier(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		void setid_aclient(int);
		void setNom_Client(String^);
		void setPrenom_Client(String^);
		void setDateNaissance_Client(String^);
		void setDatePremier_achat(String^);

		int getid_aclient(void);
		String^ getNom_Client(void);
		String^ getPrenom_Client(void);
		String^ getDateNaissance_Client(void);
		String^ getDatePremier_achat(void);

	};
}

