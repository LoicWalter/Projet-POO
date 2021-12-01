#pragma once

using namespace System;

namespace NS_Comp_Mappage {
	ref class Stock_mapTB
	{
	private:
		int id_stock;
		String^ nom;
		String^ nature;
		String^ couleur;
		int nbr_exemplaire;
		float prixHT;
		float prixTTC;
		float prixAchat;
		int TVA;
		int Marge;
		int seuil;
		bool dispo;
	public:
		String^ Select(void);
		String^ SelectParticulier(void);
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
		void setNature(String^);
		void setCouleur(String^);
		void setNbr_exemplaire(int);
		void setPrixHT(float);
		void setPrixTTC(float);
		void setPrixAchat(float);
		void setMarge(int);
		void setTVA(int);
		void setSeuil(int);
		void setDispo(bool);

		int getId_Stock(void);
		String^ getNom(void);
		String^ getNature(void);
		String^ getCouleur(void);
		int getNbr_exemplaire(void);
		float getPrixHT(void);
		float getPrixTTC(void);
		float getPrixAchat(void);
		int getMarge(void);
		int getTVA(void);
		int getSeuil(void);
		bool getDispo(void);
	};
}

