#pragma once


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormClient
	/// </summary>
	public ref class MyFormClient : public System::Windows::Forms::Form
	{
	public:
		MyFormClient(void)
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
		~MyFormClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label13;
	protected:
	private: System::Windows::Forms::TextBox^ infoComp_facturation;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ numRue_facturation;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ CP_facturation;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ ville_facturation;
	private: System::Windows::Forms::TextBox^ nomRue_facturation;
	private: System::Windows::Forms::TextBox^ pays_facturation;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ infoComp_livraison;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ numRue_livraison;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ CP_livraison;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ville_livraison;
	private: System::Windows::Forms::TextBox^ nomRue_livraison;
	private: System::Windows::Forms::TextBox^ pays_livraison;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateNaissance_Client;
	private: System::Windows::Forms::Button^ act_client;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ID_Client;
	private: System::Windows::Forms::TextBox^ Prenom_Client;
	private: System::Windows::Forms::TextBox^ Nom_Client;
	private: System::Windows::Forms::Button^ mod_client;
	private: System::Windows::Forms::Button^ ins_client;
	private: System::Windows::Forms::Button^ sup_client;
	private: System::Windows::Forms::Button^ sel_client;
	private: System::Windows::Forms::DataGridView^ dataBaseClient;
	private: System::Windows::Forms::Button^ retourMenu;
	private: System::Windows::Forms::Button^ boutonAnnulerClient;
	private: System::Windows::Forms::Button^ boutonValiderClient;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormClient::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->infoComp_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numRue_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CP_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->ville_facturation = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_facturation = (gcnew System::Windows::Forms::TextBox());
			this->pays_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->infoComp_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CP_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ville_livraison = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->pays_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateNaissance_Client = (gcnew System::Windows::Forms::DateTimePicker());
			this->act_client = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ID_Client = (gcnew System::Windows::Forms::TextBox());
			this->Prenom_Client = (gcnew System::Windows::Forms::TextBox());
			this->Nom_Client = (gcnew System::Windows::Forms::TextBox());
			this->mod_client = (gcnew System::Windows::Forms::Button());
			this->ins_client = (gcnew System::Windows::Forms::Button());
			this->sup_client = (gcnew System::Windows::Forms::Button());
			this->sel_client = (gcnew System::Windows::Forms::Button());
			this->dataBaseClient = (gcnew System::Windows::Forms::DataGridView());
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			this->boutonAnnulerClient = (gcnew System::Windows::Forms::Button());
			this->boutonValiderClient = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->BeginInit();
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(675, 603);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(204, 17);
			this->label13->TabIndex = 81;
			this->label13->Text = L"Informations complémentaires :";
			// 
			// infoComp_facturation
			// 
			this->infoComp_facturation->Location = System::Drawing::Point(678, 625);
			this->infoComp_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->infoComp_facturation->Name = L"infoComp_facturation";
			this->infoComp_facturation->Size = System::Drawing::Size(375, 22);
			this->infoComp_facturation->TabIndex = 80;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(1072, 531);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 17);
			this->label14->TabIndex = 79;
			this->label14->Text = L"Numéro de rue :";
			// 
			// numRue_facturation
			// 
			this->numRue_facturation->Location = System::Drawing::Point(1075, 554);
			this->numRue_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numRue_facturation->Name = L"numRue_facturation";
			this->numRue_facturation->Size = System::Drawing::Size(195, 22);
			this->numRue_facturation->TabIndex = 78;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label15->Location = System::Drawing::Point(1072, 471);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 17);
			this->label15->TabIndex = 77;
			this->label15->Text = L"Code postal : ";
			// 
			// CP_facturation
			// 
			this->CP_facturation->Location = System::Drawing::Point(1075, 495);
			this->CP_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CP_facturation->Name = L"CP_facturation";
			this->CP_facturation->Size = System::Drawing::Size(195, 22);
			this->CP_facturation->TabIndex = 76;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(675, 532);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(105, 17);
			this->label16->TabIndex = 75;
			this->label16->Text = L"Nom de la rue :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label17->Location = System::Drawing::Point(852, 471);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 17);
			this->label17->TabIndex = 74;
			this->label17->Text = L"Ville :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label18->Location = System::Drawing::Point(675, 471);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 17);
			this->label18->TabIndex = 73;
			this->label18->Text = L"Pays : ";
			// 
			// ville_facturation
			// 
			this->ville_facturation->Location = System::Drawing::Point(858, 495);
			this->ville_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ville_facturation->Name = L"ville_facturation";
			this->ville_facturation->Size = System::Drawing::Size(195, 22);
			this->ville_facturation->TabIndex = 72;
			// 
			// nomRue_facturation
			// 
			this->nomRue_facturation->Location = System::Drawing::Point(678, 554);
			this->nomRue_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomRue_facturation->Name = L"nomRue_facturation";
			this->nomRue_facturation->Size = System::Drawing::Size(375, 22);
			this->nomRue_facturation->TabIndex = 71;
			// 
			// pays_facturation
			// 
			this->pays_facturation->Location = System::Drawing::Point(678, 495);
			this->pays_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pays_facturation->Name = L"pays_facturation";
			this->pays_facturation->Size = System::Drawing::Size(159, 22);
			this->pays_facturation->TabIndex = 70;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(30, 603);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(204, 17);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Informations complémentaires :";
			// 
			// infoComp_livraison
			// 
			this->infoComp_livraison->Location = System::Drawing::Point(34, 625);
			this->infoComp_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->infoComp_livraison->Name = L"infoComp_livraison";
			this->infoComp_livraison->Size = System::Drawing::Size(375, 22);
			this->infoComp_livraison->TabIndex = 68;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(427, 531);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 67;
			this->label11->Text = L"Numéro de rue :";
			// 
			// numRue_livraison
			// 
			this->numRue_livraison->Location = System::Drawing::Point(431, 554);
			this->numRue_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numRue_livraison->Name = L"numRue_livraison";
			this->numRue_livraison->Size = System::Drawing::Size(195, 22);
			this->numRue_livraison->TabIndex = 66;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(427, 471);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 17);
			this->label10->TabIndex = 65;
			this->label10->Text = L"Code postal : ";
			// 
			// CP_livraison
			// 
			this->CP_livraison->Location = System::Drawing::Point(431, 495);
			this->CP_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CP_livraison->Name = L"CP_livraison";
			this->CP_livraison->Size = System::Drawing::Size(195, 22);
			this->CP_livraison->TabIndex = 64;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(30, 532);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 17);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Nom de la rue :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(210, 471);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 62;
			this->label8->Text = L"Ville :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(30, 471);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 17);
			this->label7->TabIndex = 61;
			this->label7->Text = L"Pays : ";
			// 
			// ville_livraison
			// 
			this->ville_livraison->Location = System::Drawing::Point(212, 495);
			this->ville_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ville_livraison->Name = L"ville_livraison";
			this->ville_livraison->Size = System::Drawing::Size(195, 22);
			this->ville_livraison->TabIndex = 60;
			// 
			// nomRue_livraison
			// 
			this->nomRue_livraison->Location = System::Drawing::Point(34, 554);
			this->nomRue_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomRue_livraison->Name = L"nomRue_livraison";
			this->nomRue_livraison->Size = System::Drawing::Size(375, 22);
			this->nomRue_livraison->TabIndex = 59;
			// 
			// pays_livraison
			// 
			this->pays_livraison->Location = System::Drawing::Point(34, 495);
			this->pays_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pays_livraison->Name = L"pays_livraison";
			this->pays_livraison->Size = System::Drawing::Size(159, 22);
			this->pays_livraison->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(958, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 17);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Date de naissance :";
			// 
			// dateNaissance_Client
			// 
			this->dateNaissance_Client->Location = System::Drawing::Point(958, 300);
			this->dateNaissance_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateNaissance_Client->Name = L"dateNaissance_Client";
			this->dateNaissance_Client->Size = System::Drawing::Size(224, 22);
			this->dateNaissance_Client->TabIndex = 56;
			// 
			// act_client
			// 
			this->act_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_client->Location = System::Drawing::Point(616, 76);
			this->act_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->act_client->Name = L"act_client";
			this->act_client->Size = System::Drawing::Size(264, 70);
			this->act_client->TabIndex = 55;
			this->act_client->Text = L"Actualiser";
			this->act_client->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label5->ForeColor = System::Drawing::Color::DimGray;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(671, 435);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 24);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Adresse Facturation :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(28, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 24);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Adresse Livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(958, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(958, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Nom :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(958, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 17);
			this->label1->TabIndex = 50;
			this->label1->Text = L"ID :";
			// 
			// ID_Client
			// 
			this->ID_Client->Location = System::Drawing::Point(958, 76);
			this->ID_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_Client->Name = L"ID_Client";
			this->ID_Client->Size = System::Drawing::Size(403, 22);
			this->ID_Client->TabIndex = 49;
			// 
			// Prenom_Client
			// 
			this->Prenom_Client->Location = System::Drawing::Point(958, 215);
			this->Prenom_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Prenom_Client->Name = L"Prenom_Client";
			this->Prenom_Client->Size = System::Drawing::Size(403, 22);
			this->Prenom_Client->TabIndex = 48;
			// 
			// Nom_Client
			// 
			this->Nom_Client->Location = System::Drawing::Point(958, 145);
			this->Nom_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Nom_Client->Name = L"Nom_Client";
			this->Nom_Client->Size = System::Drawing::Size(403, 22);
			this->Nom_Client->TabIndex = 47;
			// 
			// mod_client
			// 
			this->mod_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_client->Location = System::Drawing::Point(616, 256);
			this->mod_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mod_client->Name = L"mod_client";
			this->mod_client->Size = System::Drawing::Size(120, 69);
			this->mod_client->TabIndex = 46;
			this->mod_client->Text = L"Modification";
			this->mod_client->UseVisualStyleBackColor = true;
			// 
			// ins_client
			// 
			this->ins_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_client->Location = System::Drawing::Point(760, 170);
			this->ins_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ins_client->Name = L"ins_client";
			this->ins_client->Size = System::Drawing::Size(120, 69);
			this->ins_client->TabIndex = 45;
			this->ins_client->Text = L"Insertion";
			this->ins_client->UseVisualStyleBackColor = true;
			// 
			// sup_client
			// 
			this->sup_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_client->Location = System::Drawing::Point(760, 256);
			this->sup_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sup_client->Name = L"sup_client";
			this->sup_client->Size = System::Drawing::Size(120, 69);
			this->sup_client->TabIndex = 44;
			this->sup_client->Text = L"Suppression";
			this->sup_client->UseVisualStyleBackColor = true;
			// 
			// sel_client
			// 
			this->sel_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_client->Location = System::Drawing::Point(616, 170);
			this->sel_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sel_client->Name = L"sel_client";
			this->sel_client->Size = System::Drawing::Size(120, 69);
			this->sel_client->TabIndex = 43;
			this->sel_client->Text = L"Sélection";
			this->sel_client->UseVisualStyleBackColor = true;
			// 
			// dataBaseClient
			// 
			this->dataBaseClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseClient->Location = System::Drawing::Point(12, 11);
			this->dataBaseClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataBaseClient->Name = L"dataBaseClient";
			this->dataBaseClient->RowHeadersWidth = 51;
			this->dataBaseClient->RowTemplate->Height = 24;
			this->dataBaseClient->Size = System::Drawing::Size(531, 395);
			this->dataBaseClient->TabIndex = 42;
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(32, 722);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(278, 69);
			this->retourMenu->TabIndex = 82;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormClient::retourMenu_Click);
			// 
			// boutonAnnulerClient
			// 
			this->boutonAnnulerClient->Location = System::Drawing::Point(678, 722);
			this->boutonAnnulerClient->Name = L"boutonAnnulerClient";
			this->boutonAnnulerClient->Size = System::Drawing::Size(278, 69);
			this->boutonAnnulerClient->TabIndex = 83;
			this->boutonAnnulerClient->Text = L"Annuler";
			this->boutonAnnulerClient->UseVisualStyleBackColor = true;
			this->boutonAnnulerClient->Click += gcnew System::EventHandler(this, &MyFormClient::boutonAnnulerClient_Click);
			// 
			// boutonValiderClient
			// 
			this->boutonValiderClient->Location = System::Drawing::Point(992, 722);
			this->boutonValiderClient->Name = L"boutonValiderClient";
			this->boutonValiderClient->Size = System::Drawing::Size(278, 69);
			this->boutonValiderClient->TabIndex = 84;
			this->boutonValiderClient->Text = L"Valider";
			this->boutonValiderClient->UseVisualStyleBackColor = true;
			// 
			// MyFormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1691, 898);
			this->Controls->Add(this->boutonValiderClient);
			this->Controls->Add(this->boutonAnnulerClient);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->infoComp_facturation);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->numRue_facturation);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->CP_facturation);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->ville_facturation);
			this->Controls->Add(this->nomRue_facturation);
			this->Controls->Add(this->pays_facturation);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->infoComp_livraison);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->numRue_livraison);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->CP_livraison);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ville_livraison);
			this->Controls->Add(this->nomRue_livraison);
			this->Controls->Add(this->pays_livraison);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateNaissance_Client);
			this->Controls->Add(this->act_client);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ID_Client);
			this->Controls->Add(this->Prenom_Client);
			this->Controls->Add(this->Nom_Client);
			this->Controls->Add(this->mod_client);
			this->Controls->Add(this->ins_client);
			this->Controls->Add(this->sup_client);
			this->Controls->Add(this->sel_client);
			this->Controls->Add(this->dataBaseClient);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormClient";
			this->Text = L"Mish";
			this->Load += gcnew System::EventHandler(this, &MyFormClient::MyFormClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void boutonAnnulerClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
