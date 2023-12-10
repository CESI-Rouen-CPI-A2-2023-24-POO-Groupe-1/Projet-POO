#pragma once

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
	public:
		App_Commandes(void)
		{
			InitializeComponent();
			this->textBox1->Enter += gcnew System::EventHandler(this, &App_Commandes::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &App_Commandes::textBox1_Leave);
			this->textBox2->Enter += gcnew System::EventHandler(this, &App_Commandes::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &App_Commandes::textBox2_Leave);
			this->textBox3->Enter += gcnew System::EventHandler(this, &App_Commandes::textBox3_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &App_Commandes::textBox3_Leave);
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox3;

	private:
		void SetInitialText() {
			textBox1->Text = "Identificateur commandes";
			textBox2->Text = "Référence produit";
			textBox3->Text = "Statut de la commande";
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Commandes::typeid));
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
			this->textBox1->Text = L"Identificateur commandes";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBox1_TextChanged);
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
			this->textBox2->Text = L"Référence produit";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBox2_TextChanged);
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
			this->textBox3->Size = System::Drawing::Size(125, 22);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"Statut de la commande";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &App_Commandes::textBox3_TextChanged);
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
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Identificateur commandes") {
			textBox1->Text = "";
			textBox1->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Identificateur commandes";
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}

	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Référence produit") {
			textBox2->Text = "";
			textBox2->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") {
			textBox2->Text = "Référence produit";
			textBox2->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}

	private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "Statut de la commande") {
			textBox3->Text = "";
			textBox3->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}

	private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "") {
			textBox3->Text = "Statut de la commande";
			textBox3->ForeColor = System::Drawing::SystemColors::ControlDark;
		}
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
