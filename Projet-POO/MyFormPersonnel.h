#pragma once
//#include "affichageForms.h"
#include "Personnel_service.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPersonnel
	/// </summary>
	public ref class MyFormPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormPersonnel(void)
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
		~MyFormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label20;
	protected:
	private: System::Windows::Forms::TextBox^ superieur;
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
	private: System::Windows::Forms::DateTimePicker^ dateEmbauche;
	private: System::Windows::Forms::Button^ act_personnel;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ ID_personnel;
	private: System::Windows::Forms::TextBox^ prenom_personnel;
	private: System::Windows::Forms::TextBox^ nom_personnel;
	private: System::Windows::Forms::Button^ mod_personnel;
	private: System::Windows::Forms::Button^ ins_personnel;
	private: System::Windows::Forms::Button^ sup_personnel;
	private: System::Windows::Forms::Button^ sel_personnel;
	private: System::Windows::Forms::DataGridView^ dataBasePersonnel;
	private: NS_Comp_Svc::Personnel_service^ Svc;
	private: System::Data::DataSet^ Ds;

	private: System::Windows::Forms::Button^ retourMenu;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPersonnel::typeid));
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
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->ville_habitation = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_habitation = (gcnew System::Windows::Forms::TextBox());
			this->pays_habitation = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->dateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->act_personnel = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->ID_personnel = (gcnew System::Windows::Forms::TextBox());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->mod_personnel = (gcnew System::Windows::Forms::Button());
			this->ins_personnel = (gcnew System::Windows::Forms::Button());
			this->sup_personnel = (gcnew System::Windows::Forms::Button());
			this->sel_personnel = (gcnew System::Windows::Forms::Button());
			this->dataBasePersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBasePersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label20->Location = System::Drawing::Point(957, 265);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(78, 17);
			this->label20->TabIndex = 100;
			this->label20->Text = L"Supérieur :";
			// 
			// superieur
			// 
			this->superieur->Location = System::Drawing::Point(957, 288);
			this->superieur->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->superieur->Name = L"superieur";
			this->superieur->Size = System::Drawing::Size(403, 22);
			this->superieur->TabIndex = 99;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label25->Location = System::Drawing::Point(29, 603);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(204, 17);
			this->label25->TabIndex = 98;
			this->label25->Text = L"Informations complémentaires :";
			// 
			// infoComp_habitation
			// 
			this->infoComp_habitation->Location = System::Drawing::Point(32, 625);
			this->infoComp_habitation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->infoComp_habitation->Name = L"infoComp_habitation";
			this->infoComp_habitation->Size = System::Drawing::Size(375, 22);
			this->infoComp_habitation->TabIndex = 97;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label26->Location = System::Drawing::Point(425, 531);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(111, 17);
			this->label26->TabIndex = 96;
			this->label26->Text = L"Numéro de rue :";
			// 
			// numRue_habitation
			// 
			this->numRue_habitation->Location = System::Drawing::Point(431, 554);
			this->numRue_habitation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numRue_habitation->Name = L"numRue_habitation";
			this->numRue_habitation->Size = System::Drawing::Size(195, 22);
			this->numRue_habitation->TabIndex = 95;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label27->Location = System::Drawing::Point(425, 471);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(95, 17);
			this->label27->TabIndex = 94;
			this->label27->Text = L"Code postal : ";
			// 
			// CP_habitation
			// 
			this->CP_habitation->Location = System::Drawing::Point(431, 495);
			this->CP_habitation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CP_habitation->Name = L"CP_habitation";
			this->CP_habitation->Size = System::Drawing::Size(195, 22);
			this->CP_habitation->TabIndex = 93;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label28->Location = System::Drawing::Point(29, 532);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(105, 17);
			this->label28->TabIndex = 92;
			this->label28->Text = L"Nom de la rue :";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label29->Location = System::Drawing::Point(208, 471);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(42, 17);
			this->label29->TabIndex = 91;
			this->label29->Text = L"Ville :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label30->Location = System::Drawing::Point(29, 471);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(51, 17);
			this->label30->TabIndex = 90;
			this->label30->Text = L"Pays : ";
			// 
			// ville_habitation
			// 
			this->ville_habitation->Location = System::Drawing::Point(211, 495);
			this->ville_habitation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ville_habitation->Name = L"ville_habitation";
			this->ville_habitation->Size = System::Drawing::Size(195, 22);
			this->ville_habitation->TabIndex = 89;
			// 
			// nomRue_habitation
			// 
			this->nomRue_habitation->Location = System::Drawing::Point(32, 554);
			this->nomRue_habitation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomRue_habitation->Name = L"nomRue_habitation";
			this->nomRue_habitation->Size = System::Drawing::Size(375, 22);
			this->nomRue_habitation->TabIndex = 88;
			// 
			// pays_habitation
			// 
			this->pays_habitation->Location = System::Drawing::Point(32, 495);
			this->pays_habitation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pays_habitation->Name = L"pays_habitation";
			this->pays_habitation->Size = System::Drawing::Size(159, 22);
			this->pays_habitation->TabIndex = 87;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label31->Location = System::Drawing::Point(957, 351);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(127, 17);
			this->label31->TabIndex = 86;
			this->label31->Text = L"Date d\'embauche :";
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->CustomFormat = L"dd/MM/yyyy";
			this->dateEmbauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEmbauche->Location = System::Drawing::Point(957, 382);
			this->dateEmbauche->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(224, 22);
			this->dateEmbauche->TabIndex = 85;
			// 
			// act_personnel
			// 
			this->act_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_personnel->Location = System::Drawing::Point(615, 54);
			this->act_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->act_personnel->Name = L"act_personnel";
			this->act_personnel->Size = System::Drawing::Size(264, 70);
			this->act_personnel->TabIndex = 84;
			this->act_personnel->Text = L"Actualiser";
			this->act_personnel->UseVisualStyleBackColor = true;
			this->act_personnel->Click += gcnew System::EventHandler(this, &MyFormPersonnel::act_personnel_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label33->ForeColor = System::Drawing::Color::DimGray;
			this->label33->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label33->Location = System::Drawing::Point(28, 435);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(195, 24);
			this->label33->TabIndex = 83;
			this->label33->Text = L"Adresse habitation :";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label34->Location = System::Drawing::Point(957, 192);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 17);
			this->label34->TabIndex = 82;
			this->label34->Text = L"Prénom :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label35->Location = System::Drawing::Point(957, 122);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(45, 17);
			this->label35->TabIndex = 81;
			this->label35->Text = L"Nom :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label36->Location = System::Drawing::Point(957, 54);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(29, 17);
			this->label36->TabIndex = 80;
			this->label36->Text = L"ID :";
			// 
			// ID_personnel
			// 
			this->ID_personnel->Location = System::Drawing::Point(957, 76);
			this->ID_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_personnel->Name = L"ID_personnel";
			this->ID_personnel->Size = System::Drawing::Size(403, 22);
			this->ID_personnel->TabIndex = 79;
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Location = System::Drawing::Point(957, 215);
			this->prenom_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(403, 22);
			this->prenom_personnel->TabIndex = 78;
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(957, 145);
			this->nom_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(403, 22);
			this->nom_personnel->TabIndex = 77;
			// 
			// mod_personnel
			// 
			this->mod_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_personnel->Location = System::Drawing::Point(615, 256);
			this->mod_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mod_personnel->Name = L"mod_personnel";
			this->mod_personnel->Size = System::Drawing::Size(120, 69);
			this->mod_personnel->TabIndex = 76;
			this->mod_personnel->Text = L"Modification";
			this->mod_personnel->UseVisualStyleBackColor = true;
			this->mod_personnel->Click += gcnew System::EventHandler(this, &MyFormPersonnel::mod_personnel_Click);
			// 
			// ins_personnel
			// 
			this->ins_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_personnel->Location = System::Drawing::Point(759, 167);
			this->ins_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ins_personnel->Name = L"ins_personnel";
			this->ins_personnel->Size = System::Drawing::Size(120, 69);
			this->ins_personnel->TabIndex = 75;
			this->ins_personnel->Text = L"Insertion";
			this->ins_personnel->UseVisualStyleBackColor = true;
			this->ins_personnel->Click += gcnew System::EventHandler(this, &MyFormPersonnel::ins_personnel_Click);
			// 
			// sup_personnel
			// 
			this->sup_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_personnel->Location = System::Drawing::Point(759, 256);
			this->sup_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sup_personnel->Name = L"sup_personnel";
			this->sup_personnel->Size = System::Drawing::Size(120, 69);
			this->sup_personnel->TabIndex = 74;
			this->sup_personnel->Text = L"Suppression";
			this->sup_personnel->UseVisualStyleBackColor = true;
			this->sup_personnel->Click += gcnew System::EventHandler(this, &MyFormPersonnel::sup_personnel_Click);
			// 
			// sel_personnel
			// 
			this->sel_personnel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_personnel->Location = System::Drawing::Point(615, 167);
			this->sel_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sel_personnel->Name = L"sel_personnel";
			this->sel_personnel->Size = System::Drawing::Size(120, 69);
			this->sel_personnel->TabIndex = 73;
			this->sel_personnel->Text = L"Sélection";
			this->sel_personnel->UseVisualStyleBackColor = true;
			this->sel_personnel->Click += gcnew System::EventHandler(this, &MyFormPersonnel::sel_personnel_Click);
			// 
			// dataBasePersonnel
			// 
			this->dataBasePersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBasePersonnel->Location = System::Drawing::Point(12, 11);
			this->dataBasePersonnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataBasePersonnel->Name = L"dataBasePersonnel";
			this->dataBasePersonnel->RowHeadersWidth = 51;
			this->dataBasePersonnel->RowTemplate->Height = 24;
			this->dataBasePersonnel->Size = System::Drawing::Size(531, 395);
			this->dataBasePersonnel->TabIndex = 72;
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(32, 710);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(278, 69);
			this->retourMenu->TabIndex = 101;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormPersonnel::retourMenu_Click);
			// 
			// MyFormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1540, 846);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->superieur);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->infoComp_habitation);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->numRue_habitation);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->CP_habitation);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->ville_habitation);
			this->Controls->Add(this->nomRue_habitation);
			this->Controls->Add(this->pays_habitation);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->dateEmbauche);
			this->Controls->Add(this->act_personnel);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->ID_personnel);
			this->Controls->Add(this->prenom_personnel);
			this->Controls->Add(this->nom_personnel);
			this->Controls->Add(this->mod_personnel);
			this->Controls->Add(this->ins_personnel);
			this->Controls->Add(this->sup_personnel);
			this->Controls->Add(this->sel_personnel);
			this->Controls->Add(this->dataBasePersonnel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormPersonnel";
			this->Text = L"MyFormPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormPersonnel::MyFormPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBasePersonnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	}

private: System::Void boutonAnnulerPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void act_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBasePersonnel->Refresh();
	this->Ds = this->Svc->Personnels("Rsl");
	this->dataBasePersonnel->DataSource = this->Ds;
	this->dataBasePersonnel->DataMember = "Rsl";
}
private: System::Void sel_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBasePersonnel->Refresh();
	this->Ds = this->Svc->SelectPersonnel(int::Parse(this->ID_personnel->Text), "Rsl");
	this->dataBasePersonnel->DataSource = this->Ds;
	this->dataBasePersonnel->DataMember = "Rsl";
}
private: System::Void ins_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->AddPersonnel(this->nom_personnel->Text, this->prenom_personnel->Text, this->superieur->Text, this->dateEmbauche->Text);
}
private: System::Void mod_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->UpdatePersonnel(int::Parse(this->ID_personnel->Text), this->nom_personnel->Text, this->prenom_personnel->Text, this->superieur->Text, this->dateEmbauche->Text);
}
private: System::Void sup_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->DeletePersonnel(int::Parse(this->ID_personnel->Text));
}
private: System::Void MyFormPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Svc = gcnew NS_Comp_Svc::Personnel_service();
}
};
}
