#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
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
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Accueil;
	private: System::Windows::Forms::TabPage^ Gestion_Employes;
	private: System::Windows::Forms::TabPage^ Gestion_Client;
	private: System::Windows::Forms::TabPage^ Gestion_stock;
	private: System::Windows::Forms::TabPage^ Gestion_Commandes;
	private: System::Windows::Forms::TabPage^ Gestion_Stat;
	protected:

	protected:

	protected:







	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Accueil = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Gestion_Employes = (gcnew System::Windows::Forms::TabPage());
			this->Gestion_Client = (gcnew System::Windows::Forms::TabPage());
			this->Gestion_stock = (gcnew System::Windows::Forms::TabPage());
			this->Gestion_Commandes = (gcnew System::Windows::Forms::TabPage());
			this->Gestion_Stat = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->Accueil->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->Accueil);
			this->tabControl1->Controls->Add(this->Gestion_Employes);
			this->tabControl1->Controls->Add(this->Gestion_Client);
			this->tabControl1->Controls->Add(this->Gestion_stock);
			this->tabControl1->Controls->Add(this->Gestion_Commandes);
			this->tabControl1->Controls->Add(this->Gestion_Stat);
			this->tabControl1->Location = System::Drawing::Point(9, 5);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1453, 667);
			this->tabControl1->TabIndex = 0;
			// 
			// Accueil
			// 
			this->Accueil->Controls->Add(this->pictureBox1);
			this->Accueil->Controls->Add(this->pictureBox5);
			this->Accueil->Controls->Add(this->pictureBox4);
			this->Accueil->Controls->Add(this->pictureBox3);
			this->Accueil->Controls->Add(this->pictureBox2);
			this->Accueil->Location = System::Drawing::Point(4, 25);
			this->Accueil->Name = L"Accueil";
			this->Accueil->Padding = System::Windows::Forms::Padding(3);
			this->Accueil->Size = System::Drawing::Size(1445, 638);
			this->Accueil->TabIndex = 0;
			this->Accueil->Text = L"Accueil";
			this->Accueil->UseVisualStyleBackColor = true;
			this->Accueil->Click += gcnew System::EventHandler(this, &App::tabPage1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(258, 320);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &App::pictureBox1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1163, 30);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(258, 320);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &App::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(877, 30);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(258, 320);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &App::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(594, 30);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(258, 320);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &App::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(311, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(258, 320);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &App::pictureBox2_Click_1);
			// 
			// Gestion_Employes
			// 
			this->Gestion_Employes->Location = System::Drawing::Point(4, 25);
			this->Gestion_Employes->Name = L"Gestion_Employes";
			this->Gestion_Employes->Padding = System::Windows::Forms::Padding(3);
			this->Gestion_Employes->Size = System::Drawing::Size(1445, 638);
			this->Gestion_Employes->TabIndex = 1;
			this->Gestion_Employes->Text = L"Gestion des employés";
			this->Gestion_Employes->UseVisualStyleBackColor = true;
			// 
			// Gestion_Client
			// 
			this->Gestion_Client->Location = System::Drawing::Point(4, 25);
			this->Gestion_Client->Name = L"Gestion_Client";
			this->Gestion_Client->Padding = System::Windows::Forms::Padding(3);
			this->Gestion_Client->Size = System::Drawing::Size(1445, 638);
			this->Gestion_Client->TabIndex = 2;
			this->Gestion_Client->Text = L"Gestion des clients";
			this->Gestion_Client->UseVisualStyleBackColor = true;
			// 
			// Gestion_stock
			// 
			this->Gestion_stock->Location = System::Drawing::Point(4, 25);
			this->Gestion_stock->Name = L"Gestion_stock";
			this->Gestion_stock->Padding = System::Windows::Forms::Padding(3);
			this->Gestion_stock->Size = System::Drawing::Size(1445, 638);
			this->Gestion_stock->TabIndex = 3;
			this->Gestion_stock->Text = L"Gestion du stock";
			this->Gestion_stock->UseVisualStyleBackColor = true;
			// 
			// Gestion_Commandes
			// 
			this->Gestion_Commandes->Location = System::Drawing::Point(4, 25);
			this->Gestion_Commandes->Name = L"Gestion_Commandes";
			this->Gestion_Commandes->Padding = System::Windows::Forms::Padding(3);
			this->Gestion_Commandes->Size = System::Drawing::Size(1445, 638);
			this->Gestion_Commandes->TabIndex = 4;
			this->Gestion_Commandes->Text = L"Gestion des commandes";
			this->Gestion_Commandes->UseVisualStyleBackColor = true;
			// 
			// Gestion_Stat
			// 
			this->Gestion_Stat->Location = System::Drawing::Point(4, 25);
			this->Gestion_Stat->Name = L"Gestion_Stat";
			this->Gestion_Stat->Padding = System::Windows::Forms::Padding(3);
			this->Gestion_Stat->Size = System::Drawing::Size(1445, 638);
			this->Gestion_Stat->TabIndex = 5;
			this->Gestion_Stat->Text = L"Gestion des statistiques";
			this->Gestion_Stat->UseVisualStyleBackColor = true;
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(1462, 675);
			this->Controls->Add(this->tabControl1);
			this->Name = L"App";
			this->Text = L"App";
			this->tabControl1->ResumeLayout(false);
			this->Accueil->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
