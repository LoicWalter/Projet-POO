#pragma once
#include "MyFormVariation.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStats
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
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormStats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStats::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(726, 717);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(821, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Panier Moyen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(821, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Chiffre d\'affaire d\'un mois";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(821, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L"produits sous le seuil de réappro.";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(821, 274);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 51);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Total achat pour un client";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(821, 331);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 51);
			this->button5->TabIndex = 5;
			this->button5->Text = L"10 meilleures ventes";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(821, 388);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 51);
			this->button6->TabIndex = 6;
			this->button6->Text = L"10 pires ventes";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(821, 445);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 51);
			this->button7->TabIndex = 7;
			this->button7->Text = L"valeur commerciale stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(821, 502);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(146, 51);
			this->button8->TabIndex = 8;
			this->button8->Text = L"valeur d\'achat du stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(821, 559);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(146, 51);
			this->button9->TabIndex = 9;
			this->button9->Text = L"simuler les variations";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyFormStats::button9_Click);
			// 
			// MyFormStats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 741);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormStats";
			this->Text = L"MyFormStats";
			this->Load += gcnew System::EventHandler(this, &MyFormStats::MyFormStats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MyFormStats_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ FormMenuVariation = gcnew MyFormVariation();
	FormMenuVariation->Show();
}
};
}
