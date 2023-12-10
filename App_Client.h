#pragma once
#include "DataBase.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App_Client
	/// </summary>
	public ref class App_Client : public System::Windows::Forms::Form
	{
	public:
		App_Client(void)
		{
			InitializeComponent();
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Client::textBox1_int);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Client::textBox4_int);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Client::textBox9_int);
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &App_Client::textBox13_Date);
			this->textBox1->Enter += gcnew System::EventHandler(this, &App_Client::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &App_Client::textBox1_Leave);
			this->textBox2->Enter += gcnew System::EventHandler(this, &App_Client::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &App_Client::textBox2_Leave);
			this->textBox3->Enter += gcnew System::EventHandler(this, &App_Client::textBox3_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &App_Client::textBox3_Leave);
			this->textBox4->Enter += gcnew System::EventHandler(this, &App_Client::textBox4_Enter);
			this->textBox4->Leave += gcnew System::EventHandler(this, &App_Client::textBox4_Leave);
			this->textBox5->Enter += gcnew System::EventHandler(this, &App_Client::textBox5_Enter);
			this->textBox5->Leave += gcnew System::EventHandler(this, &App_Client::textBox5_Leave);
			this->textBox6->Enter += gcnew System::EventHandler(this, &App_Client::textBox6_Enter);
			this->textBox6->Leave += gcnew System::EventHandler(this, &App_Client::textBox6_Leave);
			this->textBox7->Enter += gcnew System::EventHandler(this, &App_Client::textBox7_Enter);
			this->textBox7->Leave += gcnew System::EventHandler(this, &App_Client::textBox7_Leave);
			this->textBox8->Enter += gcnew System::EventHandler(this, &App_Client::textBox8_Enter);
			this->textBox8->Leave += gcnew System::EventHandler(this, &App_Client::textBox8_Leave);
			this->textBox9->Enter += gcnew System::EventHandler(this, &App_Client::textBox9_Enter);
			this->textBox9->Leave += gcnew System::EventHandler(this, &App_Client::textBox9_Leave);
			this->textBox10->Enter += gcnew System::EventHandler(this, &App_Client::textBox10_Enter);
			this->textBox10->Leave += gcnew System::EventHandler(this, &App_Client::textBox10_Leave);
			this->textBox11->Enter += gcnew System::EventHandler(this, &App_Client::textBox11_Enter);
			this->textBox11->Leave += gcnew System::EventHandler(this, &App_Client::textBox11_Leave);
			this->textBox12->Enter += gcnew System::EventHandler(this, &App_Client::textBox12_Enter);
			this->textBox12->Leave += gcnew System::EventHandler(this, &App_Client::textBox12_Leave);
			this->textBox13->Enter += gcnew System::EventHandler(this, &App_Client::textBox13_Enter);
			this->textBox13->Leave += gcnew System::EventHandler(this, &App_Client::textBox13_Leave);
			database = gcnew DataBase();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~App_Client()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: bool buttonClicked = false;
	private: bool buttonClicked2 = false;


	private: DataBase^ database;
	private:
		void SetInitialText() {
			textBox1->Text = "Identificateur Client";
			textBox2->Text = "Prénom";
			textBox3->Text = "Nom";
			textBox4->Text = "Identificateur Client";
			textBox5->Text = "Prénom";
			textBox6->Text = "Nom";
			textBox7->Text = "Pays";
			textBox8->Text = "Ville";
			textBox9->Text = "Code Postal";
			textBox10->Text = "Numéro d'appartement";
			textBox11->Text = "Numéro de rue";
			textBox12->Text = "Nom de la rue";
			textBox13->Text = "Date de naissance";
		}

	private: void DataShow() {
		String^ selectQuery = "SELECT CLIENT.ID_CLIENT, CLIENT.CLIENT_PRENOM, CLIENT.CLIENT_NOM, CLIENT.CLIENT_NAISSANCE, " +
			"ADRESSE.ADRESSE_NUM_APPARTEMENT, ADRESSE.ADRESSE_NUM_RUE, ADRESSE.ADRESSE_RUE, " +
			"VILLE.VILLE_NOM, VILLE.VILLE_CP, PAYS.PAYS_NOM " +
			"FROM CLIENT " +
			"LEFT JOIN ADRESSE ON CLIENT.ID_ADRESSE = ADRESSE.ID_ADRESSE " +
			"LEFT JOIN VILLE ON ADRESSE.ID_VILLE = VILLE.ID_VILLE " +
			"LEFT JOIN PAYS ON VILLE.ID_PAYS = PAYS.ID_PAYS";

		DataSet^ dataSet = database->executeToDataSet(selectQuery);
		dataGridView1->DataSource = dataSet->Tables[0];
	}

	private:
		System::Void textBox1_int(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
				e->Handled = true;
			}
		}
	private:
		System::Void textBox4_int(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
				e->Handled = true;
			}
		}
	private:
		System::Void textBox9_int(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
				e->Handled = true;
			}
		}

	private:
		System::Void textBox13_Date(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Client::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(720, 452);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Client::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(1347, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 37);
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
			this->Main_Titre_2->Location = System::Drawing::Point(1226, 143);
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
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 61);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &App_Client::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->Location = System::Drawing::Point(1092, 283);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Identificateur client";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Location = System::Drawing::Point(1342, 283);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 22);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"Prénom";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Location = System::Drawing::Point(1592, 283);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"Nom";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox3_TextChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(176, 181);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(780, 530);
			this->dataGridView2->TabIndex = 16;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &App_Client::dataGridView2_CellContentClick_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1079, 268);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(744, 517);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(161, 165);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(811, 732);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_Client::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(1850, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 30);
			this->button2->TabIndex = 18;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &App_Client::buttonSearch_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1888, 279);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// Supprimer
			// 
			this->Supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Supprimer.BackgroundImage")));
			this->Supprimer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Supprimer->Location = System::Drawing::Point(871, 717);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(85, 160);
			this->Supprimer->TabIndex = 2;
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &App_Client::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(176, 800);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(689, 77);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier un personnel";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &App_Client::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(176, 717);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(689, 77);
			this->Ajouter->TabIndex = 0;
			this->Ajouter->Text = L"Ajouter un personnel";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &App_Client::Ajouter_Click);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->Location = System::Drawing::Point(222, 376);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(233, 22);
			this->textBox5->TabIndex = 22;
			this->textBox5->Text = L"Prénom";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox6->Location = System::Drawing::Point(222, 421);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(233, 22);
			this->textBox6->TabIndex = 23;
			this->textBox6->Text = L"Nom";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(630, 197);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(310, 348);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox7->Location = System::Drawing::Point(222, 574);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(198, 22);
			this->textBox7->TabIndex = 25;
			this->textBox7->Text = L"Pays";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox8->Location = System::Drawing::Point(222, 619);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(198, 22);
			this->textBox8->TabIndex = 26;
			this->textBox8->Text = L"Ville";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox8_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox10->Location = System::Drawing::Point(587, 660);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(196, 22);
			this->textBox10->TabIndex = 30;
			this->textBox10->Text = L"Numéro d\'appartement";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox11->Location = System::Drawing::Point(587, 619);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(196, 22);
			this->textBox11->TabIndex = 29;
			this->textBox11->Text = L"Numéro de rue";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox12->Location = System::Drawing::Point(587, 574);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(196, 22);
			this->textBox12->TabIndex = 28;
			this->textBox12->Text = L"Nom de la rue";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox12_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(198, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 25);
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
			this->label3->Location = System::Drawing::Point(195, 519);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 25);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Adresse de livraison et facturation";
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox9->Location = System::Drawing::Point(222, 660);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(198, 22);
			this->textBox9->TabIndex = 27;
			this->textBox9->Text = L"Code Postal";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox9_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox4->Location = System::Drawing::Point(222, 333);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(233, 22);
			this->textBox4->TabIndex = 21;
			this->textBox4->Text = L"Identificateur client";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &App_Client::textBox4_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox13->Location = System::Drawing::Point(222, 466);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(233, 22);
			this->textBox13->TabIndex = 24;
			this->textBox13->Text = L"Date de naissance";
			// 
			// App_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 923);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main_Titre_2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"App_Client";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Client";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Client::App_Client_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//////////////////////
		//Affichage auto BDD//
		//////////////////////

	private: System::Void App_Client_Load(System::Object^ sender, System::EventArgs^ e) {
		SetInitialText();
		DataShow();
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

	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ identificateur = textBox1->Text;
		String^ prenom = textBox2->Text;
		String^ nom = textBox3->Text;
		String^ sqlQuery = "SELECT * FROM Client WHERE";
		if (identificateur != "Identificateur Client") {
			sqlQuery += " ID_CLIENT = '" + identificateur + "' AND";
		}
		if (prenom != "Prénom") {
			sqlQuery += " CLIENT_PRENOM = '" + prenom + "' AND";
		}
		if (nom != "Nom") {
			sqlQuery += " CLIENT_NOM = '" + nom + "' AND";
		}
		if (sqlQuery->EndsWith("AND")) {
			sqlQuery = sqlQuery->Substring(0, sqlQuery->LastIndexOf("AND"));
		}
		DataSet^ dataSet = database->executeToDataSet(sqlQuery);
		if (dataSet->Tables->Count > 0) {
			dataGridView1->DataSource = dataSet->Tables[0];
		}
	}

		   ///////////
		   //Ajouter//
		   ///////////

	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ prenom = textBox5->Text;
		String^ nom = textBox6->Text;
		String^ pays = textBox7->Text;
		String^ ville = textBox8->Text;
		String^ cp = textBox9->Text;
		String^ num_appartement = textBox10->Text;
		String^ num_rue = textBox11->Text;
		String^ nom_rue = textBox12->Text;
		String^ date = textBox13->Text;

		String^ getPaysIdQuery = "SELECT ID_PAYS FROM Pays WHERE PAYS_NOM = '" + pays + "'";
		int idPays = database->executeToInt(getPaysIdQuery);
		if (idPays == 0) {
			String^ insertPaysQuery = "INSERT INTO Pays (PAYS_NOM) OUTPUT INSERTED.ID_PAYS VALUES ('" + pays + "')";
			idPays = database->executeToInt(insertPaysQuery);
		}

		String^ getVilleIdQuery = "SELECT ID_VILLE FROM Ville WHERE VILLE_NOM = '" + ville + "' AND VILLE_CP = '" + cp + "'";
		int idVille = database->executeToInt(getVilleIdQuery);
		if (idVille == 0) {
			String^ insertVilleQuery = "INSERT INTO Ville (VILLE_NOM, VILLE_CP, ID_PAYS) OUTPUT INSERTED.ID_VILLE VALUES ('" + ville + "', '" + cp + "', " + idPays + ")";
			idVille = database->executeToInt(insertVilleQuery);
		}

		String^ getAdresseIdQuery = "SELECT ID_ADRESSE FROM Adresse WHERE ADRESSE_NUM_APPARTEMENT = '" + num_appartement + "' AND ADRESSE_NUM_RUE = '" + num_rue + "' AND ADRESSE_RUE = '" + nom_rue + "' AND ID_VILLE = " + idVille;
		int idAdresse = database->executeToInt(getAdresseIdQuery);
		if (idAdresse == 0) {
			String^ insertAdresseQuery = "INSERT INTO Adresse (ADRESSE_NUM_APPARTEMENT, ADRESSE_NUM_RUE, ADRESSE_RUE, ID_VILLE) OUTPUT INSERTED.ID_ADRESSE VALUES ('" + num_appartement + "', '" + num_rue + "', '" + nom_rue + "', " + idVille + ")";
			idAdresse = database->executeToInt(insertAdresseQuery);
		}

		String^ getClientIdQuery = "SELECT ID_CLIENT FROM CLIENT WHERE CLIENT_NOM = '" + nom + "' AND CLIENT_PRENOM = '" + prenom + "' AND ID_ADRESSE = " + idAdresse;
		int idClient = database->executeToInt(getClientIdQuery);
		if (idClient == 0) {
			String^ insertClientQuery = "INSERT INTO CLIENT (CLIENT_NOM, CLIENT_PRENOM, CLIENT_NAISSANCE, ID_ADRESSE) OUTPUT INSERTED.ID_CLIENT VALUES ('" + nom + "', '" + prenom + "', GETDATE(), " + idAdresse + ")";
			idClient = database->executeToInt(insertClientQuery);
		}
		DataShow();
		buttonClicked = false;
	}

		   ////////////
		   //Modifier//
		   ////////////

	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ clientID = textBox4->Text;
		int ClientUpdate;

		if (String::IsNullOrEmpty(clientID) || !Int32::TryParse(clientID, ClientUpdate)) {
			MessageBox::Show("Veuillez entrer un ID client valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (ClientExists(ClientUpdate)) {
			database->execute("DELETE FROM CLIENT WHERE ID_CLIENT = " + ClientUpdate);
			String^ prenom = textBox5->Text;
			String^ nom = textBox6->Text;
			String^ pays = textBox7->Text;
			String^ ville = textBox8->Text;
			String^ cp = textBox9->Text;
			String^ num_appartement = textBox10->Text;
			String^ num_rue = textBox11->Text;
			String^ nom_rue = textBox12->Text;
			String^ date = textBox13->Text;

			String^ getPaysIdQuery = "SELECT ID_PAYS FROM Pays WHERE PAYS_NOM = '" + pays + "'";
			int idPays = database->executeToInt(getPaysIdQuery);
			if (idPays == 0) {
				String^ insertPaysQuery = "INSERT INTO Pays (PAYS_NOM) OUTPUT INSERTED.ID_PAYS VALUES ('" + pays + "')";
				idPays = database->executeToInt(insertPaysQuery);
			}

			String^ getVilleIdQuery = "SELECT ID_VILLE FROM Ville WHERE VILLE_NOM = '" + ville + "' AND VILLE_CP = '" + cp + "'";
			int idVille = database->executeToInt(getVilleIdQuery);
			if (idVille == 0) {
				String^ insertVilleQuery = "INSERT INTO Ville (VILLE_NOM, VILLE_CP, ID_PAYS) OUTPUT INSERTED.ID_VILLE VALUES ('" + ville + "', '" + cp + "', " + idPays + ")";
				idVille = database->executeToInt(insertVilleQuery);
			}

			String^ getAdresseIdQuery = "SELECT ID_ADRESSE FROM Adresse WHERE ADRESSE_NUM_APPARTEMENT = '" + num_appartement + "' AND ADRESSE_NUM_RUE = '" + num_rue + "' AND ADRESSE_RUE = '" + nom_rue + "' AND ID_VILLE = " + idVille;
			int idAdresse = database->executeToInt(getAdresseIdQuery);
			if (idAdresse == 0) {
				String^ insertAdresseQuery = "INSERT INTO Adresse (ADRESSE_NUM_APPARTEMENT, ADRESSE_NUM_RUE, ADRESSE_RUE, ID_VILLE) OUTPUT INSERTED.ID_ADRESSE VALUES ('" + num_appartement + "', '" + num_rue + "', '" + nom_rue + "', " + idVille + ")";
				idAdresse = database->executeToInt(insertAdresseQuery);
			}

			String^ getClientIdQuery = "SELECT ID_CLIENT FROM CLIENT WHERE CLIENT_NOM = '" + nom + "' AND CLIENT_PRENOM = '" + prenom + "' AND ID_ADRESSE = " + idAdresse;
			int idClient = database->executeToInt(getClientIdQuery);
			if (idClient == 0) {
				String^ insertClientQuery = "INSERT INTO CLIENT (CLIENT_NOM, CLIENT_PRENOM, CLIENT_NAISSANCE, ID_ADRESSE) OUTPUT INSERTED.ID_CLIENT VALUES ('" + nom + "', '" + prenom + "', GETDATE(), " + idAdresse + ")";
				idClient = database->executeToInt(insertClientQuery);
			}
		}
		else {
			MessageBox::Show("Le client n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		DataShow();
	}

		   bool ClientExists(int clientId) {
			   String^ query = "SELECT COUNT(*) FROM CLIENT WHERE ID_CLIENT = " + clientId;
			   int count = database->executeToInt(query);
			   return count > 0;
		   }


	/////////////
	//Supprimer//
	/////////////

	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ clientID = textBox4->Text;
		int ClientDelete;
		if (!String::IsNullOrEmpty(clientID) && Int32::TryParse(clientID, ClientDelete)) {
			database->execute("DELETE FROM CLIENT WHERE ID_CLIENT = " + ClientDelete);
			DataShow();
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////Placeholder////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Identificateur Client") {
			textBox1->Text = "";
			textBox1->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Identificateur Client";
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Prénom") {
			textBox2->Text = "";
			textBox2->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") {
			textBox2->Text = "Prénom";
			textBox2->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "Nom") {
			textBox3->Text = "";
			textBox3->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "") {
			textBox3->Text = "Nom";
			textBox3->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "Identificateur Client") {
			textBox4->Text = "";
			textBox4->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "") {
			textBox4->Text = "Identificateur Client";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text == "Prénom") {
			textBox5->Text = "";
			textBox5->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox5_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text == "") {
			textBox5->Text = "Prénom";
			textBox5->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text == "Nom") {
			textBox6->Text = "";
			textBox6->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox6_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text == "") {
			textBox6->Text = "Nom";
			textBox6->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBox7_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7->Text == "Pays") {
			textBox7->Text = "";
			textBox7->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox7_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7->Text == "") {
			textBox7->Text = "Pays";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox8_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text == "Ville") {
			textBox8->Text = "";
			textBox8->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox8_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text == "") {
			textBox8->Text = "Ville";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox9_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox9->Text == "Code Postal") {
			textBox9->Text = "";
			textBox9->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox9_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox9->Text == "") {
			textBox9->Text = "Code Postal";
			textBox9->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox10_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox10->Text == "Numéro d'appartement") {
			textBox10->Text = "";
			textBox10->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox10_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox10->Text == "") {
			textBox10->Text = "Numéro d'appartement";
			textBox10->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox11_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox11->Text == "Numéro de rue") {
			textBox11->Text = "";
			textBox11->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox11_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox11->Text == "") {
			textBox11->Text = "Numéro de rue";
			textBox11->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox12_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox12->Text == "Nom de la rue") {
			textBox12->Text = "";
			textBox12->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox12_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox12->Text == "") {
			textBox12->Text = "Nom de la rue";
			textBox12->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private:
		System::Void textBox13_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (textBox13->Text == "Date de naissance") {
				textBox13->Text = "";
				textBox13->ForeColor = System::Drawing::SystemColors::ControlText;
			}
		}

	private:
		System::Void textBox13_Leave(System::Object^ sender, System::EventArgs^ e) {
			if (!buttonClicked) {
				String^ inputDate = textBox13->Text;
				DateTime parsedDate;
				if (!DateTime::TryParse(inputDate, parsedDate)) {
					MessageBox::Show("Format de date invalide. Veuillez entrer une date valide au format yyyy-MM-dd.");
				}
			}
			else {
				textBox13->Text = "Date de naissance";
				textBox13->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			}
		}

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////
	//Vide//
	////////

	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	}

};
}


