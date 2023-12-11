#pragma once
#include "Article.h"
#include "DataBase.h"
#include "mARTICLE.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App_Stock
	/// </summary>
	public ref class App_Stock : public System::Windows::Forms::Form
	{
	private:
		Article^ selectedArticle;
	public:
		App_Stock(void)
		{
			InitializeComponent();
			this->textBoxIdSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Stock::textBoxIdSearch_int);
			this->textBoxZip->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Stock::textBoxZip_int);
			this->textBoxIdSearch->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxIdSearch_Enter);
			this->textBoxIdSearch->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxIdSearch_Leave);
			this->textBoxNomSearch->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxNomSearch_Enter);
			this->textBoxNomSearch->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxNomSearch_Leave);
			this->textBoxPrixSearch->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxPrixSearch_Enter);
			this->textBoxPrixSearch->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxPrixSearch_Leave);
			this->textBoxNom->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxNom_Enter);
			this->textBoxNom->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxNom_Leave);
			this->textBoxPays->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxPays_Enter);
			this->textBoxPays->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxPays_Leave);
			this->textBoxVille->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxVille_Enter);
			this->textBoxVille->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxVille_Leave);
			this->textBoxZip->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxZip_Enter);
			this->textBoxZip->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxZip_Leave);
			this->textBoxAppart->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxAppart_Enter);
			this->textBoxAppart->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxAppart_Leave);
			this->textBoxNumRue->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxNumRue_Enter);
			this->textBoxNumRue->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxNumRue_Leave);
			this->textBoxNomRue->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxNomRue_Enter);
			this->textBoxNomRue->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxNomRue_Leave);
			this->textBoxTVA->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxTVA_Enter);
			this->textBoxTVA->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxTVA_Leave);
			this->textBoxPrixHT->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxPrixHT_Enter);
			this->textBoxPrixHT->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxPrixHT_Leave);
			database = gcnew DataBase();
		}
		
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~App_Stock()
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
	private: System::Windows::Forms::TextBox^ textBoxPrixSearch;





	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::TextBox^ textBoxNom;



	private: System::Windows::Forms::TextBox^ textBoxPrixHT;

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

	private: System::Windows::Forms::TextBox^ textBoxTVA;





	private: DataBase^ database;
	private:
		void SetInitialText() {
			textBoxIdSearch->Text = "Identifiant Article";
			textBoxNomSearch->Text = "Nom de l'article";
			textBoxPrixSearch->Text = "Prix Hors Taxe";
			textBoxID->Text = "Identifiant Article";
			textBoxNom->Text = "Nom";
			textBoxPrixHT->Text = "Prix Hors Taxe";
			textBoxTVA->Text = "Taux TVA";
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Stock::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxIdSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixHT = (gcnew System::Windows::Forms::TextBox());
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
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView1->Location = System::Drawing::Point(1092, 322);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(720, 452);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Stock::select_Article);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Stock::select_Article);
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Stock::select_Article);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Stock::select_Article);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(1315, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Pôle de gestion des articles/stock";
			// 
			// Main_Titre_2
			// 
			this->Main_Titre_2->AutoSize = true;
			this->Main_Titre_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Main_Titre_2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Titre_2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Main_Titre_2->Location = System::Drawing::Point(1259, 179);
			this->Main_Titre_2->Name = L"Main_Titre_2";
			this->Main_Titre_2->Size = System::Drawing::Size(126, 37);
			this->Main_Titre_2->TabIndex = 9;
			this->Main_Titre_2->Text = L"NORTIC :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(1785, 64);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 62);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &App_Stock::button1_Click);
			// 
			// textBoxIdSearch
			// 
			this->textBoxIdSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxIdSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxIdSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxIdSearch->Location = System::Drawing::Point(1092, 283);
			this->textBoxIdSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIdSearch->Name = L"textBoxIdSearch";
			this->textBoxIdSearch->Size = System::Drawing::Size(183, 22);
			this->textBoxIdSearch->TabIndex = 12;
			this->textBoxIdSearch->Text = L"Identifiant articles";
			this->textBoxIdSearch->TextChanged += gcnew System::EventHandler(this, &App_Stock::update_search);
			// 
			// textBoxNomSearch
			// 
			this->textBoxNomSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNomSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxNomSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNomSearch->Location = System::Drawing::Point(1339, 283);
			this->textBoxNomSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomSearch->Name = L"textBoxNomSearch";
			this->textBoxNomSearch->Size = System::Drawing::Size(169, 22);
			this->textBoxNomSearch->TabIndex = 13;
			this->textBoxNomSearch->Text = L"Nom de l\'article";
			this->textBoxNomSearch->TextChanged += gcnew System::EventHandler(this, &App_Stock::update_search);
			// 
			// textBoxPrixSearch
			// 
			this->textBoxPrixSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPrixSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxPrixSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrixSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxPrixSearch->Location = System::Drawing::Point(1579, 283);
			this->textBoxPrixSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixSearch->Name = L"textBoxPrixSearch";
			this->textBoxPrixSearch->Size = System::Drawing::Size(158, 22);
			this->textBoxPrixSearch->TabIndex = 14;
			this->textBoxPrixSearch->Text = L"Prix Hors Taxe";
			this->textBoxPrixSearch->TextChanged += gcnew System::EventHandler(this, &App_Stock::update_search);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(176, 181);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(780, 530);
			this->dataGridView2->TabIndex = 16;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Stock::dataGridView2_CellContentClick_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox2->Location = System::Drawing::Point(1079, 268);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(744, 517);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(161, 165);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(811, 732);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_Stock::pictureBox1_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Supprimer.BackgroundImage")));
			this->Supprimer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Supprimer->Location = System::Drawing::Point(871, 718);
			this->Supprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(85, 160);
			this->Supprimer->TabIndex = 2;
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &App_Stock::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(176, 800);
			this->Modifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(689, 78);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier un article";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &App_Stock::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(176, 718);
			this->Ajouter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(689, 78);
			this->Ajouter->TabIndex = 0;
			this->Ajouter->Text = L"Ajouter un article";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &App_Stock::Ajouter_Click);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNom->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNom->Location = System::Drawing::Point(221, 330);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(233, 22);
			this->textBoxNom->TabIndex = 22;
			this->textBoxNom->Text = L"Nom";
			// 
			// textBoxPrixHT
			// 
			this->textBoxPrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPrixHT->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrixHT->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxPrixHT->Location = System::Drawing::Point(221, 374);
			this->textBoxPrixHT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixHT->Name = L"textBoxPrixHT";
			this->textBoxPrixHT->Size = System::Drawing::Size(233, 22);
			this->textBoxPrixHT->TabIndex = 23;
			this->textBoxPrixHT->Text = L"Prix Hors Taxe";
			this->textBoxPrixHT->TextChanged += gcnew System::EventHandler(this, &App_Stock::textBoxPrixHT_TextChanged);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(629, 197);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(309, 348);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
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
			this->textBoxPays->Location = System::Drawing::Point(221, 574);
			this->textBoxPays->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPays->Name = L"textBoxPays";
			this->textBoxPays->Size = System::Drawing::Size(198, 22);
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
			this->textBoxVille->Location = System::Drawing::Point(221, 619);
			this->textBoxVille->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(198, 22);
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
			this->textBoxAppart->Location = System::Drawing::Point(587, 660);
			this->textBoxAppart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAppart->Name = L"textBoxAppart";
			this->textBoxAppart->Size = System::Drawing::Size(198, 22);
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
			this->textBoxNumRue->Location = System::Drawing::Point(587, 619);
			this->textBoxNumRue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNumRue->Name = L"textBoxNumRue";
			this->textBoxNumRue->Size = System::Drawing::Size(198, 22);
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
			this->textBoxNomRue->Location = System::Drawing::Point(587, 574);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->Size = System::Drawing::Size(198, 22);
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
			this->label2->Location = System::Drawing::Point(197, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(257, 25);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Informations relatives à l\'article";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(195, 519);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 25);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Adresse de l\'entrepôt";
			// 
			// textBoxZip
			// 
			this->textBoxZip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxZip->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxZip->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxZip->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxZip->Location = System::Drawing::Point(221, 660);
			this->textBoxZip->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxZip->Name = L"textBoxZip";
			this->textBoxZip->Size = System::Drawing::Size(198, 22);
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
			this->textBoxID->Location = System::Drawing::Point(221, 287);
			this->textBoxID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->ReadOnly = true;
			this->textBoxID->Size = System::Drawing::Size(233, 22);
			this->textBoxID->TabIndex = 21;
			this->textBoxID->Text = L"Identifiant article";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxTVA->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxTVA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxTVA->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxTVA->Location = System::Drawing::Point(221, 419);
			this->textBoxTVA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(233, 22);
			this->textBoxTVA->TabIndex = 37;
			this->textBoxTVA->Text = L"Taux TVA";
			// 
			// App_Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1906, 876);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxAppart);
			this->Controls->Add(this->textBoxNumRue);
			this->Controls->Add(this->textBoxNomRue);
			this->Controls->Add(this->textBoxZip);
			this->Controls->Add(this->textBoxVille);
			this->Controls->Add(this->textBoxPays);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->textBoxPrixHT);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBoxPrixSearch);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"App_Stock";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Stock";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Stock::App_Stock_Load);
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

	private: System::Void App_Stock_Load(System::Object^ sender, System::EventArgs^ e) {
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
		if (id == "Identifiant Article") {
			id = "";
		}
		String^ nom = textBoxNomSearch->Text;
		if (nom == "Nom de l'article") {
			nom = "";
		}
		String^ prix = textBoxPrixSearch->Text;
		if (prix == "Prix Hors Taxe") {
			prix = "";
		}
		DataSet^ dataSet = ARTICLE::search(id, nom, prix);
	
		dataGridView1->DataSource = dataSet->Tables[0];
		dataGridView1->Columns[0]->HeaderText = "Identifiant";
		dataGridView1->Columns[1]->HeaderText = "Nom";
		dataGridView1->Columns[2]->HeaderText = "Prix Hors Taxe";
		dataGridView1->Columns[3]->HeaderText = "Référence de l'article";
		// hide useless columns
		dataGridView1->Columns[4]->Visible = false;
		// update
		dataGridView1->Update();
	}
	private: System::Void update_search() {
		update_search(nullptr, nullptr);
	}

		   /////////////////////////
		   //Selection d'un article//
		   /////////////////////////

	private: System::Void select_Article(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int index = e->RowIndex;
		DataGridViewRow^ row = dataGridView1->Rows[index];
		int id = (int)row->Cells[0]->Value;
		selectedArticle = ARTICLE::get(id);
		
		textBoxID->Text = selectedArticle->getId().ToString();
		textBoxID->ForeColor = System::Drawing::SystemColors::ControlText;
		textBoxNom->Text = selectedArticle->getName();
		textBoxNom->ForeColor = System::Drawing::SystemColors::ControlText;
		textBoxPrixHT->Text = System::Convert::ToString(selectedArticle->getPrice());
		textBoxPrixHT->ForeColor = System::Drawing::SystemColors::ControlText;
		textBoxTVA->Text = System::Convert::ToString(selectedArticle->getTax()->getPercentage());
		textBoxTVA->ForeColor = System::Drawing::SystemColors::ControlText;

		
	}

		   ///////////
		   //Ajouter//
		   ///////////

	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nomArticle = textBoxNom->Text;
		Decimal prixHT = Decimal::Parse(textBoxPrixHT->Text);
		Decimal tauxTVA = Decimal::Parse(textBoxTVA->Text);
		
		update_search(nullptr, nullptr);
		MessageBox::Show("Article ajouté avec succès!");
	}


		   ////////////
		   //Modifier//
		   ////////////

	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	}



		   /////////////
		   //Supprimer//
		   /////////////

	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		ARTICLE::remove(selectedArticle);
		update_search();
	}

		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   //////////////////////////////////////////////////////////////////Placeholder////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	private: System::Void textBoxIdSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "Identifiant Article") {
			textBoxIdSearch->Text = "";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIdSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "") {
			textBoxIdSearch->Text = "Identifiant Article";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "Nom de l'article") {
			textBoxNomSearch->Text = "";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "") {
			textBoxNomSearch->Text = "Nom de l'article";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxPrixSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrixSearch->Text == "Prix Hors Taxe") {
			textBoxPrixSearch->Text = "";
			textBoxPrixSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrixSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrixSearch->Text == "") {
			textBoxPrixSearch->Text = "Prix Hors Taxe";
			textBoxPrixSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
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

	private: System::Void textBoxTVA_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxTVA->Text == "Taux TVA") {
			textBoxTVA->Text = "";
			textBoxTVA->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxTVA_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxTVA->Text == "") {
			textBoxTVA->Text = "Taux TVA";
			textBoxTVA->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxPrixHT_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrixHT->Text == "Prix Hors Taxe") {
			textBoxPrixHT->Text = "";
			textBoxPrixHT->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrixHT_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrixHT->Text == "") {
			textBoxPrixHT->Text = "Prix Hors Taxe";
			textBoxPrixHT->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   // 
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
	private: System::Void textBoxPrixHT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
