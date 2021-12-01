#pragma once
#include "Adresse_mapTB.h"

using namespace System;

namespace NS_Comp_Mappage {
	ref class Personnel_mapTB : public Adresse_mapTB
	{
	private:
		int id_personnel;
		String^ nom_personnel;
		String^ prenom_personnel;
		String^ date_embauche;
		String^ superieur;
		Adresse_mapTB^ getAdresse;

	public:
		Personnel_mapTB(void);
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		String^ SelectParticulierPersonnel(void);
		void setId_personnel(int);
		void setNom_personnel(String^);
		void setPrenom_personnel(String^);
		void setDateEmbauche(String^);
		void setSuperieur(String^);

		int getId_personnel(void);
		String^ getNom_personnel(void);
		String^ getPrenom_personnel(void);
		String^ getDateEmbauche(void);
		String^ getSuperieur(void);

	};
}

