#pragma once

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
			this->textBoxIdSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxIdSearch_Enter);
			this->textBoxIdSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxIdSearch_Leave);
			this->textBoxNomSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxNomSearch_Enter);
			this->textBoxNomSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxNomSearch_Leave);
			this->textBoxPrenomSearch->Enter += gcnew System::EventHandler(this, &App_Commandes::textBoxPrenomSearch_Enter);
			this->textBoxPrenomSearch->Leave += gcnew System::EventHandler(this, &App_Commandes::textBoxPrenomSearch_Leave);
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
	private: System::Windows::Forms::TextBox^ textBoxIdSearch;
	private: System::Windows::Forms::TextBox^ textBoxNomSearch;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBoxPrenomSearch;

	private:
		void SetInitialText() {
			textBoxIdSearch->Text = "Identificateur commandes";
			textBoxNomSearch->Text = "R�f�rence produit";
			textBoxPrenomSearch->Text = "Statut de la commande";
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
			this->textBoxIdSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1092, 322);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(720, 452);
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
			this->label1->Location = System::Drawing::Point(1307, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(410, 37);
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
			this->Main_Titre_2->Location = System::Drawing::Point(1186, 143);
			this->Main_Titre_2->Name = L"Main_Titre_2";
			this->Main_Titre_2->Size = System::Drawing::Size(126, 37);
			this->Main_Titre_2->TabIndex = 9;
			this->Main_Titre_2->Text = L"NORTIC :";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(1785, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 61);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &App_Commandes::button1_Click);
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
			this->textBoxIdSearch->Name = L"textBoxIdSearch";
			this->textBoxIdSearch->Size = System::Drawing::Size(220, 22);
			this->textBoxIdSearch->TabIndex = 12;
			this->textBoxIdSearch->Text = L"Identificateur commandes";
			this->textBoxIdSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBoxIdSearch_TextChanged);
			// 
			// textBoxNomSearch
			// 
			this->textBoxNomSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNomSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxNomSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxNomSearch->Location = System::Drawing::Point(1342, 283);
			this->textBoxNomSearch->Name = L"textBoxNomSearch";
			this->textBoxNomSearch->Size = System::Drawing::Size(220, 22);
			this->textBoxNomSearch->TabIndex = 13;
			this->textBoxNomSearch->Text = L"R�f�rence produit";
			this->textBoxNomSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBoxNomSearch_TextChanged);
			// 
			// textBoxPrenomSearch
			// 
			this->textBoxPrenomSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPrenomSearch->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxPrenomSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBoxPrenomSearch->Location = System::Drawing::Point(1592, 283);
			this->textBoxPrenomSearch->Name = L"textBoxPrenomSearch";
			this->textBoxPrenomSearch->Size = System::Drawing::Size(125, 22);
			this->textBoxPrenomSearch->TabIndex = 14;
			this->textBoxPrenomSearch->Text = L"Statut de la commande";
			this->textBoxPrenomSearch->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBoxPrenomSearch_TextChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(176, 181);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(780, 700);
			this->dataGridView2->TabIndex = 16;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
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
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(161, 165);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(811, 732);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_Commandes::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1894, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(32, 30);
			this->button3->TabIndex = 21;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(1854, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 30);
			this->button2->TabIndex = 20;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// App_Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 923);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"App_Commandes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Commandes";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Commandes::App_Commandes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void App_Commandes_Load(System::Object^ sender, System::EventArgs^ e) {
		SetInitialText();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBoxIdSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNomSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxPrenomSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBoxIdSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "Identificateur commandes") {
			textBoxIdSearch->Text = "";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIdSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "") {
			textBoxIdSearch->Text = "Identificateur commandes";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "R�f�rence produit") {
			textBoxNomSearch->Text = "";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "") {
			textBoxNomSearch->Text = "R�f�rence produit";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxPrenomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomSearch->Text == "Statut de la commande") {
			textBoxPrenomSearch->Text = "";
			textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrenomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomSearch->Text == "") {
			textBoxPrenomSearch->Text = "Statut de la commande";
			textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
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
