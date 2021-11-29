#pragma once
using namespace System;

namespace NS_Comp_Mappage {
	ref class Client_mapTB
	{
	private:
		//String^ sSql;
		int Id;
		String^ nom;
		String^ prenom;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		void setId(int);
		void setNom(String^);
		void setPrenom(String^);
		void setDateNaissance(String^);

		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getDateNaissance(void);

	};
}

