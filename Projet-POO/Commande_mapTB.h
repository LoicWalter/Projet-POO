#pragma once
using namespace System;

namespace NS_Comp_Mappage {
	ref class Commande_mapTB
	{
	private:
		int id_commande;
		String^ reference;
		String^ date_emission;
		String^ date_livraison;
		int TVA;
		float prixHT;
		float prixTTC;
		String^ remise_commerciale;
	public:
		String^ Select(void);
		String^ Select1(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);

		void setId_commande(int);
		void setReference(String^);
		void setDate_emission(String^);
		void setDate_livraison(String^);
		void setTVA(int);
		void setPrixHT(float);
		void setPrixTTC(float);
		void setRemise_commerciale(String^ );

		int getId_commande(void);
		String^ getReference(void);
		String^ getDate_emission(void);
		String^ getDate_livraison(void);
		int getTVA(void);
		float getPrixHT(void);
		float getPrixTTC(void);
		String^ getRemise_commerciale(void);
	};
}
