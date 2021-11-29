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
	protected:

	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;

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
			this->boutonClientMenu = (gcnew System::Windows::Forms::Button());
			this->boutonPersonnelMenu = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// boutonClientMenu
			// 
			this->boutonClientMenu->Location = System::Drawing::Point(96, 302);
			this->boutonClientMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->boutonClientMenu->Name = L"boutonClientMenu";
			this->boutonClientMenu->Size = System::Drawing::Size(103, 26);
			this->boutonClientMenu->TabIndex = 0;
			this->boutonClientMenu->Text = L"Client";
			this->boutonClientMenu->UseVisualStyleBackColor = true;
			this->boutonClientMenu->Click += gcnew System::EventHandler(this, &MyForm::buttonClient_Click);
			// 
			// boutonPersonnelMenu
			// 
			this->boutonPersonnelMenu->Location = System::Drawing::Point(96, 333);
			this->boutonPersonnelMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->boutonPersonnelMenu->Name = L"boutonPersonnelMenu";
			this->boutonPersonnelMenu->Size = System::Drawing::Size(103, 26);
			this->boutonPersonnelMenu->TabIndex = 1;
			this->boutonPersonnelMenu->Text = L"Personnel";
			this->boutonPersonnelMenu->UseVisualStyleBackColor = true;
			this->boutonPersonnelMenu->Click += gcnew System::EventHandler(this, &MyForm::boutonPersonnelMenu_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(96, 364);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 26);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(96, 395);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 26);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 518);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Quitter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonQuitter_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(289, 557);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->boutonPersonnelMenu);
			this->Controls->Add(this->boutonClientMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Mish";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

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
	Form^ FormMenuPersonnel = gcnew MyFormPersonnel();
	FormMenuPersonnel->Show();
}
};
}
