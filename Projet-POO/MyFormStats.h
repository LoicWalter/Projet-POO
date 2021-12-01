#pragma once
#include "MyFormVariation.h"
#include "Stock_service.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyFormStats
	/// </summary>
	public ref class MyFormStats : public System::Windows::Forms::Form
	{
	public:
		MyFormStats(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormStats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataBaseStats;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ reappro;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ retourMenu;

	private: NS_Comp_Svc::Stock_service^ Svc;
	private: System::Data::DataSet^ Ds;
	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStats::typeid));
			this->dataBaseStats = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->reappro = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseStats))->BeginInit();
			this->SuspendLayout();
			// 
			// dataBaseStats
			// 
			this->dataBaseStats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseStats->Location = System::Drawing::Point(9, 10);
			this->dataBaseStats->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataBaseStats->Name = L"dataBaseStats";
			this->dataBaseStats->RowHeadersWidth = 51;
			this->dataBaseStats->RowTemplate->Height = 24;
			this->dataBaseStats->Size = System::Drawing::Size(544, 583);
			this->dataBaseStats->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(616, 84);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Panier Moyen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(616, 130);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Chiffre d\'affaire d\'un mois";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// reappro
			// 
			this->reappro->Location = System::Drawing::Point(616, 176);
			this->reappro->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->reappro->Name = L"reappro";
			this->reappro->Size = System::Drawing::Size(110, 41);
			this->reappro->TabIndex = 3;
			this->reappro->Text = L"produits sous le seuil de r�appro.";
			this->reappro->UseVisualStyleBackColor = true;
			this->reappro->Click += gcnew System::EventHandler(this, &MyFormStats::reappro_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(616, 223);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 41);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Total achat pour un client";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(616, 269);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"10 meilleures ventes";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(616, 315);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 41);
			this->button6->TabIndex = 6;
			this->button6->Text = L"10 pires ventes";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(616, 362);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 41);
			this->button7->TabIndex = 7;
			this->button7->Text = L"valeur commerciale stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(616, 408);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(110, 41);
			this->button8->TabIndex = 8;
			this->button8->Text = L"valeur d\'achat du stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(616, 454);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(110, 41);
			this->button9->TabIndex = 9;
			this->button9->Text = L"simuler les variations";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyFormStats::button9_Click);
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(644, 557);
			this->retourMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(132, 36);
			this->retourMenu->TabIndex = 98;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormStats::retourMenu_Click);
			// 
			// MyFormStats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 602);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->reappro);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataBaseStats);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyFormStats";
			this->Text = L"MyFormStats";
			this->Load += gcnew System::EventHandler(this, &MyFormStats::MyFormStats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseStats))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MyFormStats_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Svc = gcnew NS_Comp_Svc::Stock_service();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ FormMenuVariation = gcnew MyFormVariation();
	FormMenuVariation->Show();
}
private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void reappro_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataBaseStats->Refresh();
	this->Ds = this->Svc->ReapproDepasse("Rsl");
	this->dataBaseStats->DataSource = this->Ds;
	this->dataBaseStats->DataMember = "Rsl";
}
};
}
