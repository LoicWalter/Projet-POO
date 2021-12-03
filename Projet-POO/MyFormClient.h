#pragma once
#include "Client_service.h"
#include "CAD.h"

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

	protected:





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateNaissance_Client;
	private: System::Windows::Forms::Button^ act_client;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ id_aclient;
	private: System::Windows::Forms::TextBox^ Prenom_Client;
	private: System::Windows::Forms::TextBox^ Nom_Client;
	private: System::Windows::Forms::Button^ mod_client;
	private: System::Windows::Forms::Button^ ins_client;
	private: System::Windows::Forms::Button^ sup_client;
	private: System::Windows::Forms::Button^ sel_client;
	private: System::Windows::Forms::DataGridView^ dataBaseClient;
	private: System::Windows::Forms::Button^ retourMenu;



	private: NS_Comp_Svc::Client_service^ Svc;
	private: System::Data::DataSet^ Ds;



	protected:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormClient::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateNaissance_Client = (gcnew System::Windows::Forms::DateTimePicker());
			this->act_client = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->id_aclient = (gcnew System::Windows::Forms::TextBox());
			this->Prenom_Client = (gcnew System::Windows::Forms::TextBox());
			this->Nom_Client = (gcnew System::Windows::Forms::TextBox());
			this->mod_client = (gcnew System::Windows::Forms::Button());
			this->ins_client = (gcnew System::Windows::Forms::Button());
			this->sup_client = (gcnew System::Windows::Forms::Button());
			this->sel_client = (gcnew System::Windows::Forms::Button());
			this->dataBaseClient = (gcnew System::Windows::Forms::DataGridView());
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(957, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 17);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Date de naissance :";
			// 
			// dateNaissance_Client
			// 
			this->dateNaissance_Client->CustomFormat = L"dd/MM/yyyy";
			this->dateNaissance_Client->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateNaissance_Client->Location = System::Drawing::Point(957, 300);
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
			this->act_client->Click += gcnew System::EventHandler(this, &MyFormClient::act_client_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(957, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(957, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Nom :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(957, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 17);
			this->label1->TabIndex = 50;
			this->label1->Text = L"ID :";
			// 
			// id_aclient
			// 
			this->id_aclient->Location = System::Drawing::Point(957, 76);
			this->id_aclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_aclient->Name = L"id_aclient";
			this->id_aclient->Size = System::Drawing::Size(403, 22);
			this->id_aclient->TabIndex = 49;
			// 
			// Prenom_Client
			// 
			this->Prenom_Client->Location = System::Drawing::Point(957, 215);
			this->Prenom_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Prenom_Client->Name = L"Prenom_Client";
			this->Prenom_Client->Size = System::Drawing::Size(403, 22);
			this->Prenom_Client->TabIndex = 48;
			// 
			// Nom_Client
			// 
			this->Nom_Client->Location = System::Drawing::Point(957, 145);
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
			this->mod_client->Click += gcnew System::EventHandler(this, &MyFormClient::mod_client_Click);
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
			this->ins_client->Click += gcnew System::EventHandler(this, &MyFormClient::ins_client_Click);
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
			this->sup_client->Click += gcnew System::EventHandler(this, &MyFormClient::sup_client_Click);
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
			this->sel_client->Click += gcnew System::EventHandler(this, &MyFormClient::sel_client_Click);
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
			this->retourMenu->Location = System::Drawing::Point(37, 447);
			this->retourMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(277, 69);
			this->retourMenu->TabIndex = 82;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormClient::retourMenu_Click);
			// 
			// MyFormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1431, 583);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateNaissance_Client);
			this->Controls->Add(this->act_client);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->id_aclient);
			this->Controls->Add(this->Prenom_Client);
			this->Controls->Add(this->Nom_Client);
			this->Controls->Add(this->mod_client);
			this->Controls->Add(this->ins_client);
			this->Controls->Add(this->sup_client);
			this->Controls->Add(this->sel_client);
			this->Controls->Add(this->dataBaseClient);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyFormClient";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &MyFormClient::MyFormClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormClient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Svc = gcnew NS_Comp_Svc::Client_service();
	}

	private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void boutonAnnulerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void act_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataBaseClient->Refresh();
		this->Ds = this->Svc->Clients("Rsl");
		this->dataBaseClient->DataSource = this->Ds;
		this->dataBaseClient->DataMember = "Rsl";
	}

	private: System::Void sup_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Svc->DeleteClient(int::Parse(this->id_aclient->Text));
	}

	private: System::Void ins_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Svc->AddClient(this->Nom_Client->Text, this->Prenom_Client->Text, this->dateNaissance_Client->Text);
	}
private: System::Void sel_client_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseClient->Refresh();
	this->Ds = this->Svc->SelectClient(int::Parse(this->id_aclient->Text), "Rsl");
	this->dataBaseClient->DataSource = this->Ds;
	this->dataBaseClient->DataMember = "Rsl";
}

private: System::Void mod_client_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->UpdateClient(int::Parse(this->id_aclient->Text), this->Nom_Client->Text, this->Prenom_Client->Text, this->dateNaissance_Client->Text);
}




};
}
