#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de App_Personnel
	/// </summary>
	public ref class App_Personnel : public System::Windows::Forms::Form
	{
	public:
		App_Personnel(void)
		{
			InitializeComponent();
			this->textBox1->Enter += gcnew System::EventHandler(this, &App_Personnel::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &App_Personnel::textBox1_Leave);
			this->textBox2->Enter += gcnew System::EventHandler(this, &App_Personnel::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &App_Personnel::textBox2_Leave);
			this->textBox3->Enter += gcnew System::EventHandler(this, &App_Personnel::textBox3_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &App_Personnel::textBox3_Leave);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~App_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Main_Titre_2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:
	void SetInitialText(){	
		textBox1->Text = "Identificateur Client";
		textBox2->Text = "Pr�nom";
		textBox3->Text = "Nom";
	}

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_Personnel::typeid));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(257, 251);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(594, 647);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1087, 327);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(720, 571);
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
			this->label1->Location = System::Drawing::Point(882, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"P�le de gestion du personnel";
			// 
			// Main_Titre_2
			// 
			this->Main_Titre_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Main_Titre_2->AutoSize = true;
			this->Main_Titre_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Main_Titre_2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Titre_2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Main_Titre_2->Location = System::Drawing::Point(750, 63);
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
			this->button1->Click += gcnew System::EventHandler(this, &App_Personnel::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->Location = System::Drawing::Point(1087, 289);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Identificateur client";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &App_Personnel::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Location = System::Drawing::Point(1337, 289);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 22);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"Pr�nom";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &App_Personnel::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Location = System::Drawing::Point(1587, 289);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 22);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"Nom";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &App_Personnel::textBox3_TextChanged);
			// 
			// App_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1924, 957);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main_Titre_2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dataGridView2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"App_Personnel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_Personnel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &App_Personnel::App_Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void App_Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
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
	if (textBox2->Text == "Pr�nom") {
		textBox2->Text = "";
		textBox2->ForeColor = System::Drawing::SystemColors::ControlText;
	}
}

private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "") {
		textBox2->Text = "Pr�nom";
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
};
}
