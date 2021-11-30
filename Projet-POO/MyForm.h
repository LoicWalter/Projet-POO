#pragma once
#include "MyFormClient.h"
#include "MyFormPersonnel.h"

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
	private: System::Windows::Forms::Button^ boutonClientMenu;
	private: System::Windows::Forms::Button^ boutonPersonnelMenu;
	private: System::Windows::Forms::Button^ buttonStats;
	private: System::Windows::Forms::Button^ boutonCommandeMenu;
	protected:

	protected:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ boutonArticleMenu;




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
			this->boutonClientMenu = (gcnew System::Windows::Forms::Button());
			this->boutonPersonnelMenu = (gcnew System::Windows::Forms::Button());
			this->buttonStats = (gcnew System::Windows::Forms::Button());
			this->boutonCommandeMenu = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->boutonArticleMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// boutonClientMenu
			// 
			this->boutonClientMenu->AutoSize = true;
			this->boutonClientMenu->BackColor = System::Drawing::Color::Transparent;
			this->boutonClientMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->boutonClientMenu->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->boutonClientMenu->FlatAppearance->BorderSize = 0;
			this->boutonClientMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boutonClientMenu->ForeColor = System::Drawing::Color::Black;
			this->boutonClientMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boutonClientMenu.Image")));
			this->boutonClientMenu->Location = System::Drawing::Point(163, 375);
			this->boutonClientMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boutonClientMenu->Name = L"boutonClientMenu";
			this->boutonClientMenu->Size = System::Drawing::Size(195, 57);
			this->boutonClientMenu->TabIndex = 0;
			this->boutonClientMenu->TabStop = false;
			this->boutonClientMenu->Text = L"Client";
			this->boutonClientMenu->UseVisualStyleBackColor = false;
			this->boutonClientMenu->Click += gcnew System::EventHandler(this, &MyForm::buttonClient_Click);
			// 
			// boutonPersonnelMenu
			// 
			this->boutonPersonnelMenu->AutoSize = true;
			this->boutonPersonnelMenu->BackColor = System::Drawing::Color::Transparent;
			this->boutonPersonnelMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->boutonPersonnelMenu->FlatAppearance->BorderSize = 0;
			this->boutonPersonnelMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boutonPersonnelMenu->ForeColor = System::Drawing::Color::Black;
			this->boutonPersonnelMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boutonPersonnelMenu.Image")));
			this->boutonPersonnelMenu->Location = System::Drawing::Point(160, 439);
			this->boutonPersonnelMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boutonPersonnelMenu->Name = L"boutonPersonnelMenu";
			this->boutonPersonnelMenu->Size = System::Drawing::Size(197, 59);
			this->boutonPersonnelMenu->TabIndex = 1;
			this->boutonPersonnelMenu->Text = L"Personnel";
			this->boutonPersonnelMenu->UseVisualStyleBackColor = false;
			this->boutonPersonnelMenu->Click += gcnew System::EventHandler(this, &MyForm::boutonPersonnelMenu_Click);
			// 
			// buttonStats
			// 
			this->buttonStats->AutoSize = true;
			this->buttonStats->BackColor = System::Drawing::Color::Transparent;
			this->buttonStats->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonStats->FlatAppearance->BorderSize = 0;
			this->buttonStats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStats->ForeColor = System::Drawing::Color::Black;
			this->buttonStats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonStats.Image")));
			this->buttonStats->Location = System::Drawing::Point(160, 506);
			this->buttonStats->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonStats->Name = L"buttonStats";
			this->buttonStats->Size = System::Drawing::Size(197, 59);
			this->buttonStats->TabIndex = 2;
			this->buttonStats->Text = L"Statistiques";
			this->buttonStats->UseVisualStyleBackColor = false;
			this->buttonStats->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// boutonCommandeMenu
			// 
			this->boutonCommandeMenu->AutoSize = true;
			this->boutonCommandeMenu->BackColor = System::Drawing::Color::Transparent;
			this->boutonCommandeMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->boutonCommandeMenu->FlatAppearance->BorderSize = 0;
			this->boutonCommandeMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boutonCommandeMenu->ForeColor = System::Drawing::Color::Black;
			this->boutonCommandeMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boutonCommandeMenu.Image")));
			this->boutonCommandeMenu->Location = System::Drawing::Point(160, 572);
			this->boutonCommandeMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boutonCommandeMenu->Name = L"boutonCommandeMenu";
			this->boutonCommandeMenu->Size = System::Drawing::Size(197, 59);
			this->boutonCommandeMenu->TabIndex = 3;
			this->boutonCommandeMenu->Text = L"Commande";
			this->boutonCommandeMenu->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(16, 738);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 59);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Quitter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonQuitter_Click);
			// 
			// boutonArticleMenu
			// 
			this->boutonArticleMenu->AutoSize = true;
			this->boutonArticleMenu->BackColor = System::Drawing::Color::Transparent;
			this->boutonArticleMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->boutonArticleMenu->FlatAppearance->BorderSize = 0;
			this->boutonArticleMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boutonArticleMenu->ForeColor = System::Drawing::Color::Black;
			this->boutonArticleMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boutonArticleMenu.Image")));
			this->boutonArticleMenu->Location = System::Drawing::Point(160, 639);
			this->boutonArticleMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boutonArticleMenu->Name = L"boutonArticleMenu";
			this->boutonArticleMenu->Size = System::Drawing::Size(197, 59);
			this->boutonArticleMenu->TabIndex = 5;
			this->boutonArticleMenu->Text = L"Article";
			this->boutonArticleMenu->UseVisualStyleBackColor = false;
			this->boutonArticleMenu->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(491, 806);
			this->Controls->Add(this->boutonArticleMenu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->boutonCommandeMenu);
			this->Controls->Add(this->buttonStats);
			this->Controls->Add(this->boutonPersonnelMenu);
			this->Controls->Add(this->boutonClientMenu);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Mish";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e) {

		Form^ FormMenuClient = gcnew MyFormClient();
		FormMenuClient->Show();

	}
	private: System::Void buttonQuitter_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void boutonPersonnelMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		Form^ FormMenuPersonnel = gcnew MyFormPersonnel();
		FormMenuPersonnel->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
