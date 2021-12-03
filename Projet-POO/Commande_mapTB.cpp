#include "Commande_mapTB.h"

namespace NS_Comp_Mappage {

	Commande_mapTB::Commande_mapTB(void)
	{
		this->getAdresseLivraison = gcnew Adresse_mapTB();
	}





	String^ Commande_mapTB::Select(void) {
		return "SELECT [id_commande], [reference], [date_emission], [date_livraison], [TVA], [prixHT], [prixTTC] FROM [Projet].[dbo].[commande]";
	}
	String^ Commande_mapTB::Select1(void) {
		return "SELECT [id_aclient], [nom], [prenom], [date_naissance], [date_premiere] FROM [Projet].[dbo].[client] ";
	}
	String^ Commande_mapTB::Select2(void) {
		return "SELECT [id_article], [nom_article], [couleur], [nature] FROM [Projet].[dbo].[article] WHERE (disponible=1);";
	}
	String^ Commande_mapTB::Select3(void) {
		return "SELECT [article].[id_article], [Contenir].[quantite], [article].[nom_article], [article].[couleur], [article].[nature] FROM [Projet].[dbo].[article] INNER JOIN [Contenir] ON ([article].[id_article] = [Contenir].[id_article]) WHERE ([Contenir].[id_commande] = '" + this->id_commande + "');";
	}
	String^ Commande_mapTB::Select4(void) {
		return "SELECT SUM([Contenir].[quantite] * [article].[prix_TTC_]) FROM [article] INNER JOIN [Contenir] ON [article].[id_article]=[Contenir].[id_article] WHERE ([Contenir].[id_commande] = '" + this->id_commande + "');";
	}
	String^ Commande_mapTB::Insert(void){
		return "INSERT INTO adresse (type_adresse,adresse,ville,code_postal,numero_adresse,complement_adresse,pays) SELECT 'livraison', '" + getAdresseLivraison->getAdresse() + "', '" + getAdresseLivraison->getVille() + "', '" + getAdresseLivraison->getCP() + "', '" + getAdresseLivraison->getNum_Adress() + "', '" + getAdresseLivraison->getComplement() + "', '" + getAdresseLivraison->getPays() + "' WHERE NOT EXISTS (SELECT * FROM [Projet].[dbo].[adresse] WHERE type_adresse = 'livraison' AND adresse = '" + getAdresseLivraison->getAdresse() + "' AND ville = '" + getAdresseLivraison->getVille() + "' AND code_postal = '" + getAdresseLivraison->getCP() + "' AND numero_adresse = '" + getAdresseLivraison->getNum_Adress() + "'  AND complement_adresse = '" + getAdresseLivraison->getComplement() + "' AND pays = '" + getAdresseLivraison->getPays() + "'); INSERT INTO commande (reference, date_emission, date_livraison, id_aclient, id_adresse) SELECT '" + this->reference + "', '" + this->date_emission + "', '" + this->date_livraison + "', '" + this->id_aclient + "', id_adresse FROM adresse WHERE(type_adresse = 'livraison' AND adresse = '" + getAdresseLivraison->getAdresse() + "' AND ville = '" + getAdresseLivraison->getVille() + "' AND code_postal = '" + getAdresseLivraison->getCP() + "' AND numero_adresse = '" + getAdresseLivraison->getNum_Adress() + "' AND complement_adresse = '" + getAdresseLivraison->getComplement() + "' AND pays = '" + getAdresseLivraison->getPays() + "');";
	}
	String^ Commande_mapTB::Delete(void){
		return "DELETE FROM [Projet].[dbo].[commande] WHERE (id_commande ='" + this->id_commande + "');";
	}
	String^ Commande_mapTB::Update(void){
		return "SELECT SUM([Contenir].[quantite] * [article].[prix_TTC_]) FROM [article] INNER JOIN [Contenir] ON [article].[id_article]=[Contenir].[id_article] WHERE ([Contenir].[id_commande] = '" + this->id_commande + "')";
	}
	String^ Commande_mapTB::AddArticle(void) {
		return "INSERT INTO Contenir (id_commande, id_article, quantite) VALUES ('" + this->id_commande + "', '" + this->id_article + "', '" + this->quantite + "')";
	}
	String^ Commande_mapTB::SelectFacture(void) {
		return "SELECT [article].[nom_article], [Contenir].[quantite], [article].[prix_HT_], [article].[TVA], ([article].[prix_TTC_]*[Contenir].[quantite]) AS TOTAL FROM [article] INNER JOIN [Contenir] ON [Contenir].[id_article] = [article].[id_article] WHERE  ([Contenir].[id_commande] = '" + getId_commande() + "');";
	}
	String^ Commande_mapTB::SelectFacture2(void) {
		return "SELECT SUM(([article].[prix_TTC_]*[Contenir].[quantite])) AS GRAND_TOTAL FROM [article] INNER JOIN [Contenir] ON [Contenir].[id_article] = [article].[id_article] WHERE  ([Contenir].[id_commande] = '" + getId_commande() + "');";
	}






	void Commande_mapTB::setId_commande(int id_commande) { this->id_commande = id_commande; }
	void Commande_mapTB::setid_aclient(int id_aclient) { this->id_aclient = id_aclient; }
	void Commande_mapTB::setId_article(int id_article) { this->id_article = id_article; }
	void Commande_mapTB::setQuantite(int quantite) { this->quantite = quantite; }
	void Commande_mapTB::setReference(String^ reference) { this->reference = reference; }
	void Commande_mapTB::setDate_emission(String^ date_emission) { this->date_emission = date_emission; }
	void Commande_mapTB::setDate_livraison(String^ date_livraison) { this->date_livraison = date_livraison; }
	void Commande_mapTB::setTVA(int TVA) { this->TVA = TVA; }
	void Commande_mapTB::setPrixHT(float prixHT) { this->prixHT = prixHT; }
	void Commande_mapTB::setPrixTTC(float prixTTC) { this->prixTTC = prixTTC; }
	void Commande_mapTB::setRemise_commerciale(String^ remise_commerciale) { this->remise_commerciale = remise_commerciale; }

	int Commande_mapTB::getId_commande(void) { return this->id_commande; }
	int Commande_mapTB::getId_article(void) { return this->id_article; }
	int Commande_mapTB::getQuantite(void) { return this->quantite; }
	String^ Commande_mapTB::getReference(void) { return this->reference; }
	String^ Commande_mapTB::getDate_emission(void) { return this->date_emission; }
	String^ Commande_mapTB::getDate_livraison(void) { return this->date_livraison; }
	int Commande_mapTB::getTVA(void) { return this->TVA; }
	float Commande_mapTB::getPrixHT(void) { return this->prixHT; }
	float Commande_mapTB::getPrixTTC(void) { return this->prixTTC; }
	String^ Commande_mapTB::getRemise_commerciale(void) { return this->remise_commerciale; }
}
