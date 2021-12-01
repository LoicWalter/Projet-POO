#pragma once

using namespace System;

namespace NS_Comp_Mappage {
	ref class Stock_mapTB
	{
	private:
		int id_stock;
		String^ nom;
		int nbr_exemplaire;
		float prixHT;
		int TVA;
		int seuil;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		String^ Chiffre_affaire(void);	//chiffre d’affaire sur un mois en particulier
		String^ Seuil_produit(void);	//produits sous le seuil de réapprovisionnement
		String^ Panier_moyen(void);
		String^ Top10(void);			//10 articles les plus vendus
		String^ Bot10(void);			//10 articles les moins vendus
		String^ Val_com(void);			//valeur commerciale du stock
		String^ Val_achat(void);		//valeur commerciale du stock
		String^ Montant_achat(void);	// montant total des achats pour un client

		void setId_Stock(int);
		void setNom(String^);
		void setNbr_exemplaire(int);
		void setPrixHT(float);
		void setTVA(int);
		void setSeuil(int);

		int getId_Stock(void);
		String^ getNom(void);
		int getNbr_exemplaire(void);
		float getPrixHT(void);
		int getTVA(void);
		int getSeuil(void);
	};
}

