#pragma once
#include "mORDER.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de App_Commandes
	/// </summary>
	public ref class App_Commandes : public System::Windows::Forms::Form
	{
	public:
		App_Commandes(void)
		{
			InitializeComponent();
			this->textBoxRefSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxRefSearch_Enter);
			this->textBoxRefSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxRefSearch_Leave);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private:
		void SetInitialText() {
			textBoxRefSearch->Text = "Ref�rence commande";
		}

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Text = L"P�le de gestion des commandes";
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
			this->textBoxRefSearch->Text = L"R�f�rence";
			this->textBoxRefSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::search);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_Commandes::pictureBox1_Click);
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
			this->textBoxPrenomClientSearch->Text = L"Pr�nom client";
			this->textBoxPrenomClientSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::search);
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
			this->button2->Text = L"Supprimer l\'article s�lectionn�";
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
			this->textBox2->Text = L"Quantit�";
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(397, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(301, 20);
			this->textBox3->TabIndex = 27;
			this->textBox3->Text = L"R�f�rence";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(323, 185);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"ID Client";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(397, 185);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(301, 20);
			this->textBox5->TabIndex = 29;
			this->textBox5->Text = L"Nom";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(397, 211);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(301, 20);
			this->textBox6->TabIndex = 30;
			this->textBox6->Text = L"Pr�nom";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(323, 237);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 20);
			this->textBox7->TabIndex = 31;
			this->textBox7->Text = L"R�duction";
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
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox8->Location = System::Drawing::Point(595, 237);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(103, 20);
			this->textBox8->TabIndex = 33;
			this->textBox8->Text = L"19�50";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(614, 653);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 46);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Valider";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(323, 159);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(68, 20);
			this->textBox9->TabIndex = 35;
			this->textBox9->Text = L"ID Comm.";
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
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
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
		if (textBoxPrenomClientSearch->Text == "Pr�nom client") textBoxPrenomClientSearch->Text = "";
		if (textBoxNomClientSearch->Text == "Nom client") textBoxNomClientSearch->Text = "";
		if (textBoxIDClientSearch->Text == "ID Client") textBoxIDClientSearch->Text = "";
		if (textBoxRefSearch->Text == "R�f�rence") textBoxRefSearch->Text = "";

		if (dateTimePicker1->Value == System::DateTime(1990, 1, 1, 0, 0, 0, 0)){
			dataGridView1->DataSource = ORDER::search("", textBoxIDClientSearch->Text, textBoxNomClientSearch->Text, textBoxPrenomClientSearch->Text);
		} else {
			dataGridView1->DataSource = ORDER::search("", textBoxIDClientSearch->Text, textBoxNomClientSearch->Text, textBoxPrenomClientSearch->Text, dateTimePicker1->Value);
		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			Order^ order = ORDER::get(Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value));
			dataGridView2->DataSource = order->getArticleList()->toDataSet();

			textBox3->Text = order->getReference();
			textBox9->Text = order->getId().ToString();
			textBox4->Text = order->getClient()->getId().ToString();
			textBox5->Text = order->getClient()->getFirstName();
			textBox6->Text = order->getClient()->getLastName();
			textBox7->Text = order->getRemise().ToString();
			textBox8->Text = order->getTotal().ToString();
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
		if (textBoxRefSearch->Text == "R�f�rence") {
			textBoxRefSearch->Text = "";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxRefSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "") {
			textBoxRefSearch->Text = "R�f�rence";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxIDClientSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "ID Client") {
			textBoxRefSearch->Text = "";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIDClientSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "") {
			textBoxRefSearch->Text = "ID Client";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomClientSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "Nom client") {
			textBoxRefSearch->Text = "";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomClientSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "") {
			textBoxRefSearch->Text = "Nom client";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxPrenomClientSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "Pr�nom client") {
			textBoxRefSearch->Text = "";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrenomClientSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxRefSearch->Text == "") {
			textBoxRefSearch->Text = "Pr�nom client";
			textBoxRefSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void dataGridView2_ContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
