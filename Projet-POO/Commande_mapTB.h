#pragma once
#include "Adresse_mapTB.h"
using namespace System;

namespace NS_Comp_Mappage {
	ref class Commande_mapTB : public Adresse_mapTB
	{
	private:
		int id_commande;
		int id_aclient;
		int id_article;
		int quantite;
		String^ reference;
		String^ date_emission;
		String^ date_livraison;
		int TVA;
		float prixHT;
		float prixTTC;
		String^ remise_commerciale;
		Adresse_mapTB^ getAdresseLivraison;
	public:
		Commande_mapTB(void);
		String^ Select(void);
		String^ Select1(void);
		String^ Select2(void);
		String^ Select3(void);
		String^ Select4(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		String^ AddArticle(void);

		void setId_commande(int);
		void setid_aclient(int);
		void setId_article(int);
		void setQuantite(int);
		void setReference(String^);
		void setDate_emission(String^);
		void setDate_livraison(String^);
		void setTVA(int);
		void setPrixHT(float);
		void setPrixTTC(float);
		void setRemise_commerciale(String^ );

		int getId_commande(void);
		int getId_article(void);
		int getQuantite(void);
		String^ getReference(void);
		String^ getDate_emission(void);
		String^ getDate_livraison(void);
		int getTVA(void);
		float getPrixHT(void);
		float getPrixTTC(void);
		String^ getRemise_commerciale(void);
	};
}
