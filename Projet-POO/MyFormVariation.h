#pragma once
#define null ((void*)0)
#include "Stock_service.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormVariation
	/// </summary>
	public ref class MyFormVariation : public System::Windows::Forms::Form
	{
	public:
		MyFormVariation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->Svc = gcnew NS_Comp_Svc::Stock_service();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormVariation()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ TVAcombo;
	private: System::Windows::Forms::ComboBox^ Remisecombo;
	private: System::Windows::Forms::ComboBox^ inconnuecombo;
	private: System::Windows::Forms::ComboBox^ margecombo;
	private: System::Windows::Forms::Button^ valider;
	private: System::Windows::Forms::DataGridView^ dataBaseVariation;
	private: NS_Comp_Svc::Stock_service^ Svc;
	private: System::Data::DataSet^ Ds;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ retourMenu;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormVariation::typeid));
			this->TVAcombo = (gcnew System::Windows::Forms::ComboBox());
			this->Remisecombo = (gcnew System::Windows::Forms::ComboBox());
			this->inconnuecombo = (gcnew System::Windows::Forms::ComboBox());
			this->margecombo = (gcnew System::Windows::Forms::ComboBox());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->dataBaseVariation = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseVariation))->BeginInit();
			this->SuspendLayout();
			// 
			// TVAcombo
			// 
			this->TVAcombo->FormattingEnabled = true;
			this->TVAcombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"10", L"15", L"20" });
			this->TVAcombo->Location = System::Drawing::Point(427, 58);
			this->TVAcombo->Margin = System::Windows::Forms::Padding(2);
			this->TVAcombo->Name = L"TVAcombo";
			this->TVAcombo->Size = System::Drawing::Size(92, 21);
			this->TVAcombo->TabIndex = 1;
			// 
			// Remisecombo
			// 
			this->Remisecombo->FormattingEnabled = true;
			this->Remisecombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5", L"6" });
			this->Remisecombo->Location = System::Drawing::Point(613, 58);
			this->Remisecombo->Margin = System::Windows::Forms::Padding(2);
			this->Remisecombo->Name = L"Remisecombo";
			this->Remisecombo->Size = System::Drawing::Size(92, 21);
			this->Remisecombo->TabIndex = 2;
			// 
			// inconnuecombo
			// 
			this->inconnuecombo->FormattingEnabled = true;
			this->inconnuecombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"5" });
			this->inconnuecombo->Location = System::Drawing::Point(427, 128);
			this->inconnuecombo->Margin = System::Windows::Forms::Padding(2);
			this->inconnuecombo->Name = L"inconnuecombo";
			this->inconnuecombo->Size = System::Drawing::Size(92, 21);
			this->inconnuecombo->TabIndex = 3;
			// 
			// margecombo
			// 
			this->margecombo->FormattingEnabled = true;
			this->margecombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->margecombo->Location = System::Drawing::Point(613, 128);
			this->margecombo->Margin = System::Windows::Forms::Padding(2);
			this->margecombo->Name = L"margecombo";
			this->margecombo->Size = System::Drawing::Size(92, 21);
			this->margecombo->TabIndex = 4;
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(427, 184);
			this->valider->Margin = System::Windows::Forms::Padding(2);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(277, 31);
			this->valider->TabIndex = 5;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &MyFormVariation::valider_Click);
			// 
			// dataBaseVariation
			// 
			this->dataBaseVariation->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseVariation->Location = System::Drawing::Point(9, 10);
			this->dataBaseVariation->Margin = System::Windows::Forms::Padding(2);
			this->dataBaseVariation->Name = L"dataBaseVariation";
			this->dataBaseVariation->RowHeadersWidth = 51;
			this->dataBaseVariation->RowTemplate->Height = 24;
			this->dataBaseVariation->Size = System::Drawing::Size(392, 339);
			this->dataBaseVariation->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(427, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"TVA en % :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(424, 111);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Demarque inconnue en % :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(610, 42);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Remise commerciale en %";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(610, 111);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Marge Commerciale en % :";
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(641, 325);
			this->retourMenu->Margin = System::Windows::Forms::Padding(2);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(106, 24);
			this->retourMenu->TabIndex = 124;
			this->retourMenu->Text = L"Retour";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &MyFormVariation::retourMenu_Click);
			// 
			// MyFormVariation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 358);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataBaseVariation);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->margecombo);
			this->Controls->Add(this->inconnuecombo);
			this->Controls->Add(this->Remisecombo);
			this->Controls->Add(this->TVAcombo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyFormVariation";
			this->Text = L"MyFormVariation";
			this->Load += gcnew System::EventHandler(this, &MyFormVariation::MyFormVariation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseVariation))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormVariation_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Svc = gcnew NS_Comp_Svc::Stock_service();
	}


private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ TVA = this->TVAcombo->SelectedItem->ToString();
	String^ Marge = this->margecombo->SelectedItem->ToString();
	String^ inconnue = this->inconnuecombo->SelectedItem->ToString();
	String^ remise = this->Remisecombo->SelectedItem->ToString();

	this->dataBaseVariation->Refresh();
	this->Ds = this->Svc->VariationStats(float::Parse(TVA), float::Parse(Marge), float::Parse(inconnue), float::Parse(remise),"Rsl");
	this->dataBaseVariation->DataSource = this->Ds;
	this->dataBaseVariation->DataMember = "Rsl";

}
private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}


