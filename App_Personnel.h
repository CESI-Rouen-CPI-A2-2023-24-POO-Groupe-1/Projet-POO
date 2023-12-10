#pragma once
#include "DataBase.h"
#include "mEMPLOYE.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App_Personnel
	/// </summary>
	public ref class App_Personnel : public System::Windows::Forms::Form
	{
	private:
		Employes ^ selectedPersonnel;
	public:
		App_Personnel(void)
		{
			InitializeComponent();
			this->textBoxIdSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Personnel::textBoxIdSearch_int);
			this->textBoxZip->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Personnel::textBoxZip_int);
			this->textBoxIdSearch->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxIdSearch_Enter);
			this->textBoxIdSearch->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxIdSearch_Leave);
			this->textBoxNomSearch->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxNomSearch_Enter);
			this->textBoxNomSearch->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxNomSearch_Leave);
			this->textBoxPrenomSearch->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxPrenomSearch_Enter);
			this->textBoxPrenomSearch->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxPrenomSearch_Leave);
			this->textBoxPrenom->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxPrenom_Enter);
			this->textBoxPrenom->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxPrenom_Leave);
			this->textBoxNom->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxNom_Enter);
			this->textBoxNom->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxNom_Leave);
			this->textBoxPays->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxPays_Enter);
			this->textBoxPays->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxPays_Leave);
			this->textBoxVille->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxVille_Enter);
			this->textBoxVille->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxVille_Leave);
			this->textBoxZip->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxZip_Enter);
			this->textBoxZip->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxZip_Leave);
			this->textBoxAppart->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxAppart_Enter);
			this->textBoxAppart->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxAppart_Leave);
			this->textBoxNumRue->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxNumRue_Enter);
			this->textBoxNumRue->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxNumRue_Leave);
			this->textBoxNomRue->Enter += gcnew System::EventHandler(this, &App_Personnel::textBoxNomRue_Enter);
			this->textBoxNomRue->Leave += gcnew System::EventHandler(this, &App_Personnel::textBoxNomRue_Leave);
			database = gcnew DataBase();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~App_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Main_Titre_2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxIdSearch;
	private: System::Windows::Forms::TextBox^ textBoxNomSearch;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::TextBox^ textBoxPrenomSearch;

	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;


	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBoxPays;
	private: System::Windows::Forms::TextBox^ textBoxVille;

	private: System::Windows::Forms::TextBox^ textBoxAppart;
	private: System::Windows::Forms::TextBox^ textBoxNumRue;
	private: System::Windows::Forms::TextBox^ textBoxNomRue;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxZip;
	private: System::Windows::Forms::TextBox^ textBoxID;

	private: bool buttonClicked = false;
	private: bool buttonClicked2 = false;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirth;


	private: DataBase^ database;
	private:
		void SetInitialText() {
			textBoxIdSearch->Text = "Identificateur Client";
			textBoxNomSearch->Text = "Prénom";
			textBoxPrenomSearch->Text = "Nom";
			textBoxID->Text = "Identificateur Client";
			textBoxPrenom->Text = "Prénom";
			textBoxNom->Text = "Nom";
			textBoxPays->Text = "Pays";
			textBoxVille->Text = "Ville";
			textBoxZip->Text = "Code Postal";
			textBoxAppart->Text = "Numéro d'appartement";
			textBoxNumRue->Text = "Numéro de rue";
			textBoxNomRue->Text = "Nom de la rue";
		}

	private:
		System::Void textBoxIdSearch_int(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
				e->Handled = true;
			}
		}
	private:
		System::Void textBoxZip_int(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
				e->Handled = true;
			}
		}

	private:
		System::Void textBoxIdSearch3_Date(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '/' && e->KeyChar != '-' && e->KeyChar != 8) {
				e->Handled = true;
			}
		}

	protected:

	protected:

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Personnel::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxIdSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxPays = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAppart = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumRue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxZip = (gcnew System::Windows::Forms::TextBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerBirth = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(819, 262);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(540, 367);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Personnel::select_personnel);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Personnel::select_personnel);
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Personnel::select_personnel);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Personnel::select_personnel);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(1010, 116);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Pôle de gestion des clients";
			// 
			// Main_Titre_2
			// 
			this->Main_Titre_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Main_Titre_2->AutoSize = true;
			this->Main_Titre_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Main_Titre_2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Titre_2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Main_Titre_2->Location = System::Drawing::Point(920, 116);
			this->Main_Titre_2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Main_Titre_2->Name = L"Main_Titre_2";
			this->Main_Titre_2->Size = System::Drawing::Size(100, 29);
			this->Main_Titre_2->TabIndex = 9;
			this->Main_Titre_2->Text = L"NORTIC :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(1339, 52);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 50);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &App_Personnel::button1_Click);
			// 
			// textBoxIdSearch
			// 
			this->textBoxIdSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxIdSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxIdSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxIdSearch->Location = System::Drawing::Point(819, 230);
			this->textBoxIdSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxIdSearch->Name = L"textBoxIdSearch";
			this->textBoxIdSearch->Size = System::Drawing::Size(156, 20);
			this->textBoxIdSearch->TabIndex = 12;
			this->textBoxIdSearch->Text = L"Identificateur client";
			this->textBoxIdSearch->TextChanged += gcnew System::EventHandler(this, &App_Personnel::update_search);
			// 
			// textBoxNomSearch
			// 
			this->textBoxNomSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNomSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxNomSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNomSearch->Location = System::Drawing::Point(996, 230);
			this->textBoxNomSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomSearch->Name = L"textBoxNomSearch";
			this->textBoxNomSearch->Size = System::Drawing::Size(166, 20);
			this->textBoxNomSearch->TabIndex = 13;
			this->textBoxNomSearch->Text = L"Prénom";
			this->textBoxNomSearch->TextChanged += gcnew System::EventHandler(this, &App_Personnel::update_search);
			// 
			// textBoxPrenomSearch
			// 
			this->textBoxPrenomSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPrenomSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxPrenomSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxPrenomSearch->Location = System::Drawing::Point(1184, 230);
			this->textBoxPrenomSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenomSearch->Name = L"textBoxPrenomSearch";
			this->textBoxPrenomSearch->Size = System::Drawing::Size(166, 20);
			this->textBoxPrenomSearch->TabIndex = 14;
			this->textBoxPrenomSearch->Text = L"Nom";
			this->textBoxPrenomSearch->TextChanged += gcnew System::EventHandler(this, &App_Personnel::update_search);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(132, 147);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(585, 431);
			this->dataGridView2->TabIndex = 16;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Personnel::dataGridView2_CellContentClick_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(809, 218);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(558, 420);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(121, 134);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(609, 595);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_Personnel::pictureBox1_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Supprimer.BackgroundImage")));
			this->Supprimer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Supprimer->Location = System::Drawing::Point(653, 583);
			this->Supprimer->Margin = System::Windows::Forms::Padding(2);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(64, 130);
			this->Supprimer->TabIndex = 2;
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &App_Personnel::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(132, 650);
			this->Modifier->Margin = System::Windows::Forms::Padding(2);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(517, 63);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier un personnel";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &App_Personnel::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(132, 583);
			this->Ajouter->Margin = System::Windows::Forms::Padding(2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(517, 63);
			this->Ajouter->TabIndex = 0;
			this->Ajouter->Text = L"Ajouter un personnel";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &App_Personnel::Ajouter_Click);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPrenom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxPrenom->Location = System::Drawing::Point(166, 306);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(175, 20);
			this->textBoxPrenom->TabIndex = 22;
			this->textBoxPrenom->Text = L"Prénom";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNom->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNom->Location = System::Drawing::Point(166, 342);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(175, 20);
			this->textBoxNom->TabIndex = 23;
			this->textBoxNom->Text = L"Nom";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(472, 160);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(232, 283);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// textBoxPays
			// 
			this->textBoxPays->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPays->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxPays->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPays->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxPays->Location = System::Drawing::Point(166, 466);
			this->textBoxPays->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPays->Name = L"textBoxPays";
			this->textBoxPays->Size = System::Drawing::Size(149, 20);
			this->textBoxPays->TabIndex = 25;
			this->textBoxPays->Text = L"Pays";
			// 
			// textBoxVille
			// 
			this->textBoxVille->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxVille->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxVille->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxVille->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxVille->Location = System::Drawing::Point(166, 503);
			this->textBoxVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(149, 20);
			this->textBoxVille->TabIndex = 26;
			this->textBoxVille->Text = L"Ville";
			// 
			// textBoxAppart
			// 
			this->textBoxAppart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxAppart->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxAppart->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAppart->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxAppart->Location = System::Drawing::Point(440, 536);
			this->textBoxAppart->Margin = System::Windows::Forms::Padding(2);
			this->textBoxAppart->Name = L"textBoxAppart";
			this->textBoxAppart->Size = System::Drawing::Size(148, 20);
			this->textBoxAppart->TabIndex = 30;
			this->textBoxAppart->Text = L"Numéro d\'appartement";
			// 
			// textBoxNumRue
			// 
			this->textBoxNumRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNumRue->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxNumRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNumRue->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNumRue->Location = System::Drawing::Point(440, 503);
			this->textBoxNumRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNumRue->Name = L"textBoxNumRue";
			this->textBoxNumRue->Size = System::Drawing::Size(148, 20);
			this->textBoxNumRue->TabIndex = 29;
			this->textBoxNumRue->Text = L"Numéro de rue";
			// 
			// textBoxNomRue
			// 
			this->textBoxNomRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNomRue->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxNomRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNomRue->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNomRue->Location = System::Drawing::Point(440, 466);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->Size = System::Drawing::Size(148, 20);
			this->textBoxNomRue->TabIndex = 28;
			this->textBoxNomRue->Text = L"Nom de la rue";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(148, 227);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 20);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Informations personnels du client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(146, 422);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(221, 20);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Adresse de livraison et facturation";
			// 
			// textBoxZip
			// 
			this->textBoxZip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxZip->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxZip->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxZip->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxZip->Location = System::Drawing::Point(166, 536);
			this->textBoxZip->Margin = System::Windows::Forms::Padding(2);
			this->textBoxZip->Name = L"textBoxZip";
			this->textBoxZip->Size = System::Drawing::Size(149, 20);
			this->textBoxZip->TabIndex = 27;
			this->textBoxZip->Text = L"Code Postal";
			// 
			// textBoxID
			// 
			this->textBoxID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxID->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxID->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxID->Location = System::Drawing::Point(166, 271);
			this->textBoxID->Margin = System::Windows::Forms::Padding(2);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->ReadOnly = true;
			this->textBoxID->Size = System::Drawing::Size(175, 20);
			this->textBoxID->TabIndex = 21;
			this->textBoxID->Text = L"Identificateur client";
			// 
			// dateTimePickerBirth
			// 
			this->dateTimePickerBirth->Location = System::Drawing::Point(166, 376);
			this->dateTimePickerBirth->Name = L"dateTimePickerBirth";
			this->dateTimePickerBirth->Size = System::Drawing::Size(175, 20);
			this->dateTimePickerBirth->TabIndex = 36;
			// 
			// App_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1443, 750);
			this->Controls->Add(this->dateTimePickerBirth);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxAppart);
			this->Controls->Add(this->textBoxNumRue);
			this->Controls->Add(this->textBoxNomRue);
			this->Controls->Add(this->textBoxZip);
			this->Controls->Add(this->textBoxVille);
			this->Controls->Add(this->textBoxPays);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBoxPrenomSearch);
			this->Controls->Add(this->textBoxNomSearch);
			this->Controls->Add(this->textBoxIdSearch);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main_Titre_2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"App_Personnel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Personnel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Personnel::App_Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//////////////////////
		//Affichage auto BDD//
		//////////////////////

	private: System::Void App_Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		SetInitialText();
		update_search();
	}

		   /////////////////////
		   //Retour en arrière//
		   /////////////////////

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   //////////////
		   //Rechercher//
		   //////////////

	private: System::Void update_search(System::Object^ sender, System::EventArgs^ e) {
		String^ id = textBoxIdSearch->Text;
		if (id == "Identificateur Personnel") {
			id = "";
		}
		String^ prenom = textBoxNomSearch->Text;
		if (prenom == "Prénom") {
			prenom = "";
		}
		String^ nom = textBoxPrenomSearch->Text;
		if (nom == "Nom") {
			nom = "";
		}
		DataSet^ dataSet = EMPLOYES::search(id, nom, prenom);

		dataGridView1->DataSource = dataSet->Tables[0]->DefaultView;
		dataGridView1->Columns[0]->HeaderText = "Identificateur";
		dataGridView1->Columns[1]->HeaderText = "Prénom";
		dataGridView1->Columns[2]->HeaderText = "Nom";
		dataGridView1->Columns[3]->HeaderText = "Date de naissance";
		// hide useless columns
		dataGridView1->Columns[4]->Visible = false;
		dataGridView1->Columns[5]->Visible = false;

		// update
		dataGridView1->Update();
	}
	private: System::Void update_search() {
		update_search(nullptr, nullptr);
	}

		   /////////////////////////
		   //Selection d'un Personnel//
		   /////////////////////////
	private: System::Void select_personnel(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int index = e->RowIndex;
		DataGridViewRow^ row = dataGridView1->Rows[index];
		int id = (int)row->Cells[0]->Value;
		selectedPersonnel = EMPLOYES::get(id);

		textBoxID->Text = selectedPersonnel->getId().ToString();
		textBoxPrenom->Text = selectedPersonnel->getFirstName();
		textBoxPrenom->ForeColor = System::Drawing::SystemColors::ControlText;
		textBoxNom->Text = selectedPersonnel->getLastName();
		textBoxNom->ForeColor = System::Drawing::SystemColors::ControlText;
		//textBoxPays->Text = selectedPersonnel->getBillingAddress()->getCountry();
		//textBoxPays->ForeColor = System::Drawing::SystemColors::ControlText;
		//textBoxVille->Text = selectedPersonnel->getBillingAddress()->getCity();
		//textBoxVille->ForeColor = System::Drawing::SystemColors::ControlText;
		//textBoxZip->Text = selectedPersonnel->getBillingAddress()->getZipCode();
		//textBoxZip->ForeColor = System::Drawing::SystemColors::ControlText;
		//textBoxAppart->Text = selectedPersonnel->getBillingAddress()->getApartmentNumber();
		//textBoxAppart->ForeColor = System::Drawing::SystemColors::ControlText;
		//textBoxNumRue->Text = selectedPersonnel->getBillingAddress()->getRoadNumber();
		//textBoxNumRue->ForeColor = System::Drawing::SystemColors::ControlText;
		//textBoxNomRue->Text = selectedPersonnel->getBillingAddress()->getRoadName();
		//textBoxNomRue->ForeColor = System::Drawing::SystemColors::ControlText;
		//dateTimePickerBirth->Value = selectedPersonnel->getBirthdate();
	}

		   ///////////
		   //Ajouter//
		   ///////////

	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	//	String^ prenom = textBoxPrenom->Text;
	//	String^ nom = textBoxNom->Text;
	//	String^ pays = textBoxPays->Text;
	//	String^ ville = textBoxVille->Text;
	//	String^ cp = textBoxZip->Text;
	//	String^ num_appartement = textBoxAppart->Text;
	//	String^ num_rue = textBoxNumRue->Text;
	//	String^ nom_rue = textBoxNomRue->Text;
	//	DateTime date = dateTimePickerBirth->Value;
	//
	//	Address^ billing_address = gcnew Address(num_appartement, num_rue, nom_rue, ville, cp, pays);
	//	Address^ delivery_address = gcnew Address(num_appartement, num_rue, nom_rue, ville, cp, pays);
	//	Client^ client = gcnew Client(nom, prenom, date, billing_address, delivery_address);
	//
	//	client = CLIENT::add(client);
	//	selectedClient = client;
	}

		   ////////////
		   //Modifier//
		   ////////////

	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	//	String^ prenom = textBoxPrenom->Text;
	//	String^ nom = textBoxNom->Text;
	//	String^ pays = textBoxPays->Text;
	//	String^ ville = textBoxVille->Text;
	//	String^ cp = textBoxZip->Text;
	//	String^ num_appartement = textBoxAppart->Text;
	//	String^ num_rue = textBoxNumRue->Text;
	//	String^ nom_rue = textBoxNomRue->Text;
	//	DateTime date = dateTimePickerBirth->Value;
	//
	//	Address^ billing_address = gcnew Address(num_appartement, num_rue, nom_rue, ville, cp, pays);
	//	Address^ delivery_address = gcnew Address(num_appartement, num_rue, nom_rue, ville, cp, pays);
	//
	//	selectedClient->setFirstName(prenom);
	//	selectedClient->setLastName(nom);
	//	selectedClient->setBillingAddress(billing_address);
	//	selectedClient->setDeliverAddress(delivery_address);
	//	selectedClient->setBirthdate(date);
	//
	//	CLIENT::edit(selectedClient);
	//
	//	update_search();
	}



		   /////////////
		   //Supprimer//
		   /////////////

	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		//CLIENT::remove(selectedPersonnel);
		//
		//update_search();
	}

		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   //////////////////////////////////////////////////////////////////Placeholder////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	private: System::Void textBoxIdSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "Identificateur Personnel") {
			textBoxIdSearch->Text = "";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIdSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "") {
			textBoxIdSearch->Text = "Identificateur Personnel";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "Prénom") {
			textBoxNomSearch->Text = "";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "") {
			textBoxNomSearch->Text = "Prénom";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxPrenomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomSearch->Text == "Nom") {
			textBoxPrenomSearch->Text = "";
			textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrenomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomSearch->Text == "") {
			textBoxPrenomSearch->Text = "Nom";
			textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxPrenom_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenom->Text == "Prénom") {
			textBoxPrenom->Text = "";
			textBoxPrenom->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrenom_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenom->Text == "") {
			textBoxPrenom->Text = "Prénom";
			textBoxPrenom->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxNom_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNom->Text == "Nom") {
			textBoxNom->Text = "";
			textBoxNom->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNom_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNom->Text == "") {
			textBoxNom->Text = "Nom";
			textBoxNom->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxPays_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPays->Text == "Pays") {
			textBoxPays->Text = "";
			textBoxPays->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPays_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPays->Text == "") {
			textBoxPays->Text = "Pays";
			textBoxPays->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBoxVille_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxVille->Text == "Ville") {
			textBoxVille->Text = "";
			textBoxVille->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxVille_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxVille->Text == "") {
			textBoxVille->Text = "Ville";
			textBoxVille->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxZip_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxZip->Text == "Code Postal") {
			textBoxZip->Text = "";
			textBoxZip->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxZip_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxZip->Text == "") {
			textBoxZip->Text = "Code Postal";
			textBoxZip->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxAppart_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAppart->Text == "Numéro d'appartement") {
			textBoxAppart->Text = "";
			textBoxAppart->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxAppart_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAppart->Text == "") {
			textBoxAppart->Text = "Numéro d'appartement";
			textBoxAppart->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNumRue_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNumRue->Text == "Numéro de rue") {
			textBoxNumRue->Text = "";
			textBoxNumRue->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNumRue_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNumRue->Text == "") {
			textBoxNumRue->Text = "Numéro de rue";
			textBoxNumRue->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomRue_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomRue->Text == "Nom de la rue") {
			textBoxNomRue->Text = "";
			textBoxNomRue->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomRue_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomRue->Text == "") {
			textBoxNomRue->Text = "Nom de la rue";
			textBoxNomRue->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	 ////////
	 //Vide//
	 ////////

	private: System::Void dataGridView2_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	}
	};
}
