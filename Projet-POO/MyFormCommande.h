#pragma once
#include "Commande_service.h"
#include "MyFormFacture.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCommande
	/// </summary>
	public ref class MyFormCommande : public System::Windows::Forms::Form
	{
	public:
		MyFormCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ retourMenu;
	protected:












	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ infoComp_livraison;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ numRue_livraison;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ville_livraison;
	private: System::Windows::Forms::TextBox^ nomRue_livraison;
	private: System::Windows::Forms::TextBox^ pays_livraison;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateCommande_Commande;
	private: System::Windows::Forms::Button^ act_commande;


	private: NS_Comp_Svc::Commande_service^ Svc;
	private: System::Data::DataSet^ Ds;

	private: NS_Comp_Svc::Commande_service^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: NS_Comp_Svc::Commande_service^ ooSvc;
	private: System::Data::DataSet^ ooDs;

	private: NS_Comp_Svc::Commande_service^ oooSvc;
	private: System::Data::DataSet^ oooDs;

	private: NS_Comp_Svc::Commande_service^ ooooSvc;
	private: System::Data::DataSet^ ooooDs;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ID_Commande;

	private: System::Windows::Forms::TextBox^ Prenom_Client;
	private: System::Windows::Forms::TextBox^ Reference;

	private: System::Windows::Forms::Button^ mod_client;
	private: System::Windows::Forms::Button^ ins_client;
	private: System::Windows::Forms::Button^ sup_client;
	private: System::Windows::Forms::Button^ sel_client;
	private: System::Windows::Forms::DataGridView^ dataBaseCommande;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison_Commande;



	private: System::Windows::Forms::DataGridView^ dataBaseCommande1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ act_comCLi;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataBaseCommande2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ id_aclient;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ ID_Article;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Quantite;
	private: System::Windows::Forms::Button^ Ajouter_article;
	private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::DataGridView^ dataBaseCommande3;

private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ CP_Livraison;
private: System::Windows::Forms::DataGridView^ dataBaseCommande4;
private: System::Windows::Forms::Button^ button4;




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCommande::typeid));
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->infoComp_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ville_livraison = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->pays_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateCommande_Commande = (gcnew System::Windows::Forms::DateTimePicker());
			this->act_commande = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ID_Commande = (gcnew System::Windows::Forms::TextBox());
			this->Prenom_Client = (gcnew System::Windows::Forms::TextBox());
			this->Reference = (gcnew System::Windows::Forms::TextBox());
			this->mod_client = (gcnew System::Windows::Forms::Button());
			this->ins_client = (gcnew System::Windows::Forms::Button());
			this->sup_client = (gcnew System::Windows::Forms::Button());
			this->sel_client = (gcnew System::Windows::Forms::Button());
			this->dataBaseCommande = (gcnew System::Windows::Forms::DataGridView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dateLivraison_Commande = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataBaseCommande1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->act_comCLi = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataBaseCommande2 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->id_aclient = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ID_Article = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Quantite = (gcnew System::Windows::Forms::TextBox());
			this->Ajouter_article = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataBaseCommande3 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->CP_Livraison = (gcnew System::Windows::Forms::TextBox());
			this->dataBaseCommande4 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande4))->BeginInit();
			this->SuspendLayout();
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(11, 780);
			this->retourMenu->Margin = System::Windows::Forms::Padding(2);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(192, 47);
			this->retourMenu->TabIndex = 123;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormCommande::retourMenu_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(24, 660);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 13);
			this->label12->TabIndex = 110;
			this->label12->Text = L"Informations complémentaires :";
			// 
			// infoComp_livraison
			// 
			this->infoComp_livraison->Location = System::Drawing::Point(29, 677);
			this->infoComp_livraison->Margin = System::Windows::Forms::Padding(2);
			this->infoComp_livraison->Name = L"infoComp_livraison";
			this->infoComp_livraison->Size = System::Drawing::Size(282, 20);
			this->infoComp_livraison->TabIndex = 109;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(323, 600);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 108;
			this->label11->Text = L"Numéro de rue :";
			// 
			// numRue_livraison
			// 
			this->numRue_livraison->Location = System::Drawing::Point(326, 620);
			this->numRue_livraison->Margin = System::Windows::Forms::Padding(2);
			this->numRue_livraison->Name = L"numRue_livraison";
			this->numRue_livraison->Size = System::Drawing::Size(147, 20);
			this->numRue_livraison->TabIndex = 107;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(24, 602);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 13);
			this->label9->TabIndex = 104;
			this->label9->Text = L"Nom de la rue :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(161, 552);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 103;
			this->label8->Text = L"Ville :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(24, 552);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 102;
			this->label7->Text = L"Pays : ";
			// 
			// ville_livraison
			// 
			this->ville_livraison->Location = System::Drawing::Point(162, 572);
			this->ville_livraison->Margin = System::Windows::Forms::Padding(2);
			this->ville_livraison->Name = L"ville_livraison";
			this->ville_livraison->Size = System::Drawing::Size(147, 20);
			this->ville_livraison->TabIndex = 101;
			// 
			// nomRue_livraison
			// 
			this->nomRue_livraison->Location = System::Drawing::Point(29, 620);
			this->nomRue_livraison->Margin = System::Windows::Forms::Padding(2);
			this->nomRue_livraison->Name = L"nomRue_livraison";
			this->nomRue_livraison->Size = System::Drawing::Size(282, 20);
			this->nomRue_livraison->TabIndex = 100;
			// 
			// pays_livraison
			// 
			this->pays_livraison->Location = System::Drawing::Point(29, 572);
			this->pays_livraison->Margin = System::Windows::Forms::Padding(2);
			this->pays_livraison->Name = L"pays_livraison";
			this->pays_livraison->Size = System::Drawing::Size(120, 20);
			this->pays_livraison->TabIndex = 99;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(583, 726);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 98;
			this->label6->Text = L"Date de commande :";
			// 
			// dateCommande_Commande
			// 
			this->dateCommande_Commande->CustomFormat = L"dd/MM/yyyy";
			this->dateCommande_Commande->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateCommande_Commande->Location = System::Drawing::Point(583, 754);
			this->dateCommande_Commande->Margin = System::Windows::Forms::Padding(2);
			this->dateCommande_Commande->Name = L"dateCommande_Commande";
			this->dateCommande_Commande->Size = System::Drawing::Size(102, 20);
			this->dateCommande_Commande->TabIndex = 97;
			// 
			// act_commande
			// 
			this->act_commande->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_commande->Location = System::Drawing::Point(316, 29);
			this->act_commande->Margin = System::Windows::Forms::Padding(2);
			this->act_commande->Name = L"act_commande";
			this->act_commande->Size = System::Drawing::Size(81, 37);
			this->act_commande->TabIndex = 96;
			this->act_commande->Text = L"Actualiser Commande";
			this->act_commande->UseVisualStyleBackColor = true;
			this->act_commande->Click += gcnew System::EventHandler(this, &MyFormCommande::act_commande_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(24, 522);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 18);
			this->label4->TabIndex = 94;
			this->label4->Text = L"Adresse Livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(583, 667);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Prénom Client :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(583, 610);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 92;
			this->label2->Text = L"Reference :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(344, 314);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 91;
			this->label1->Text = L"ID Commande :";
			// 
			// ID_Commande
			// 
			this->ID_Commande->Location = System::Drawing::Point(344, 332);
			this->ID_Commande->Margin = System::Windows::Forms::Padding(2);
			this->ID_Commande->Name = L"ID_Commande";
			this->ID_Commande->Size = System::Drawing::Size(303, 20);
			this->ID_Commande->TabIndex = 90;
			// 
			// Prenom_Client
			// 
			this->Prenom_Client->Location = System::Drawing::Point(583, 685);
			this->Prenom_Client->Margin = System::Windows::Forms::Padding(2);
			this->Prenom_Client->Name = L"Prenom_Client";
			this->Prenom_Client->Size = System::Drawing::Size(303, 20);
			this->Prenom_Client->TabIndex = 89;
			// 
			// Reference
			// 
			this->Reference->Location = System::Drawing::Point(583, 628);
			this->Reference->Margin = System::Windows::Forms::Padding(2);
			this->Reference->Name = L"Reference";
			this->Reference->Size = System::Drawing::Size(303, 20);
			this->Reference->TabIndex = 88;
			// 
			// mod_client
			// 
			this->mod_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_client->Location = System::Drawing::Point(469, 89);
			this->mod_client->Margin = System::Windows::Forms::Padding(2);
			this->mod_client->Name = L"mod_client";
			this->mod_client->Size = System::Drawing::Size(90, 56);
			this->mod_client->TabIndex = 87;
			this->mod_client->Text = L"Modification";
			this->mod_client->UseVisualStyleBackColor = true;
			this->mod_client->Click += gcnew System::EventHandler(this, &MyFormCommande::mod_client_Click);
			// 
			// ins_client
			// 
			this->ins_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_client->Location = System::Drawing::Point(469, 149);
			this->ins_client->Margin = System::Windows::Forms::Padding(2);
			this->ins_client->Name = L"ins_client";
			this->ins_client->Size = System::Drawing::Size(90, 56);
			this->ins_client->TabIndex = 86;
			this->ins_client->Text = L"Insertion";
			this->ins_client->UseVisualStyleBackColor = true;
			this->ins_client->Click += gcnew System::EventHandler(this, &MyFormCommande::ins_client_Click);
			// 
			// sup_client
			// 
			this->sup_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_client->Location = System::Drawing::Point(469, 209);
			this->sup_client->Margin = System::Windows::Forms::Padding(2);
			this->sup_client->Name = L"sup_client";
			this->sup_client->Size = System::Drawing::Size(90, 56);
			this->sup_client->TabIndex = 85;
			this->sup_client->Text = L"Suppression";
			this->sup_client->UseVisualStyleBackColor = true;
			// 
			// sel_client
			// 
			this->sel_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_client->Location = System::Drawing::Point(469, 29);
			this->sel_client->Margin = System::Windows::Forms::Padding(2);
			this->sel_client->Name = L"sel_client";
			this->sel_client->Size = System::Drawing::Size(90, 56);
			this->sel_client->TabIndex = 84;
			this->sel_client->Text = L"Sélection";
			this->sel_client->UseVisualStyleBackColor = true;
			// 
			// dataBaseCommande
			// 
			this->dataBaseCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseCommande->Location = System::Drawing::Point(16, 29);
			this->dataBaseCommande->Margin = System::Windows::Forms::Padding(2);
			this->dataBaseCommande->Name = L"dataBaseCommande";
			this->dataBaseCommande->RowHeadersWidth = 51;
			this->dataBaseCommande->RowTemplate->Height = 24;
			this->dataBaseCommande->Size = System::Drawing::Size(295, 193);
			this->dataBaseCommande->TabIndex = 83;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label19->Location = System::Drawing::Point(718, 726);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(128, 13);
			this->label19->TabIndex = 125;
			this->label19->Text = L"Date de livraison prévue :";
			this->label19->Click += gcnew System::EventHandler(this, &MyFormCommande::label19_Click);
			// 
			// dateLivraison_Commande
			// 
			this->dateLivraison_Commande->CustomFormat = L"dd/MM/yyyy";
			this->dateLivraison_Commande->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateLivraison_Commande->Location = System::Drawing::Point(718, 754);
			this->dateLivraison_Commande->Margin = System::Windows::Forms::Padding(2);
			this->dateLivraison_Commande->Name = L"dateLivraison_Commande";
			this->dateLivraison_Commande->Size = System::Drawing::Size(102, 20);
			this->dateLivraison_Commande->TabIndex = 124;
			// 
			// dataBaseCommande1
			// 
			this->dataBaseCommande1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseCommande1->Location = System::Drawing::Point(706, 29);
			this->dataBaseCommande1->Name = L"dataBaseCommande1";
			this->dataBaseCommande1->Size = System::Drawing::Size(286, 193);
			this->dataBaseCommande1->TabIndex = 129;
			this->dataBaseCommande1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCommande::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(844, 779);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 42);
			this->button1->TabIndex = 132;
			this->button1->Text = L"Facture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCommande::button1_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(57, 480);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(196, 20);
			this->label23->TabIndex = 133;
			this->label23->Text = L" Informations personnelles";
			this->label23->Click += gcnew System::EventHandler(this, &MyFormCommande::label23_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(20, 9);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(80, 15);
			this->label21->TabIndex = 134;
			this->label21->Text = L"Commande";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(703, 9);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 15);
			this->label22->TabIndex = 135;
			this->label22->Text = L"Client";
			// 
			// act_comCLi
			// 
			this->act_comCLi->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_comCLi->Location = System::Drawing::Point(620, 29);
			this->act_comCLi->Margin = System::Windows::Forms::Padding(2);
			this->act_comCLi->Name = L"act_comCLi";
			this->act_comCLi->Size = System::Drawing::Size(81, 37);
			this->act_comCLi->TabIndex = 136;
			this->act_comCLi->Text = L"Actualiser Client";
			this->act_comCLi->UseVisualStyleBackColor = true;
			this->act_comCLi->Click += gcnew System::EventHandler(this, &MyFormCommande::act_comCLi_Click);
			// 
			// button2
			// 
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(623, 273);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 34);
			this->button2->TabIndex = 139;
			this->button2->Text = L"Actualiser Article";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCommande::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(703, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 15);
			this->label5->TabIndex = 138;
			this->label5->Text = L"Article";
			// 
			// dataBaseCommande2
			// 
			this->dataBaseCommande2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseCommande2->Location = System::Drawing::Point(706, 273);
			this->dataBaseCommande2->Name = L"dataBaseCommande2";
			this->dataBaseCommande2->Size = System::Drawing::Size(286, 170);
			this->dataBaseCommande2->TabIndex = 137;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(583, 554);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 141;
			this->label10->Text = L"ID Client :";
			// 
			// id_aclient
			// 
			this->id_aclient->Location = System::Drawing::Point(583, 572);
			this->id_aclient->Margin = System::Windows::Forms::Padding(2);
			this->id_aclient->Name = L"id_aclient";
			this->id_aclient->Size = System::Drawing::Size(303, 20);
			this->id_aclient->TabIndex = 140;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(344, 364);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 13);
			this->label13->TabIndex = 143;
			this->label13->Text = L"ID Article :";
			// 
			// ID_Article
			// 
			this->ID_Article->Location = System::Drawing::Point(344, 382);
			this->ID_Article->Margin = System::Windows::Forms::Padding(2);
			this->ID_Article->Name = L"ID_Article";
			this->ID_Article->Size = System::Drawing::Size(303, 20);
			this->ID_Article->TabIndex = 142;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(344, 412);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 13);
			this->label14->TabIndex = 145;
			this->label14->Text = L"Quantité :";
			// 
			// Quantite
			// 
			this->Quantite->Location = System::Drawing::Point(344, 430);
			this->Quantite->Margin = System::Windows::Forms::Padding(2);
			this->Quantite->Name = L"Quantite";
			this->Quantite->Size = System::Drawing::Size(303, 20);
			this->Quantite->TabIndex = 144;
			// 
			// Ajouter_article
			// 
			this->Ajouter_article->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Ajouter_article->Location = System::Drawing::Point(344, 454);
			this->Ajouter_article->Margin = System::Windows::Forms::Padding(2);
			this->Ajouter_article->Name = L"Ajouter_article";
			this->Ajouter_article->Size = System::Drawing::Size(81, 37);
			this->Ajouter_article->TabIndex = 146;
			this->Ajouter_article->Text = L"Ajouter Article";
			this->Ajouter_article->UseVisualStyleBackColor = true;
			this->Ajouter_article->Click += gcnew System::EventHandler(this, &MyFormCommande::Ajouter_article_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(13, 253);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(173, 15);
			this->label15->TabIndex = 148;
			this->label15->Text = L"Article dans la commande";
			// 
			// dataBaseCommande3
			// 
			this->dataBaseCommande3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseCommande3->Location = System::Drawing::Point(16, 273);
			this->dataBaseCommande3->Name = L"dataBaseCommande3";
			this->dataBaseCommande3->Size = System::Drawing::Size(286, 170);
			this->dataBaseCommande3->TabIndex = 147;
			// 
			// button3
			// 
			this->button3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button3->Location = System::Drawing::Point(307, 251);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 56);
			this->button3->TabIndex = 149;
			this->button3->Text = L"Actualiser Article dans la commande";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormCommande::button3_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(323, 552);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(69, 13);
			this->label16->TabIndex = 151;
			this->label16->Text = L"Code postal :";
			// 
			// CP_Livraison
			// 
			this->CP_Livraison->Location = System::Drawing::Point(326, 572);
			this->CP_Livraison->Margin = System::Windows::Forms::Padding(2);
			this->CP_Livraison->Name = L"CP_Livraison";
			this->CP_Livraison->Size = System::Drawing::Size(147, 20);
			this->CP_Livraison->TabIndex = 150;
			// 
			// dataBaseCommande4
			// 
			this->dataBaseCommande4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseCommande4->Location = System::Drawing::Point(485, 455);
			this->dataBaseCommande4->Name = L"dataBaseCommande4";
			this->dataBaseCommande4->Size = System::Drawing::Size(90, 56);
			this->dataBaseCommande4->TabIndex = 152;
			// 
			// button4
			// 
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(586, 454);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 37);
			this->button4->TabIndex = 153;
			this->button4->Text = L"Actualiser le prix";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormCommande::button4_Click);
			// 
			// MyFormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1076, 876);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataBaseCommande4);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->CP_Livraison);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->dataBaseCommande3);
			this->Controls->Add(this->Ajouter_article);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Quantite);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->ID_Article);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->id_aclient);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataBaseCommande2);
			this->Controls->Add(this->act_comCLi);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataBaseCommande1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->dateLivraison_Commande);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->infoComp_livraison);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->numRue_livraison);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ville_livraison);
			this->Controls->Add(this->nomRue_livraison);
			this->Controls->Add(this->pays_livraison);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateCommande_Commande);
			this->Controls->Add(this->act_commande);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ID_Commande);
			this->Controls->Add(this->Prenom_Client);
			this->Controls->Add(this->Reference);
			this->Controls->Add(this->mod_client);
			this->Controls->Add(this->ins_client);
			this->Controls->Add(this->sup_client);
			this->Controls->Add(this->sel_client);
			this->Controls->Add(this->dataBaseCommande);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyFormCommande";
			this->Text = L"MyFormCommande";
			this->Load += gcnew System::EventHandler(this, &MyFormCommande::MyFormCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseCommande4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Svc = gcnew NS_Comp_Svc::Commande_service();
		this->oSvc = gcnew NS_Comp_Svc::Commande_service();
		this->ooSvc = gcnew NS_Comp_Svc::Commande_service();
		this->oooSvc = gcnew NS_Comp_Svc::Commande_service();
		this->ooooSvc = gcnew NS_Comp_Svc::Commande_service();
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void datePaiement_Commande_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void act_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseCommande->Refresh();
	this->Ds = this->Svc->Commandes("Rsl");
	this->dataBaseCommande->DataSource = this->Ds;
	this->dataBaseCommande->DataMember = "Rsl";
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void mod_client_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void act_comCLi_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseCommande1->Refresh();
	this->oDs = this->oSvc->CommandesClient("Rsl");
	this->dataBaseCommande1->DataSource = this->oDs;
	this->dataBaseCommande1->DataMember = "Rsl";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseCommande2->Refresh();
	this->ooDs = this->ooSvc->CommandesArticle("Rsl");
	this->dataBaseCommande2->DataSource = this->ooDs;
	this->dataBaseCommande2->DataMember = "Rsl";
}
private: System::Void Ajouter_article_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->AddArticleCommande(int::Parse(this->ID_Commande->Text), int::Parse(this->ID_Article->Text), int::Parse(this->Quantite->Text));
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseCommande3->Refresh();
	this->oooDs = this->oooSvc->CommandesArticleCommande(int::Parse(this->ID_Commande->Text), "Rsl");
	this->dataBaseCommande3->DataSource = this->oooDs;
	this->dataBaseCommande3->DataMember = "Rsl";
}
private: System::Void ins_client_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->AddCommande(this->Reference->Text, this->dateCommande_Commande->Text, this->dateLivraison_Commande->Text, this->pays_livraison->Text, this->infoComp_livraison->Text, this->nomRue_livraison->Text, this->ville_livraison->Text, int::Parse(this->CP_Livraison->Text), int::Parse(this->numRue_livraison->Text), int::Parse(this->id_aclient->Text));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseCommande4->Refresh();
	this->ooooDs = this->ooooSvc->PrixTotal(int::Parse(this->ID_Commande->Text), "Rsl");
	this->dataBaseCommande4->DataSource = this->ooooDs;
	this->dataBaseCommande4->DataMember = "Rsl";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ FormFacture = gcnew MyFormFacture();
	FormFacture->Show();
}
};
}
