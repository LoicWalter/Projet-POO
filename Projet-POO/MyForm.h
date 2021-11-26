#pragma once

namespace ProjetPOO {

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


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ mod_client;
	private: System::Windows::Forms::Button^ ins_client;


	private: System::Windows::Forms::Button^ sup_client;
	private: System::Windows::Forms::Button^ sel_client;




	private: System::Windows::Forms::TextBox^ Prenom_Client;

	private: System::Windows::Forms::TextBox^ Nom_Client;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ID_Client;

	private: System::Windows::Forms::Button^ act_client;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateNaissance_Client;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ville_livraison;
	private: System::Windows::Forms::TextBox^ nomRue_livraison;


	private: System::Windows::Forms::TextBox^ pays_livraison;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ CP_livraison;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ infoComp_livraison;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ numRue_livraison;
	private: System::Windows::Forms::Label^ label13;
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












	private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ infoComp_habitation;

	private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ numRue_habitation;

	private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ CP_habitation;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ ville_habitation;
private: System::Windows::Forms::TextBox^ nomRue_habitation;


private: System::Windows::Forms::TextBox^ pays_habitation;

	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->infoComp_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->numRue_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->CP_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->ville_habitation = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_habitation = (gcnew System::Windows::Forms::TextBox());
			this->pays_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// tabControl1
			// 
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			resources->ApplyResources(this->tabPage1, L"tabPage1");
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
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// infoComp_facturation
			// 
			resources->ApplyResources(this->infoComp_facturation, L"infoComp_facturation");
			this->infoComp_facturation->Name = L"infoComp_facturation";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// numRue_facturation
			// 
			resources->ApplyResources(this->numRue_facturation, L"numRue_facturation");
			this->numRue_facturation->Name = L"numRue_facturation";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			// 
			// CP_facturation
			// 
			resources->ApplyResources(this->CP_facturation, L"CP_facturation");
			this->CP_facturation->Name = L"CP_facturation";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->Name = L"label18";
			// 
			// ville_facturation
			// 
			resources->ApplyResources(this->ville_facturation, L"ville_facturation");
			this->ville_facturation->Name = L"ville_facturation";
			// 
			// nomRue_facturation
			// 
			resources->ApplyResources(this->nomRue_facturation, L"nomRue_facturation");
			this->nomRue_facturation->Name = L"nomRue_facturation";
			// 
			// pays_facturation
			// 
			resources->ApplyResources(this->pays_facturation, L"pays_facturation");
			this->pays_facturation->Name = L"pays_facturation";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			// 
			// infoComp_livraison
			// 
			resources->ApplyResources(this->infoComp_livraison, L"infoComp_livraison");
			this->infoComp_livraison->Name = L"infoComp_livraison";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// numRue_livraison
			// 
			resources->ApplyResources(this->numRue_livraison, L"numRue_livraison");
			this->numRue_livraison->Name = L"numRue_livraison";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// CP_livraison
			// 
			resources->ApplyResources(this->CP_livraison, L"CP_livraison");
			this->CP_livraison->Name = L"CP_livraison";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// ville_livraison
			// 
			resources->ApplyResources(this->ville_livraison, L"ville_livraison");
			this->ville_livraison->Name = L"ville_livraison";
			// 
			// nomRue_livraison
			// 
			resources->ApplyResources(this->nomRue_livraison, L"nomRue_livraison");
			this->nomRue_livraison->Name = L"nomRue_livraison";
			// 
			// pays_livraison
			// 
			resources->ApplyResources(this->pays_livraison, L"pays_livraison");
			this->pays_livraison->Name = L"pays_livraison";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// dateNaissance_Client
			// 
			resources->ApplyResources(this->dateNaissance_Client, L"dateNaissance_Client");
			this->dateNaissance_Client->Name = L"dateNaissance_Client";
			// 
			// act_client
			// 
			resources->ApplyResources(this->act_client, L"act_client");
			this->act_client->Name = L"act_client";
			this->act_client->UseVisualStyleBackColor = true;
			this->act_client->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::Color::DimGray;
			this->label5->Name = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Name = L"label4";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ID_Client
			// 
			resources->ApplyResources(this->ID_Client, L"ID_Client");
			this->ID_Client->Name = L"ID_Client";
			// 
			// Prenom_Client
			// 
			resources->ApplyResources(this->Prenom_Client, L"Prenom_Client");
			this->Prenom_Client->Name = L"Prenom_Client";
			// 
			// Nom_Client
			// 
			resources->ApplyResources(this->Nom_Client, L"Nom_Client");
			this->Nom_Client->Name = L"Nom_Client";
			// 
			// mod_client
			// 
			resources->ApplyResources(this->mod_client, L"mod_client");
			this->mod_client->Name = L"mod_client";
			this->mod_client->UseVisualStyleBackColor = true;
			// 
			// ins_client
			// 
			resources->ApplyResources(this->ins_client, L"ins_client");
			this->ins_client->Name = L"ins_client";
			this->ins_client->UseVisualStyleBackColor = true;
			// 
			// sup_client
			// 
			resources->ApplyResources(this->sup_client, L"sup_client");
			this->sup_client->Name = L"sup_client";
			this->sup_client->UseVisualStyleBackColor = true;
			this->sup_client->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// sel_client
			// 
			resources->ApplyResources(this->sel_client, L"sel_client");
			this->sel_client->Name = L"sel_client";
			this->sel_client->UseVisualStyleBackColor = true;
			this->sel_client->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			// 
			// tabPage2
			// 
			resources->ApplyResources(this->tabPage2, L"tabPage2");
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
			this->tabPage2->Controls->Add(this->dateTimePicker1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->label35);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			resources->ApplyResources(this->tabPage3, L"tabPage3");
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			resources->ApplyResources(this->tabPage4, L"tabPage4");
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			resources->ApplyResources(this->label25, L"label25");
			this->label25->Name = L"label25";
			// 
			// infoComp_habitation
			// 
			resources->ApplyResources(this->infoComp_habitation, L"infoComp_habitation");
			this->infoComp_habitation->Name = L"infoComp_habitation";
			// 
			// label26
			// 
			resources->ApplyResources(this->label26, L"label26");
			this->label26->Name = L"label26";
			// 
			// numRue_habitation
			// 
			resources->ApplyResources(this->numRue_habitation, L"numRue_habitation");
			this->numRue_habitation->Name = L"numRue_habitation";
			// 
			// label27
			// 
			resources->ApplyResources(this->label27, L"label27");
			this->label27->Name = L"label27";
			// 
			// CP_habitation
			// 
			resources->ApplyResources(this->CP_habitation, L"CP_habitation");
			this->CP_habitation->Name = L"CP_habitation";
			// 
			// label28
			// 
			resources->ApplyResources(this->label28, L"label28");
			this->label28->Name = L"label28";
			// 
			// label29
			// 
			resources->ApplyResources(this->label29, L"label29");
			this->label29->Name = L"label29";
			// 
			// label30
			// 
			resources->ApplyResources(this->label30, L"label30");
			this->label30->Name = L"label30";
			// 
			// ville_habitation
			// 
			resources->ApplyResources(this->ville_habitation, L"ville_habitation");
			this->ville_habitation->Name = L"ville_habitation";
			// 
			// nomRue_habitation
			// 
			resources->ApplyResources(this->nomRue_habitation, L"nomRue_habitation");
			this->nomRue_habitation->Name = L"nomRue_habitation";
			// 
			// pays_habitation
			// 
			resources->ApplyResources(this->pays_habitation, L"pays_habitation");
			this->pays_habitation->Name = L"pays_habitation";
			// 
			// label31
			// 
			resources->ApplyResources(this->label31, L"label31");
			this->label31->Name = L"label31";
			// 
			// dateTimePicker1
			// 
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			resources->ApplyResources(this->label33, L"label33");
			this->label33->ForeColor = System::Drawing::Color::DimGray;
			this->label33->Name = L"label33";
			// 
			// label34
			// 
			resources->ApplyResources(this->label34, L"label34");
			this->label34->Name = L"label34";
			// 
			// label35
			// 
			resources->ApplyResources(this->label35, L"label35");
			this->label35->Name = L"label35";
			// 
			// label36
			// 
			resources->ApplyResources(this->label36, L"label36");
			this->label36->Name = L"label36";
			// 
			// textBox13
			// 
			resources->ApplyResources(this->textBox13, L"textBox13");
			this->textBox13->Name = L"textBox13";
			// 
			// textBox14
			// 
			resources->ApplyResources(this->textBox14, L"textBox14");
			this->textBox14->Name = L"textBox14";
			// 
			// textBox15
			// 
			resources->ApplyResources(this->textBox15, L"textBox15");
			this->textBox15->Name = L"textBox15";
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			resources->ApplyResources(this->dataGridView2, L"dataGridView2");
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStripTextBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
