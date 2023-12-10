#pragma once

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
	public:
		App_Stock(void)
		{
			InitializeComponent();
			this->textBoxIdSearch->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxIdSearch_Enter);
			this->textBoxIdSearch->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxIdSearch_Leave);
			this->textBoxNomSearch->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxNomSearch_Enter);
			this->textBoxNomSearch->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxNomSearch_Leave);
			this->textBoxPrenomSearch->Enter += gcnew System::EventHandler(this, &App_Stock::textBoxPrenomSearch_Enter);
			this->textBoxPrenomSearch->Leave += gcnew System::EventHandler(this, &App_Stock::textBoxPrenomSearch_Leave);
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

	private: System::Windows::Forms::TextBox^ textBoxPrenomSearch;

	private:
		void SetInitialText() {
			textBoxIdSearch->Text = "Identificateur Stock";
			textBoxNomSearch->Text = "Identificateur Entrepôt";
			textBoxPrenomSearch->Text = "Nombre d'articles";
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Stock::typeid));
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
			this->label1->Location = System::Drawing::Point(1347, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Pôle de gestion du stock";
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
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(1785, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 61);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
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
			this->textBoxIdSearch->Name = L"textBoxIdSearch";
			this->textBoxIdSearch->Size = System::Drawing::Size(220, 22);
			this->textBoxIdSearch->TabIndex = 12;
			this->textBoxIdSearch->Text = L"Identificateur Stock";
			this->textBoxIdSearch->TextChanged += gcnew System::EventHandler(this, &App_Stock::textBoxIdSearch_TextChanged);
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
			this->textBoxNomSearch->Text = L"PréNombre d'articles";
			this->textBoxNomSearch->TextChanged += gcnew System::EventHandler(this, &App_Stock::textBoxNomSearch_TextChanged);
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
			this->textBoxPrenomSearch->Size = System::Drawing::Size(220, 22);
			this->textBoxPrenomSearch->TabIndex = 14;
			this->textBoxPrenomSearch->Text = L"Nombre d'articles";
			this->textBoxPrenomSearch->TextChanged += gcnew System::EventHandler(this, &App_Stock::textBoxPrenomSearch_TextChanged);
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
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1079, 268);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(744, 517);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App_Stock::pictureBox1_Click);
			// 
			// App_Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 923);
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
			this->Name = L"App_Stock";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Stock";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Stock::App_Stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void App_Stock_Load(System::Object^ sender, System::EventArgs^ e) {
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
		if (textBoxIdSearch->Text == "Identificateur Stock") {
			textBoxIdSearch->Text = "";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxIdSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdSearch->Text == "") {
			textBoxIdSearch->Text = "Identificateur Client";
			textBoxIdSearch->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBoxNomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "Identificateur Entrepôt") {
			textBoxNomSearch->Text = "";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxNomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNomSearch->Text == "") {
			textBoxNomSearch->Text = "Identificateur Entrepôt";
			textBoxNomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBoxPrenomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomSearch->Text == "Nombre d'articles") {
			textBoxPrenomSearch->Text = "";
			textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBoxPrenomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPrenomSearch->Text == "") {
			textBoxPrenomSearch->Text = "Nombre d'articles";
			textBoxPrenomSearch->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
