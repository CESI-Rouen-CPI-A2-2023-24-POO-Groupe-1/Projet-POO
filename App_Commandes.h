#pragma once
#include "mORDER.h"
#include "mCLIENT.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App_Commandes
	/// </summary>
	public ref class App_Commandes : public System::Windows::Forms::Form
	{
	private: ArticleList^ articleList = gcnew ArticleList();

	public:
		App_Commandes(void)
		{
			InitializeComponent();
			this->textBoxRefSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxRefSearch_Enter);
			this->textBoxRefSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxRefSearch_Leave);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~App_Commandes()
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
	private: System::Windows::Forms::TextBox^ textBoxRefSearch;


	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBoxIDClientSearch;
	private: System::Windows::Forms::TextBox^ textBoxNomClientSearch;
	private: System::Windows::Forms::TextBox^ textBoxPrenomClientSearch;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBoxRef;
	private: System::Windows::Forms::TextBox^ textBoxIDClient;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxRemise;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxTotal;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private:
		void SetInitialText() {}

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Commandes::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxRefSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxIDClientSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomClientSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomClientSearch = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBoxRef = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRemise = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(819, 262);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(540, 367);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Commandes::dataGridView1_CellContentClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Commandes::dataGridView1_CellContentClick);
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Commandes::dataGridView1_CellContentClick);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Commandes::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(980, 116);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Pôle de gestion des commandes";
			// 
			// Main_Titre_2
			// 
			this->Main_Titre_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Main_Titre_2->AutoSize = true;
			this->Main_Titre_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Main_Titre_2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Titre_2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Main_Titre_2->Location = System::Drawing::Point(890, 116);
			this->Main_Titre_2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Main_Titre_2->Name = L"Main_Titre_2";
			this->Main_Titre_2->Size = System::Drawing::Size(100, 29);
			this->Main_Titre_2->TabIndex = 9;
			this->Main_Titre_2->Text = L"NORTIC :";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(1339, 52);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 50);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &App_Commandes::button1_Click);
			// 
			// textBoxRefSearch
			// 
			this->textBoxRefSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxRefSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxRefSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxRefSearch->Location = System::Drawing::Point(819, 230);
			this->textBoxRefSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxRefSearch->Name = L"textBoxRefSearch";
			this->textBoxRefSearch->Size = System::Drawing::Size(77, 20);
			this->textBoxRefSearch->TabIndex = 12;
			this->textBoxRefSearch->Text = L"Référence";
			this->textBoxRefSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::search);
			this->textBoxRefSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxRefSearch_Enter);
			this->textBoxRefSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxRefSearch_Leave);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(132, 147);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(585, 569);
			this->dataGridView2->TabIndex = 16;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
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
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(121, 134);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(609, 595);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// textBoxIDClientSearch
			// 
			this->textBoxIDClientSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxIDClientSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxIDClientSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIDClientSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxIDClientSearch->Location = System::Drawing::Point(900, 230);
			this->textBoxIDClientSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxIDClientSearch->Name = L"textBoxIDClientSearch";
			this->textBoxIDClientSearch->Size = System::Drawing::Size(77, 20);
			this->textBoxIDClientSearch->TabIndex = 18;
			this->textBoxIDClientSearch->Text = L"ID Client";
			this->textBoxIDClientSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::search);
			this->textBoxIDClientSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxIDClientSearch_Enter);
			this->textBoxIDClientSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxIDClientSearch_Leave);
			// 
			// textBoxNomClientSearch
			// 
			this->textBoxNomClientSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNomClientSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxNomClientSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNomClientSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxNomClientSearch->Location = System::Drawing::Point(985, 230);
			this->textBoxNomClientSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomClientSearch->Name = L"textBoxNomClientSearch";
			this->textBoxNomClientSearch->Size = System::Drawing::Size(112, 20);
			this->textBoxNomClientSearch->TabIndex = 19;
			this->textBoxNomClientSearch->Text = L"Nom client";
			this->textBoxNomClientSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::search);
			this->textBoxNomClientSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxNomClientSearch_Enter);
			this->textBoxNomClientSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxNomClientSearch_Leave);
			// 
			// textBoxPrenomClientSearch
			// 
			this->textBoxPrenomClientSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPrenomClientSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxPrenomClientSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrenomClientSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxPrenomClientSearch->Location = System::Drawing::Point(1101, 230);
			this->textBoxPrenomClientSearch->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenomClientSearch->Name = L"textBoxPrenomClientSearch";
			this->textBoxPrenomClientSearch->Size = System::Drawing::Size(122, 20);
			this->textBoxPrenomClientSearch->TabIndex = 20;
			this->textBoxPrenomClientSearch->Text = L"Prénom client";
			this->textBoxPrenomClientSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::search);
			this->textBoxPrenomClientSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxPrenomClientSearch_Enter);
			this->textBoxPrenomClientSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxPrenomClientSearch_Leave);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(1229, 230);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(130, 20);
			this->dateTimePicker1->TabIndex = 21;
			this->dateTimePicker1->Value = System::DateTime(1990, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &App_Commandes::search);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(146, 653);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 46);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Supprimer l\'article sélectionné";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(326, 653);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 24;
			this->textBox1->Text = L"Identifiant article";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(326, 679);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 25;
			this->textBox2->Text = L"Quantité";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(437, 653);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 46);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Ajouter un article";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBoxRef
			// 
			this->textBoxRef->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxRef->Location = System::Drawing::Point(397, 159);
			this->textBoxRef->Name = L"textBoxRef";
			this->textBoxRef->Size = System::Drawing::Size(301, 20);
			this->textBoxRef->TabIndex = 27;
			this->textBoxRef->Text = L"Référence";
			this->textBoxRef->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxRef_Enter);
			this->textBoxRef->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxRef_Leave);
			// 
			// textBoxIDClient
			// 
			this->textBoxIDClient->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxIDClient->Location = System::Drawing::Point(323, 185);
			this->textBoxIDClient->Name = L"textBoxIDClient";
			this->textBoxIDClient->Size = System::Drawing::Size(68, 20);
			this->textBoxIDClient->TabIndex = 28;
			this->textBoxIDClient->Text = L"ID Client";
			this->textBoxIDClient->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBoxIDClient_TextChanged);
			this->textBoxIDClient->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxIDClient_Enter);
			this->textBoxIDClient->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxIDClient_Leave);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxPrenom->Location = System::Drawing::Point(397, 185);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->ReadOnly = true;
			this->textBoxPrenom->Size = System::Drawing::Size(301, 20);
			this->textBoxPrenom->TabIndex = 29;
			this->textBoxPrenom->Text = L"Nom";
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxNom->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxNom->Location = System::Drawing::Point(397, 211);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->ReadOnly = true;
			this->textBoxNom->Size = System::Drawing::Size(301, 20);
			this->textBoxNom->TabIndex = 30;
			this->textBoxNom->Text = L"Prénom";
			// 
			// textBoxRemise
			// 
			this->textBoxRemise->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxRemise->Location = System::Drawing::Point(323, 237);
			this->textBoxRemise->Name = L"textBoxRemise";
			this->textBoxRemise->Size = System::Drawing::Size(223, 20);
			this->textBoxRemise->TabIndex = 31;
			this->textBoxRemise->Text = L"Réduction";
			this->textBoxRemise->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxRemise_Enter);
			this->textBoxRemise->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxRemise_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(552, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Total :";
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxTotal->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBoxTotal->Location = System::Drawing::Point(595, 237);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->ReadOnly = true;
			this->textBoxTotal->Size = System::Drawing::Size(103, 20);
			this->textBoxTotal->TabIndex = 33;
			this->textBoxTotal->Text = L"19€50";
			this->textBoxTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(614, 653);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 46);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Valider";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &App_Commandes::button4_Click);
			// 
			// textBoxID
			// 
			this->textBoxID->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxID->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBoxID->Location = System::Drawing::Point(323, 159);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(68, 20);
			this->textBoxID->TabIndex = 35;
			this->textBoxID->Text = L"ID Comm.";
			this->textBoxID->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxID_Enter);
			this->textBoxID->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxID_Leave);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(146, 263);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(552, 375);
			this->dataGridView3->TabIndex = 22;
			// 
			// App_Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1443, 750);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxRemise);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxIDClient);
			this->Controls->Add(this->textBoxRef);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBoxPrenomClientSearch);
			this->Controls->Add(this->textBoxNomClientSearch);
			this->Controls->Add(this->textBoxIDClientSearch);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBoxRefSearch);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main_Titre_2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"App_Commandes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Commandes";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Commandes::App_Commandes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void App_Commandes_Load(System::Object^ sender, System::EventArgs^ e) {
		SetInitialText();
		search(nullptr, nullptr);
	}

	private: System::Void search(System::Object^ sender, System::EventArgs^ e) {
		String^ ref = textBoxRefSearch->Text;
		String^ idClient = textBoxIDClientSearch->Text;
		String^ nomClient = textBoxNomClientSearch->Text;
		String^ prenomClient = textBoxPrenomClientSearch->Text;
		if(ref == "Référence") ref = "";
		if(idClient == "ID Client") idClient = "";
		if(nomClient == "Nom client") nomClient = "";
		if(prenomClient == "Prénom client") prenomClient = "";

		if (dateTimePicker1->Value == System::DateTime(1990, 1, 1, 0, 0, 0, 0)){
			dataGridView1->DataSource = ORDER::search(ref, idClient, nomClient, prenomClient)->Tables[0]->DefaultView;
		} else {
			dataGridView1->DataSource = ORDER::search(ref, idClient, nomClient, prenomClient, dateTimePicker1->Value)->Tables[0]->DefaultView;
		}
		dataGridView1->Columns[0]->HeaderText = "ID";
		dataGridView1->Columns[1]->HeaderText = "Référence";
		dataGridView1->Columns[2]->HeaderText = "Date";
		dataGridView1->Columns[3]->Visible = false;
		dataGridView1->Columns[4]->Visible = false;
		dataGridView1->Columns[5]->Visible = false;
		dataGridView1->Columns[6]->Visible = false;
		dataGridView1->Columns[7]->HeaderText = "Nom";
		dataGridView1->Columns[8]->HeaderText = "Prénom";
		dataGridView1->Columns[9]->Visible = false;
		dataGridView1->Columns[10]->Visible = false;
		dataGridView1->Columns[11]->Visible = false;
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex == dataGridView1->RowCount - 1){
			textBoxRef->Text = "Référence";
			textBoxRef->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBoxID->Text = "ID Comm.";
			textBoxID->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBoxIDClient->Text = "ID Client";
			textBoxIDClient->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBoxPrenom->Text = "Prénom";
			textBoxPrenom->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBoxNom->Text = "Nom";
			textBoxNom->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBoxRemise->Text = "Réduction";
			textBoxRemise->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBoxTotal->Text = "0";
			dataGridView2->DataSource = nullptr;
			return;
		};
		if (e->RowIndex >= 0) {
			Order^ order = ORDER::get(Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value));
			dataGridView2->DataSource = order->getArticleList()->toDataSet();

			textBoxRef->Text = order->getReference();
			textBoxRef->ForeColor = System::Drawing::SystemColors::ControlText;
			textBoxID->Text = order->getId().ToString();
			textBoxID->ForeColor = System::Drawing::SystemColors::ControlText;
			textBoxIDClient->Text = order->getClient()->getId().ToString();
			textBoxIDClient->ForeColor = System::Drawing::SystemColors::ControlText;
			textBoxPrenom->Text = order->getClient()->getFirstName();
			textBoxPrenom->ForeColor = System::Drawing::SystemColors::ControlText;
			textBoxNom->Text = order->getClient()->getLastName();
			textBoxNom->ForeColor = System::Drawing::SystemColors::ControlText;
			textBoxRemise->Text = order->getRemise().ToString();
			textBoxRemise->ForeColor = System::Drawing::SystemColors::ControlText;
			textBoxTotal->Text = order->getTotal().ToString();

		}
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBoxRefSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNomSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxPrenomSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBoxRefSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "Référence") {
			textBoxRefSearch->Text = "";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxRefSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "") {
			textBoxRefSearch->Text = "Référence";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxIDClientSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIDClientSearch->Text == "ID Client") {
			textBoxIDClientSearch->Text = "";
			textBoxIDClientSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIDClientSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIDClientSearch->Text == "") {
			textBoxIDClientSearch->Text = "ID Client";
			textBoxIDClientSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomClientSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomClientSearch->Text == "Nom client") {
			textBoxNomClientSearch->Text = "";
			textBoxNomClientSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomClientSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomClientSearch->Text == "") {
			textBoxNomClientSearch->Text = "Nom client";
			textBoxNomClientSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxPrenomClientSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomClientSearch->Text == "Prénom client") {
			textBoxPrenomClientSearch->Text = "";
			textBoxPrenomClientSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrenomClientSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomClientSearch->Text == "") {
			textBoxPrenomClientSearch->Text = "Prénom client";
			textBoxPrenomClientSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxID_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxID->Text == "ID Comm.") {
				textBoxID->Text = "";
				textBoxID->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}
	private: System::Void textBoxID_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxID->Text == "") {
				textBoxID->Text = "ID Comm.";
				textBoxID->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxRef_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRef->Text == "Référence") {
			textBoxRef->Text = "";
			textBoxRef->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxRef_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRef->Text == "") {
			textBoxRef->Text = "Référence";
			textBoxRef->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxIDClient_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIDClient->Text == "ID Client") {
			textBoxIDClient->Text = "";
			textBoxIDClient->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIDClient_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIDClient->Text == "") {
			textBoxIDClient->Text = "ID Client";
			textBoxIDClient->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxIDClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBoxIDClient->Text, "[^0-9]")) {
			textBoxIDClient->Text = "ID Client";
		} else {
			if (textBoxIDClient->Text != "") {
				Client^ client = CLIENT::get(Convert::ToInt32(textBoxIDClient->Text));
				if (client != nullptr) {
					textBoxPrenom->Text = client->getFirstName();
					textBoxNom->Text = client->getLastName();
				} else {
					textBoxPrenom->Text = "ID invalide";
					textBoxNom->Text = "";
				}
			} else {
				textBoxPrenom->Text = "Nom";
				textBoxNom->Text = "Prénom";
			}
		}
	}

	private: System::Void textBoxRemise_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRemise->Text == "Réduction") {
			textBoxRemise->Text = "";
			textBoxRemise->ForeColor = System::Drawing::SystemColors::ControlText;
		} else if (textBoxRemise->Text->EndsWith("%")) {
			textBoxRemise->Text = textBoxRemise->Text->Substring(0, textBoxRemise->Text->Length - 1);
		}
	}

	private: System::Void textBoxRemise_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRemise->Text == "" || System::Text::RegularExpressions::Regex::IsMatch(textBoxRemise->Text, "[^0-9]")) {
			textBoxRemise->Text = "Réduction";
			textBoxRemise->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			return;
		}
		int remise = Convert::ToInt32(textBoxRemise->Text);
		if (remise > 100) {
			textBoxRemise->Text = "100%";
		} else if (!textBoxRemise->Text->EndsWith("%")) {
			textBoxRemise->Text += "%";
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxID->Text == "ID Comm.") {
			Order^ order = gcnew Order();
			order->setReference(textBoxRef->Text);
			order->setClient(CLIENT::get(Convert::ToInt32(textBoxIDClient->Text)));
			order->setRemise(Convert::ToInt32(textBoxRemise->Text->Substring(0, textBoxRemise->Text->Length - 1)));
			order->setArticleList(articleList);
			ORDER::add(order);
			MessageBox::Show("Commande ajoutée avec succès !", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
			search(nullptr, nullptr);
		} else {
			Order^ order = ORDER::get(Convert::ToInt32(textBoxID->Text));
			order->setReference(textBoxRef->Text);
			order->setClient(CLIENT::get(Convert::ToInt32(textBoxIDClient->Text)));
			order->setRemise(Convert::ToInt32(textBoxRemise->Text->Substring(0, textBoxRemise->Text->Length - 1)));
			order->setArticleList(articleList);
			ORDER::edit(order);
			search(nullptr, nullptr);
		}
	}
};
}
