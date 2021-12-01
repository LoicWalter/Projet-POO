#pragma once
#include "Stock_service.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormArticle
	/// </summary>
	public ref class MyFormArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormArticle(void)
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
		~MyFormArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ retourMenu;
	private: System::Windows::Forms::Button^ act_Article;
	protected:

	private: NS_Comp_Svc::Stock_service^ Svc;
	private: System::Data::DataSet^ Ds;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ID_Article;
	private: System::Windows::Forms::TextBox^ PrixAchat_Article;



	private: System::Windows::Forms::TextBox^ Nom_Article;
	private: System::Windows::Forms::Button^ mod_Article;


	private: System::Windows::Forms::Button^ ins_Article;
	private: System::Windows::Forms::Button^ sup_Article;


	private: System::Windows::Forms::Button^ sel_Article;
	private: System::Windows::Forms::DataGridView^ dataBaseArticle;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ SeuilReappro_Article;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TVA_Article;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Nature_Article;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Couleur_Article;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Quantite_Article;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Marge_Article;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormArticle::typeid));
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			this->act_Article = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ID_Article = (gcnew System::Windows::Forms::TextBox());
			this->PrixAchat_Article = (gcnew System::Windows::Forms::TextBox());
			this->Nom_Article = (gcnew System::Windows::Forms::TextBox());
			this->mod_Article = (gcnew System::Windows::Forms::Button());
			this->ins_Article = (gcnew System::Windows::Forms::Button());
			this->sup_Article = (gcnew System::Windows::Forms::Button());
			this->sel_Article = (gcnew System::Windows::Forms::Button());
			this->dataBaseArticle = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SeuilReappro_Article = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TVA_Article = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Nature_Article = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Couleur_Article = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Quantite_Article = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Marge_Article = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseArticle))->BeginInit();
			this->SuspendLayout();
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(11, 410);
			this->retourMenu->Margin = System::Windows::Forms::Padding(2);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(208, 56);
			this->retourMenu->TabIndex = 97;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormArticle::retourMenu_Click);
			// 
			// act_Article
			// 
			this->act_Article->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_Article->Location = System::Drawing::Point(462, 62);
			this->act_Article->Margin = System::Windows::Forms::Padding(2);
			this->act_Article->Name = L"act_Article";
			this->act_Article->Size = System::Drawing::Size(198, 57);
			this->act_Article->TabIndex = 94;
			this->act_Article->Text = L"Actualiser";
			this->act_Article->UseVisualStyleBackColor = true;
			this->act_Article->Click += gcnew System::EventHandler(this, &MyFormArticle::act_Article_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(718, 295);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Prix Achat :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(716, 97);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 92;
			this->label2->Text = L"Nom :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(718, 54);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 91;
			this->label1->Text = L"ID :";
			// 
			// ID_Article
			// 
			this->ID_Article->Location = System::Drawing::Point(718, 69);
			this->ID_Article->Margin = System::Windows::Forms::Padding(2);
			this->ID_Article->Name = L"ID_Article";
			this->ID_Article->Size = System::Drawing::Size(303, 20);
			this->ID_Article->TabIndex = 90;
			// 
			// PrixAchat_Article
			// 
			this->PrixAchat_Article->Location = System::Drawing::Point(718, 310);
			this->PrixAchat_Article->Margin = System::Windows::Forms::Padding(2);
			this->PrixAchat_Article->Name = L"PrixAchat_Article";
			this->PrixAchat_Article->Size = System::Drawing::Size(303, 20);
			this->PrixAchat_Article->TabIndex = 89;
			// 
			// Nom_Article
			// 
			this->Nom_Article->Location = System::Drawing::Point(718, 112);
			this->Nom_Article->Margin = System::Windows::Forms::Padding(2);
			this->Nom_Article->Name = L"Nom_Article";
			this->Nom_Article->Size = System::Drawing::Size(303, 20);
			this->Nom_Article->TabIndex = 88;
			// 
			// mod_Article
			// 
			this->mod_Article->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_Article->Location = System::Drawing::Point(462, 208);
			this->mod_Article->Margin = System::Windows::Forms::Padding(2);
			this->mod_Article->Name = L"mod_Article";
			this->mod_Article->Size = System::Drawing::Size(90, 56);
			this->mod_Article->TabIndex = 87;
			this->mod_Article->Text = L"Modification";
			this->mod_Article->UseVisualStyleBackColor = true;
			this->mod_Article->Click += gcnew System::EventHandler(this, &MyFormArticle::mod_Article_Click);
			// 
			// ins_Article
			// 
			this->ins_Article->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_Article->Location = System::Drawing::Point(570, 138);
			this->ins_Article->Margin = System::Windows::Forms::Padding(2);
			this->ins_Article->Name = L"ins_Article";
			this->ins_Article->Size = System::Drawing::Size(90, 56);
			this->ins_Article->TabIndex = 86;
			this->ins_Article->Text = L"Insertion";
			this->ins_Article->UseVisualStyleBackColor = true;
			this->ins_Article->Click += gcnew System::EventHandler(this, &MyFormArticle::ins_Article_Click);
			// 
			// sup_Article
			// 
			this->sup_Article->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_Article->Location = System::Drawing::Point(570, 208);
			this->sup_Article->Margin = System::Windows::Forms::Padding(2);
			this->sup_Article->Name = L"sup_Article";
			this->sup_Article->Size = System::Drawing::Size(90, 56);
			this->sup_Article->TabIndex = 85;
			this->sup_Article->Text = L"Suppression";
			this->sup_Article->UseVisualStyleBackColor = true;
			this->sup_Article->Click += gcnew System::EventHandler(this, &MyFormArticle::sup_Article_Click);
			// 
			// sel_Article
			// 
			this->sel_Article->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_Article->Location = System::Drawing::Point(462, 138);
			this->sel_Article->Margin = System::Windows::Forms::Padding(2);
			this->sel_Article->Name = L"sel_Article";
			this->sel_Article->Size = System::Drawing::Size(90, 56);
			this->sel_Article->TabIndex = 84;
			this->sel_Article->Text = L"Sélection";
			this->sel_Article->UseVisualStyleBackColor = true;
			this->sel_Article->Click += gcnew System::EventHandler(this, &MyFormArticle::sel_Article_Click);
			// 
			// dataBaseArticle
			// 
			this->dataBaseArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseArticle->Location = System::Drawing::Point(9, 9);
			this->dataBaseArticle->Margin = System::Windows::Forms::Padding(2);
			this->dataBaseArticle->Name = L"dataBaseArticle";
			this->dataBaseArticle->RowHeadersWidth = 51;
			this->dataBaseArticle->RowTemplate->Height = 24;
			this->dataBaseArticle->Size = System::Drawing::Size(398, 321);
			this->dataBaseArticle->TabIndex = 83;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(718, 431);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 13);
			this->label4->TabIndex = 99;
			this->label4->Text = L"Seuil réapprovisionnement :";
			// 
			// SeuilReappro_Article
			// 
			this->SeuilReappro_Article->Location = System::Drawing::Point(718, 446);
			this->SeuilReappro_Article->Margin = System::Windows::Forms::Padding(2);
			this->SeuilReappro_Article->Name = L"SeuilReappro_Article";
			this->SeuilReappro_Article->Size = System::Drawing::Size(303, 20);
			this->SeuilReappro_Article->TabIndex = 98;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(716, 384);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 101;
			this->label5->Text = L"TVA (%) :";
			// 
			// TVA_Article
			// 
			this->TVA_Article->Location = System::Drawing::Point(718, 399);
			this->TVA_Article->Margin = System::Windows::Forms::Padding(2);
			this->TVA_Article->Name = L"TVA_Article";
			this->TVA_Article->Size = System::Drawing::Size(303, 20);
			this->TVA_Article->TabIndex = 100;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(716, 191);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 105;
			this->label7->Text = L"Nature :";
			// 
			// Nature_Article
			// 
			this->Nature_Article->Location = System::Drawing::Point(718, 207);
			this->Nature_Article->Margin = System::Windows::Forms::Padding(2);
			this->Nature_Article->Name = L"Nature_Article";
			this->Nature_Article->Size = System::Drawing::Size(303, 20);
			this->Nature_Article->TabIndex = 104;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(716, 142);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 107;
			this->label8->Text = L"Couleur :";
			// 
			// Couleur_Article
			// 
			this->Couleur_Article->Location = System::Drawing::Point(718, 157);
			this->Couleur_Article->Margin = System::Windows::Forms::Padding(2);
			this->Couleur_Article->Name = L"Couleur_Article";
			this->Couleur_Article->Size = System::Drawing::Size(303, 20);
			this->Couleur_Article->TabIndex = 106;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(718, 245);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 13);
			this->label9->TabIndex = 109;
			this->label9->Text = L"Quantité :";
			// 
			// Quantite_Article
			// 
			this->Quantite_Article->Location = System::Drawing::Point(718, 260);
			this->Quantite_Article->Margin = System::Windows::Forms::Padding(2);
			this->Quantite_Article->Name = L"Quantite_Article";
			this->Quantite_Article->Size = System::Drawing::Size(303, 20);
			this->Quantite_Article->TabIndex = 108;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(716, 338);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 13);
			this->label6->TabIndex = 111;
			this->label6->Text = L"Marge Commerciale (%) :";
			// 
			// Marge_Article
			// 
			this->Marge_Article->Location = System::Drawing::Point(718, 353);
			this->Marge_Article->Margin = System::Windows::Forms::Padding(2);
			this->Marge_Article->Name = L"Marge_Article";
			this->Marge_Article->Size = System::Drawing::Size(303, 20);
			this->Marge_Article->TabIndex = 110;
			// 
			// MyFormArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 477);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Marge_Article);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Quantite_Article);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Couleur_Article);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Nature_Article);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TVA_Article);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SeuilReappro_Article);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->act_Article);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ID_Article);
			this->Controls->Add(this->PrixAchat_Article);
			this->Controls->Add(this->Nom_Article);
			this->Controls->Add(this->mod_Article);
			this->Controls->Add(this->ins_Article);
			this->Controls->Add(this->sup_Article);
			this->Controls->Add(this->sel_Article);
			this->Controls->Add(this->dataBaseArticle);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyFormArticle";
			this->Text = L"MyFormArticle";
			this->Load += gcnew System::EventHandler(this, &MyFormArticle::MyFormArticle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseArticle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void act_Article_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseArticle->Refresh();
	this->Ds = this->Svc->Stocks("Rsl");
	this->dataBaseArticle->DataSource = this->Ds;
	this->dataBaseArticle->DataMember = "Rsl";
}
private: System::Void sel_Article_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseArticle->Refresh();
	this->Ds = this->Svc->SelectArticle(int::Parse(this->ID_Article->Text), "Rsl");
	this->dataBaseArticle->DataSource = this->Ds;
	this->dataBaseArticle->DataMember = "Rsl";
}
private: System::Void ins_Article_Click(System::Object^ sender, System::EventArgs^ e) {
	float PrixAchat = float::Parse(this->PrixAchat_Article->Text);
	int MargeCom = int::Parse(this->Marge_Article->Text);
	float PrixHT = PrixAchat + (PrixAchat * MargeCom / 100);
	int TVA = int::Parse(this->TVA_Article->Text);
	float prixTTC = PrixHT + (PrixHT * TVA / 100);

	this->Svc->AddArticle(this->Nom_Article->Text, this->Nature_Article->Text, this->Couleur_Article->Text, int::Parse(this->Quantite_Article->Text), PrixHT, prixTTC, PrixAchat, MargeCom, TVA, int::Parse(this->SeuilReappro_Article->Text));
}
private: System::Void mod_Article_Click(System::Object^ sender, System::EventArgs^ e) {
	float PrixAchat = float::Parse(this->PrixAchat_Article->Text);
	int MargeCom = int::Parse(this->Marge_Article->Text);
	float PrixHT = PrixAchat + (PrixAchat * MargeCom / 100);
	int TVA = int::Parse(this->TVA_Article->Text);
	float prixTTC = PrixHT + (PrixHT * TVA / 100);
	this->Svc->UpdateArticle(int::Parse(this->ID_Article->Text), this->Nom_Article->Text, this->Nature_Article->Text, this->Couleur_Article->Text, int::Parse(this->Quantite_Article->Text), PrixHT, prixTTC, PrixAchat, MargeCom, TVA, int::Parse(this->SeuilReappro_Article->Text));
}
private: System::Void sup_Article_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Svc->DeleteArticle(int::Parse(this->ID_Article->Text));
}

private: System::Void MyFormArticle_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Svc = gcnew NS_Comp_Svc::Stock_service();
}
};
}
