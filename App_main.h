#pragma once

#include "App_Client.h"
#include "App_Stock.h"
#include "App_statistiques.h"
#include "App_Personnel.h"
#include "App_Commandes.h"




namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App_main
	/// </summary>
	public ref class App_main : public System::Windows::Forms::Form
	{
	public:
		App_main(void)
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
		~App_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Gestion_personnel_bouton;
	private: System::Windows::Forms::Button^ Gestion_client_bouton;
	private: System::Windows::Forms::Button^ Gestion_Statistiques_Bouton;
	protected:

	protected:


	private: System::Windows::Forms::Button^ Gestion_Stock_Bouton;

	private: System::Windows::Forms::Button^ Gestion_Commandes_Bouton;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ Main_Titre_2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ Main_titre;

	private: System::Windows::Forms::PictureBox^ pictureBox2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_main::typeid));
			this->Gestion_personnel_bouton = (gcnew System::Windows::Forms::Button());
			this->Gestion_client_bouton = (gcnew System::Windows::Forms::Button());
			this->Gestion_Statistiques_Bouton = (gcnew System::Windows::Forms::Button());
			this->Gestion_Stock_Bouton = (gcnew System::Windows::Forms::Button());
			this->Gestion_Commandes_Bouton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Main_titre = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Gestion_personnel_bouton
			// 
			this->Gestion_personnel_bouton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Gestion_personnel_bouton->BackColor = System::Drawing::SystemColors::Window;
			this->Gestion_personnel_bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gestion_personnel_bouton.BackgroundImage")));
			this->Gestion_personnel_bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Gestion_personnel_bouton->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Gestion_personnel_bouton->Location = System::Drawing::Point(108, 235);
			this->Gestion_personnel_bouton->Name = L"Gestion_personnel_bouton";
			this->Gestion_personnel_bouton->Size = System::Drawing::Size(246, 341);
			this->Gestion_personnel_bouton->TabIndex = 0;
			this->Gestion_personnel_bouton->UseVisualStyleBackColor = false;
			this->Gestion_personnel_bouton->Click += gcnew System::EventHandler(this, &App_main::button1_Click);
			// 
			// Gestion_client_bouton
			// 
			this->Gestion_client_bouton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Gestion_client_bouton->BackColor = System::Drawing::SystemColors::Window;
			this->Gestion_client_bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gestion_client_bouton.BackgroundImage")));
			this->Gestion_client_bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Gestion_client_bouton->Location = System::Drawing::Point(377, 235);
			this->Gestion_client_bouton->Name = L"Gestion_client_bouton";
			this->Gestion_client_bouton->Size = System::Drawing::Size(246, 341);
			this->Gestion_client_bouton->TabIndex = 1;
			this->Gestion_client_bouton->UseVisualStyleBackColor = false;
			this->Gestion_client_bouton->Click += gcnew System::EventHandler(this, &App_main::button2_Click);
			// 
			// Gestion_Statistiques_Bouton
			// 
			this->Gestion_Statistiques_Bouton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Gestion_Statistiques_Bouton->BackColor = System::Drawing::SystemColors::Window;
			this->Gestion_Statistiques_Bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gestion_Statistiques_Bouton.BackgroundImage")));
			this->Gestion_Statistiques_Bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Gestion_Statistiques_Bouton->Location = System::Drawing::Point(1193, 235);
			this->Gestion_Statistiques_Bouton->Name = L"Gestion_Statistiques_Bouton";
			this->Gestion_Statistiques_Bouton->Size = System::Drawing::Size(246, 341);
			this->Gestion_Statistiques_Bouton->TabIndex = 2;
			this->Gestion_Statistiques_Bouton->UseVisualStyleBackColor = false;
			this->Gestion_Statistiques_Bouton->Click += gcnew System::EventHandler(this, &App_main::button3_Click);
			// 
			// Gestion_Stock_Bouton
			// 
			this->Gestion_Stock_Bouton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Gestion_Stock_Bouton->BackColor = System::Drawing::SystemColors::Window;
			this->Gestion_Stock_Bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gestion_Stock_Bouton.BackgroundImage")));
			this->Gestion_Stock_Bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Gestion_Stock_Bouton->Location = System::Drawing::Point(924, 235);
			this->Gestion_Stock_Bouton->Name = L"Gestion_Stock_Bouton";
			this->Gestion_Stock_Bouton->Size = System::Drawing::Size(246, 341);
			this->Gestion_Stock_Bouton->TabIndex = 3;
			this->Gestion_Stock_Bouton->UseVisualStyleBackColor = false;
			this->Gestion_Stock_Bouton->Click += gcnew System::EventHandler(this, &App_main::button4_Click);
			// 
			// Gestion_Commandes_Bouton
			// 
			this->Gestion_Commandes_Bouton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Gestion_Commandes_Bouton->BackColor = System::Drawing::SystemColors::Window;
			this->Gestion_Commandes_Bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gestion_Commandes_Bouton.BackgroundImage")));
			this->Gestion_Commandes_Bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Gestion_Commandes_Bouton->Location = System::Drawing::Point(652, 235);
			this->Gestion_Commandes_Bouton->Name = L"Gestion_Commandes_Bouton";
			this->Gestion_Commandes_Bouton->Size = System::Drawing::Size(246, 341);
			this->Gestion_Commandes_Bouton->TabIndex = 4;
			this->Gestion_Commandes_Bouton->UseVisualStyleBackColor = false;
			this->Gestion_Commandes_Bouton->Click += gcnew System::EventHandler(this, &App_main::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(1175, 637);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 62);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_main::pictureBox1_Click);
			// 
			// Main_Titre_2
			// 
			this->Main_Titre_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Main_Titre_2->AutoSize = true;
			this->Main_Titre_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Main_Titre_2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Titre_2->Location = System::Drawing::Point(444, 91);
			this->Main_Titre_2->Name = L"Main_Titre_2";
			this->Main_Titre_2->Size = System::Drawing::Size(133, 37);
			this->Main_Titre_2->TabIndex = 7;
			this->Main_Titre_2->Text = L"NORTIC : ";
			this->Main_Titre_2->Click += gcnew System::EventHandler(this, &App_main::Main_Titre_2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(567, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(572, 37);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Votre allié dans la gestion de votre entreprise";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Gestion du personnel";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(422, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 23);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Gestion des clients";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(673, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Gestion des commandes";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(978, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Gestion du stock";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1214, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Gestion des statistiques";
			// 
			// Main_titre
			// 
			this->Main_titre->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Main_titre->AutoSize = true;
			this->Main_titre->Location = System::Drawing::Point(1215, 657);
			this->Main_titre->Name = L"Main_titre";
			this->Main_titre->Size = System::Drawing::Size(78, 17);
			this->Main_titre->TabIndex = 5;
			this->Main_titre->Text = L"CESI\'TECH";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(1341, 637);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(165, 62);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// App_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1536, 725);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main_Titre_2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Main_titre);
			this->Controls->Add(this->Gestion_Commandes_Bouton);
			this->Controls->Add(this->Gestion_Stock_Bouton);
			this->Controls->Add(this->Gestion_Statistiques_Bouton);
			this->Controls->Add(this->Gestion_client_bouton);
			this->Controls->Add(this->Gestion_personnel_bouton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1558, 776);
			this->MinimumSize = System::Drawing::Size(1558, 776);
			this->Name = L"App_main";
			this->Text = L"NORTIC";
			this->Load += gcnew System::EventHandler(this, &App_main::App_main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void App_main_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		App_Commandes^ app4 = gcnew App_Commandes();
		app4->ShowDialog();
		this->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	App_Client^ app3 = gcnew App_Client();
	app3->ShowDialog();
	this->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	App_Personnel^ app2 = gcnew App_Personnel();
	this->Hide();
	app2->ShowDialog();
	this->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	App_Stock^ app5 = gcnew App_Stock();
	app5->ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	App_statistiques^ app6 = gcnew App_statistiques();
	app6->ShowDialog();
	this->Show();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Main_Titre_2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
