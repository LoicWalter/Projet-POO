#pragma once

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ComboBox^ TVAcombo;
	private: System::Windows::Forms::ComboBox^ Remisecombo;
	private: System::Windows::Forms::ComboBox^ inconnuecombo;
	private: System::Windows::Forms::ComboBox^ margecombo;
	private: System::Windows::Forms::Button^ valider;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormVariation::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->TVAcombo = (gcnew System::Windows::Forms::ComboBox());
			this->Remisecombo = (gcnew System::Windows::Forms::ComboBox());
			this->inconnuecombo = (gcnew System::Windows::Forms::ComboBox());
			this->margecombo = (gcnew System::Windows::Forms::ComboBox());
			this->valider = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(454, 415);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// TVAcombo
			// 
			this->TVAcombo->FormattingEnabled = true;
			this->TVAcombo->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"10", L"15", L"20", L"5", L"10", L"15" });
			this->TVAcombo->Location = System::Drawing::Point(551, 56);
			this->TVAcombo->Name = L"TVAcombo";
			this->TVAcombo->Size = System::Drawing::Size(121, 24);
			this->TVAcombo->TabIndex = 1;
			// 
			// Remisecombo
			// 
			this->Remisecombo->FormattingEnabled = true;
			this->Remisecombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5", L"6" });
			this->Remisecombo->Location = System::Drawing::Point(817, 56);
			this->Remisecombo->Name = L"Remisecombo";
			this->Remisecombo->Size = System::Drawing::Size(121, 24);
			this->Remisecombo->TabIndex = 2;
			// 
			// inconnuecombo
			// 
			this->inconnuecombo->FormattingEnabled = true;
			this->inconnuecombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"5" });
			this->inconnuecombo->Location = System::Drawing::Point(551, 157);
			this->inconnuecombo->Name = L"inconnuecombo";
			this->inconnuecombo->Size = System::Drawing::Size(121, 24);
			this->inconnuecombo->TabIndex = 3;
			this->inconnuecombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormVariation::inconnuecombo_SelectedIndexChanged);
			// 
			// margecombo
			// 
			this->margecombo->FormattingEnabled = true;
			this->margecombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->margecombo->Location = System::Drawing::Point(817, 157);
			this->margecombo->Name = L"margecombo";
			this->margecombo->Size = System::Drawing::Size(121, 24);
			this->margecombo->TabIndex = 4;
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(551, 267);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 5;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &MyFormVariation::valider_Click);
			// 
			// MyFormVariation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 441);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->margecombo);
			this->Controls->Add(this->inconnuecombo);
			this->Controls->Add(this->Remisecombo);
			this->Controls->Add(this->TVAcombo);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormVariation";
			this->Text = L"MyFormVariation";
			this->Load += gcnew System::EventHandler(this, &MyFormVariation::MyFormVariation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormVariation_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TVAcombo->Text;
	this->margecombo->Text;
	this->Remisecombo->Text;
	this->inconnuecombo->Text;
}
private: System::Void inconnuecombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