//////////////
//Pas réussi//
//////////////

			//String^ newPrenom = textBox5->Text;
			//String^ newNom = textBox6->Text;
			//String^ newPays = textBox7->Text;
			//String^ newVille = textBox8->Text;
			//String^ newCp = textBox9->Text;
			//String^ newNum_rue = textBox10->Text;
			//String^ newNum_appartement = textBox11->Text;
			//String^ newNom_rue = textBox12->Text;
			//String^ newDate = textBox13->Text;
			//String^ updateQuery = "UPDATE CLIENT SET";
			//bool updatedSomething = false;
			//
			//if (!String::IsNullOrEmpty(newPrenom)) {
			//	updateQuery += " CLIENT_PRENOM = '" + newPrenom + "',";
			//	updatedSomething = true;
			//}
			//
			//if (!String::IsNullOrEmpty(newNom)) {
			//	updateQuery += " CLIENT_NOM = '" + newNom + "',";
			//	updatedSomething = true;
			//}
			//
			//if (!String::IsNullOrEmpty(newDate)) {
			//	updateQuery += " CLIENT_NAISSANCE = '" + newDate + "',";
			//	updatedSomething = true;
			//}
			//
			//int idPays = database->executeToInt("SELECT ID_PAYS FROM Pays WHERE PAYS_NOM = '" + newPays + "'");
			//if (idPays == 0) {
			//	String^ insertPaysQuery = "INSERT INTO Pays (PAYS_NOM) OUTPUT INSERTED.ID_PAYS VALUES ('" + newPays + "')";
			//	idPays = database->executeToInt(insertPaysQuery);
			//}
			//
			//int idVille = database->executeToInt("SELECT ID_VILLE FROM Ville WHERE VILLE_NOM = '" + newVille + "' AND VILLE_CP = '" + newCp + "'");
			//if (idVille == 0) {
			//	String^ insertVilleQuery = "INSERT INTO Ville (VILLE_NOM, VILLE_CP, ID_PAYS) OUTPUT INSERTED.ID_VILLE VALUES ('" + newVille + "', '" + newCp + "', " + idPays + ")";
			//	idVille = database->executeToInt(insertVilleQuery);
			//}
			//
			//int idAdresse = database->executeToInt("SELECT ID_ADRESSE FROM Adresse WHERE ADRESSE_NUM_APPARTEMENT = '" + newNum_appartement + "' AND ADRESSE_NUM_RUE = '" + newNum_rue + "' AND ADRESSE_RUE = '" + newNom_rue + "' AND ID_VILLE = " + idVille);
			//if (idAdresse == 0) {
			//	String^ insertAdresseQuery = "INSERT INTO Adresse (ADRESSE_NUM_APPARTEMENT, ADRESSE_NUM_RUE, ADRESSE_RUE, ID_VILLE) OUTPUT INSERTED.ID_ADRESSE VALUES ('" + newNum_appartement + "', '" + newNum_rue + "', '" + newNom_rue + "', " + idVille + ")";
			//	idAdresse = database->executeToInt(insertAdresseQuery);
			//}
			//
			//if (updatedSomething) {
			//	updateQuery = updateQuery->Substring(0, updateQuery->Length - 1);
			//	updateQuery += " WHERE ID_CLIENT = " + ClientUpdate;
			//	database->execute(updateQuery);
			//}