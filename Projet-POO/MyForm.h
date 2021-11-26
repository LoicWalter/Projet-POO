#pragma once

namespace testprsarahlacodeuse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label31;
	protected:
	private: System::Windows::Forms::Button^ act_personnel;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ infoComp_facturation;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ numRue_facturation;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ CP_facturation;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ ID_personnel;
	private: System::Windows::Forms::TextBox^ ville_facturation;
	private: System::Windows::Forms::TextBox^ nomRue_facturation;
	private: System::Windows::Forms::TextBox^ pays_facturation;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DateTimePicker^ dateEmbauche;
	private: System::Windows::Forms::TextBox^ prenom_personnel;
	private: System::Windows::Forms::TextBox^ nom_personnel;
	private: System::Windows::Forms::TextBox^ infoComp_livraison;
	private: System::Windows::Forms::Button^ ins_personnel;
	private: System::Windows::Forms::TextBox^ numRue_livraison;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ CP_livraison;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ville_livraison;
	private: System::Windows::Forms::TextBox^ nomRue_habitation;
	private: System::Windows::Forms::TextBox^ pays_habitation;
	private: System::Windows::Forms::Button^ mod_personnel;
	private: System::Windows::Forms::TextBox^ nomRue_livraison;
	private: System::Windows::Forms::Label^ label30;
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
	private: System::Windows::Forms::TextBox^ ville_habitation;
	private: System::Windows::Forms::Button^ sup_personnel;
	private: System::Windows::Forms::Button^ sel_personnel;
	private: System::Windows::Forms::DataGridView^ dataBasePersonnel;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TextBox^ Nom_Client;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ mod_client;
	private: System::Windows::Forms::Button^ ins_client;
	private: System::Windows::Forms::Button^ sup_client;
	private: System::Windows::Forms::Button^ sel_client;
	private: System::Windows::Forms::DataGridView^ dataBaseClient;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ superieur;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ infoComp_habitation;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ numRue_habitation;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ CP_habitation;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->act_personnel = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->infoComp_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numRue_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CP_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->ID_personnel = (gcnew System::Windows::Forms::TextBox());
			this->ville_facturation = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_facturation = (gcnew System::Windows::Forms::TextBox());
			this->pays_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->infoComp_livraison = (gcnew System::Windows::Forms::TextBox());
			this->ins_personnel = (gcnew System::Windows::Forms::Button());
			this->numRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CP_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ville_livraison = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_habitation = (gcnew System::Windows::Forms::TextBox());
			this->pays_habitation = (gcnew System::Windows::Forms::TextBox());
			this->mod_personnel = (gcnew System::Windows::Forms::Button());
			this->nomRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
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
			this->ville_habitation = (gcnew System::Windows::Forms::TextBox());
			this->sup_personnel = (gcnew System::Windows::Forms::Button());
			this->sel_personnel = (gcnew System::Windows::Forms::Button());
			this->dataBasePersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->Nom_Client = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->mod_client = (gcnew System::Windows::Forms::Button());
			this->ins_client = (gcnew System::Windows::Forms::Button());
			this->sup_client = (gcnew System::Windows::Forms::Button());
			this->sel_client = (gcnew System::Windows::Forms::Button());
			this->dataBaseClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->superieur = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->infoComp_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->numRue_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->CP_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBasePersonnel))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label31->Location = System::Drawing::Point(953, 346);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(127, 17);
			this->label31->TabIndex = 57;
			this->label31->Text = L"Date d\'embauche :";
			// 
			// act_personnel
			// 
			this->act_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_personnel->Location = System::Drawing::Point(611, 49);
			this->act_personnel->Name = L"act_personnel";
			this->act_personnel->Size = System::Drawing::Size(264, 70);
			this->act_personnel->TabIndex = 55;
			this->act_personnel->Text = L"Actualiser";
			this->act_personnel->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label33->ForeColor = System::Drawing::Color::DimGray;
			this->label33->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label33->Location = System::Drawing::Point(24, 430);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(195, 24);
			this->label33->TabIndex = 53;
			this->label33->Text = L"Adresse habitation :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(668, 598);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(204, 17);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Informations complémentaires :";
			// 
			// infoComp_facturation
			// 
			this->infoComp_facturation->Location = System::Drawing::Point(671, 620);
			this->infoComp_facturation->Name = L"infoComp_facturation";
			this->infoComp_facturation->Size = System::Drawing::Size(374, 22);
			this->infoComp_facturation->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(1065, 526);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 17);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Numéro de rue :";
			// 
			// numRue_facturation
			// 
			this->numRue_facturation->Location = System::Drawing::Point(1068, 549);
			this->numRue_facturation->Name = L"numRue_facturation";
			this->numRue_facturation->Size = System::Drawing::Size(195, 22);
			this->numRue_facturation->TabIndex = 38;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label15->Location = System::Drawing::Point(1065, 466);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 17);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Code postal : ";
			// 
			// CP_facturation
			// 
			this->CP_facturation->Location = System::Drawing::Point(1068, 490);
			this->CP_facturation->Name = L"CP_facturation";
			this->CP_facturation->Size = System::Drawing::Size(195, 22);
			this->CP_facturation->TabIndex = 36;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(668, 527);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(105, 17);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Nom de la rue :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label17->Location = System::Drawing::Point(846, 466);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 17);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Ville :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label18->Location = System::Drawing::Point(668, 467);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 17);
			this->label18->TabIndex = 33;
			this->label18->Text = L"Pays : ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label34->Location = System::Drawing::Point(953, 187);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 17);
			this->label34->TabIndex = 52;
			this->label34->Text = L"Prénom :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label35->Location = System::Drawing::Point(953, 117);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(45, 17);
			this->label35->TabIndex = 51;
			this->label35->Text = L"Nom :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label36->Location = System::Drawing::Point(953, 49);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(29, 17);
			this->label36->TabIndex = 50;
			this->label36->Text = L"ID :";
			// 
			// ID_personnel
			// 
			this->ID_personnel->Location = System::Drawing::Point(953, 71);
			this->ID_personnel->Name = L"ID_personnel";
			this->ID_personnel->Size = System::Drawing::Size(403, 22);
			this->ID_personnel->TabIndex = 49;
			// 
			// ville_facturation
			// 
			this->ville_facturation->Location = System::Drawing::Point(850, 490);
			this->ville_facturation->Name = L"ville_facturation";
			this->ville_facturation->Size = System::Drawing::Size(195, 22);
			this->ville_facturation->TabIndex = 32;
			// 
			// nomRue_facturation
			// 
			this->nomRue_facturation->Location = System::Drawing::Point(671, 549);
			this->nomRue_facturation->Name = L"nomRue_facturation";
			this->nomRue_facturation->Size = System::Drawing::Size(374, 22);
			this->nomRue_facturation->TabIndex = 31;
			// 
			// pays_facturation
			// 
			this->pays_facturation->Location = System::Drawing::Point(671, 490);
			this->pays_facturation->Name = L"pays_facturation";
			this->pays_facturation->Size = System::Drawing::Size(159, 22);
			this->pays_facturation->TabIndex = 30;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(23, 598);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(204, 17);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Informations complémentaires :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(420, 526);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Numéro de rue :";
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->Location = System::Drawing::Point(953, 377);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(224, 22);
			this->dateEmbauche->TabIndex = 56;
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Location = System::Drawing::Point(953, 210);
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(403, 22);
			this->prenom_personnel->TabIndex = 48;
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(953, 140);
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(403, 22);
			this->nom_personnel->TabIndex = 47;
			// 
			// infoComp_livraison
			// 
			this->infoComp_livraison->Location = System::Drawing::Point(26, 620);
			this->infoComp_livraison->Name = L"infoComp_livraison";
			this->infoComp_livraison->Size = System::Drawing::Size(374, 22);
			this->infoComp_livraison->TabIndex = 28;
			// 
			// ins_personnel
			// 
			this->ins_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_personnel->Location = System::Drawing::Point(755, 162);
			this->ins_personnel->Name = L"ins_personnel";
			this->ins_personnel->Size = System::Drawing::Size(120, 69);
			this->ins_personnel->TabIndex = 45;
			this->ins_personnel->Text = L"Insertion";
			this->ins_personnel->UseVisualStyleBackColor = true;
			// 
			// numRue_livraison
			// 
			this->numRue_livraison->Location = System::Drawing::Point(424, 549);
			this->numRue_livraison->Name = L"numRue_livraison";
			this->numRue_livraison->Size = System::Drawing::Size(195, 22);
			this->numRue_livraison->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(420, 466);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 17);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Code postal : ";
			// 
			// CP_livraison
			// 
			this->CP_livraison->Location = System::Drawing::Point(424, 490);
			this->CP_livraison->Name = L"CP_livraison";
			this->CP_livraison->Size = System::Drawing::Size(195, 22);
			this->CP_livraison->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(23, 527);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Nom de la rue :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(202, 466);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Ville :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(23, 467);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Pays : ";
			// 
			// ville_livraison
			// 
			this->ville_livraison->Location = System::Drawing::Point(205, 490);
			this->ville_livraison->Name = L"ville_livraison";
			this->ville_livraison->Size = System::Drawing::Size(195, 22);
			this->ville_livraison->TabIndex = 20;
			// 
			// nomRue_habitation
			// 
			this->nomRue_habitation->Location = System::Drawing::Point(28, 549);
			this->nomRue_habitation->Name = L"nomRue_habitation";
			this->nomRue_habitation->Size = System::Drawing::Size(374, 22);
			this->nomRue_habitation->TabIndex = 59;
			// 
			// pays_habitation
			// 
			this->pays_habitation->Location = System::Drawing::Point(28, 490);
			this->pays_habitation->Name = L"pays_habitation";
			this->pays_habitation->Size = System::Drawing::Size(159, 22);
			this->pays_habitation->TabIndex = 58;
			// 
			// mod_personnel
			// 
			this->mod_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_personnel->Location = System::Drawing::Point(611, 251);
			this->mod_personnel->Name = L"mod_personnel";
			this->mod_personnel->Size = System::Drawing::Size(120, 69);
			this->mod_personnel->TabIndex = 46;
			this->mod_personnel->Text = L"Modification";
			this->mod_personnel->UseVisualStyleBackColor = true;
			// 
			// nomRue_livraison
			// 
			this->nomRue_livraison->Location = System::Drawing::Point(26, 549);
			this->nomRue_livraison->Name = L"nomRue_livraison";
			this->nomRue_livraison->Size = System::Drawing::Size(374, 22);
			this->nomRue_livraison->TabIndex = 19;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label30->Location = System::Drawing::Point(25, 467);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(51, 17);
			this->label30->TabIndex = 61;
			this->label30->Text = L"Pays : ";
			// 
			// pays_livraison
			// 
			this->pays_livraison->Location = System::Drawing::Point(26, 490);
			this->pays_livraison->Name = L"pays_livraison";
			this->pays_livraison->Size = System::Drawing::Size(159, 22);
			this->pays_livraison->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(951, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Date de naissance :";
			// 
			// dateNaissance_Client
			// 
			this->dateNaissance_Client->Location = System::Drawing::Point(951, 295);
			this->dateNaissance_Client->Name = L"dateNaissance_Client";
			this->dateNaissance_Client->Size = System::Drawing::Size(224, 22);
			this->dateNaissance_Client->TabIndex = 16;
			// 
			// act_client
			// 
			this->act_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_client->Location = System::Drawing::Point(609, 49);
			this->act_client->Name = L"act_client";
			this->act_client->Size = System::Drawing::Size(264, 70);
			this->act_client->TabIndex = 15;
			this->act_client->Text = L"Actualiser";
			this->act_client->UseVisualStyleBackColor = true;
			this->act_client->Click += gcnew System::EventHandler(this, &MyForm::act_client_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label5->ForeColor = System::Drawing::Color::DimGray;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(664, 430);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Adresse Facturation :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(22, 430);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 24);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Adresse Livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(951, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(951, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Nom :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(951, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ID :";
			// 
			// ID_Client
			// 
			this->ID_Client->Location = System::Drawing::Point(951, 71);
			this->ID_Client->Name = L"ID_Client";
			this->ID_Client->Size = System::Drawing::Size(403, 22);
			this->ID_Client->TabIndex = 8;
			// 
			// Prenom_Client
			// 
			this->Prenom_Client->Location = System::Drawing::Point(951, 210);
			this->Prenom_Client->Name = L"Prenom_Client";
			this->Prenom_Client->Size = System::Drawing::Size(403, 22);
			this->Prenom_Client->TabIndex = 6;
			// 
			// ville_habitation
			// 
			this->ville_habitation->Location = System::Drawing::Point(207, 490);
			this->ville_habitation->Name = L"ville_habitation";
			this->ville_habitation->Size = System::Drawing::Size(195, 22);
			this->ville_habitation->TabIndex = 60;
			// 
			// sup_personnel
			// 
			this->sup_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_personnel->Location = System::Drawing::Point(755, 251);
			this->sup_personnel->Name = L"sup_personnel";
			this->sup_personnel->Size = System::Drawing::Size(120, 69);
			this->sup_personnel->TabIndex = 44;
			this->sup_personnel->Text = L"Suppression";
			this->sup_personnel->UseVisualStyleBackColor = true;
			// 
			// sel_personnel
			// 
			this->sel_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_personnel->Location = System::Drawing::Point(611, 162);
			this->sel_personnel->Name = L"sel_personnel";
			this->sel_personnel->Size = System::Drawing::Size(120, 69);
			this->sel_personnel->TabIndex = 43;
			this->sel_personnel->Text = L"Sélection";
			this->sel_personnel->UseVisualStyleBackColor = true;
			// 
			// dataBasePersonnel
			// 
			this->dataBasePersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBasePersonnel->Location = System::Drawing::Point(8, 6);
			this->dataBasePersonnel->Name = L"dataBasePersonnel";
			this->dataBasePersonnel->RowHeadersWidth = 51;
			this->dataBasePersonnel->RowTemplate->Height = 24;
			this->dataBasePersonnel->Size = System::Drawing::Size(530, 395);
			this->dataBasePersonnel->TabIndex = 42;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1382, 727);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stats";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// Nom_Client
			// 
			this->Nom_Client->Location = System::Drawing::Point(951, 140);
			this->Nom_Client->Name = L"Nom_Client";
			this->Nom_Client->Size = System::Drawing::Size(403, 22);
			this->Nom_Client->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->infoComp_facturation);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->numRue_facturation);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->CP_facturation);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->ville_facturation);
			this->tabPage1->Controls->Add(this->nomRue_facturation);
			this->tabPage1->Controls->Add(this->pays_facturation);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->infoComp_livraison);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->numRue_livraison);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->CP_livraison);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->ville_livraison);
			this->tabPage1->Controls->Add(this->nomRue_livraison);
			this->tabPage1->Controls->Add(this->pays_livraison);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->dateNaissance_Client);
			this->tabPage1->Controls->Add(this->act_client);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->ID_Client);
			this->tabPage1->Controls->Add(this->Prenom_Client);
			this->tabPage1->Controls->Add(this->Nom_Client);
			this->tabPage1->Controls->Add(this->mod_client);
			this->tabPage1->Controls->Add(this->ins_client);
			this->tabPage1->Controls->Add(this->sup_client);
			this->tabPage1->Controls->Add(this->sel_client);
			this->tabPage1->Controls->Add(this->dataBaseClient);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1382, 727);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			// 
			// mod_client
			// 
			this->mod_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_client->Location = System::Drawing::Point(609, 251);
			this->mod_client->Name = L"mod_client";
			this->mod_client->Size = System::Drawing::Size(120, 69);
			this->mod_client->TabIndex = 4;
			this->mod_client->Text = L"Modification";
			this->mod_client->UseVisualStyleBackColor = true;
			// 
			// ins_client
			// 
			this->ins_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_client->Location = System::Drawing::Point(753, 165);
			this->ins_client->Name = L"ins_client";
			this->ins_client->Size = System::Drawing::Size(120, 69);
			this->ins_client->TabIndex = 3;
			this->ins_client->Text = L"Insertion";
			this->ins_client->UseVisualStyleBackColor = true;
			// 
			// sup_client
			// 
			this->sup_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_client->Location = System::Drawing::Point(753, 251);
			this->sup_client->Name = L"sup_client";
			this->sup_client->Size = System::Drawing::Size(120, 69);
			this->sup_client->TabIndex = 2;
			this->sup_client->Text = L"Suppression";
			this->sup_client->UseVisualStyleBackColor = true;
			// 
			// sel_client
			// 
			this->sel_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_client->Location = System::Drawing::Point(609, 165);
			this->sel_client->Name = L"sel_client";
			this->sel_client->Size = System::Drawing::Size(120, 69);
			this->sel_client->TabIndex = 1;
			this->sel_client->Text = L"Sélection";
			this->sel_client->UseVisualStyleBackColor = true;
			// 
			// dataBaseClient
			// 
			this->dataBaseClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseClient->Location = System::Drawing::Point(6, 6);
			this->dataBaseClient->Name = L"dataBaseClient";
			this->dataBaseClient->RowHeadersWidth = 51;
			this->dataBaseClient->RowTemplate->Height = 24;
			this->dataBaseClient->Size = System::Drawing::Size(530, 395);
			this->dataBaseClient->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(0, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1390, 756);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->superieur);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->infoComp_habitation);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->numRue_habitation);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->CP_habitation);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->ville_habitation);
			this->tabPage2->Controls->Add(this->nomRue_habitation);
			this->tabPage2->Controls->Add(this->pays_habitation);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->dateEmbauche);
			this->tabPage2->Controls->Add(this->act_personnel);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->label35);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->ID_personnel);
			this->tabPage2->Controls->Add(this->prenom_personnel);
			this->tabPage2->Controls->Add(this->nom_personnel);
			this->tabPage2->Controls->Add(this->mod_personnel);
			this->tabPage2->Controls->Add(this->ins_personnel);
			this->tabPage2->Controls->Add(this->sup_personnel);
			this->tabPage2->Controls->Add(this->sel_personnel);
			this->tabPage2->Controls->Add(this->dataBasePersonnel);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1382, 727);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label20->Location = System::Drawing::Point(953, 260);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(78, 17);
			this->label20->TabIndex = 71;
			this->label20->Text = L"Supérieur :";
			// 
			// superieur
			// 
			this->superieur->Location = System::Drawing::Point(953, 283);
			this->superieur->Name = L"superieur";
			this->superieur->Size = System::Drawing::Size(403, 22);
			this->superieur->TabIndex = 70;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label25->Location = System::Drawing::Point(25, 598);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(204, 17);
			this->label25->TabIndex = 69;
			this->label25->Text = L"Informations complémentaires :";
			// 
			// infoComp_habitation
			// 
			this->infoComp_habitation->Location = System::Drawing::Point(28, 620);
			this->infoComp_habitation->Name = L"infoComp_habitation";
			this->infoComp_habitation->Size = System::Drawing::Size(374, 22);
			this->infoComp_habitation->TabIndex = 68;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label26->Location = System::Drawing::Point(422, 526);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(111, 17);
			this->label26->TabIndex = 67;
			this->label26->Text = L"Numéro de rue :";
			// 
			// numRue_habitation
			// 
			this->numRue_habitation->Location = System::Drawing::Point(426, 549);
			this->numRue_habitation->Name = L"numRue_habitation";
			this->numRue_habitation->Size = System::Drawing::Size(195, 22);
			this->numRue_habitation->TabIndex = 66;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label27->Location = System::Drawing::Point(422, 466);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(95, 17);
			this->label27->TabIndex = 65;
			this->label27->Text = L"Code postal : ";
			// 
			// CP_habitation
			// 
			this->CP_habitation->Location = System::Drawing::Point(426, 490);
			this->CP_habitation->Name = L"CP_habitation";
			this->CP_habitation->Size = System::Drawing::Size(195, 22);
			this->CP_habitation->TabIndex = 64;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label28->Location = System::Drawing::Point(25, 527);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(105, 17);
			this->label28->TabIndex = 63;
			this->label28->Text = L"Nom de la rue :";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label29->Location = System::Drawing::Point(204, 466);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(42, 17);
			this->label29->TabIndex = 62;
			this->label29->Text = L"Ville :";
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1382, 727);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1578, 917);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBasePersonnel))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void act_client_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
