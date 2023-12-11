#pragma once
#include "DataBase.h"
using namespace System;

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App_statistiques
	/// </summary>
	public ref class App_statistiques : public System::Windows::Forms::Form
	{
	public:
		App_statistiques(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~App_statistiques()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Main_Titre_2;
	private: System::Windows::Forms::Button^ button1;






	private: System::Windows::Forms::Button^ rafraichir;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ idclient;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::TextBox^ panier;

	private: System::Windows::Forms::TextBox^ montantachat;
	private: System::Windows::Forms::TextBox^ chiffreaffaire;





	private: System::Windows::Forms::GroupBox^ groupBox1;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::ComboBox^ valeurstockcommercial;
	private: System::Windows::Forms::ComboBox^ valeurstockachat;
	private: System::Windows::Forms::ComboBox^ top10moins;
	private: System::Windows::Forms::ComboBox^ top10plus;
	private: System::Windows::Forms::ComboBox^ reappr;
	private: System::Windows::Forms::ComboBox^ entrepot;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ prixht;
	private: System::Windows::Forms::TextBox^ stock;


	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ tester;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ benefice;

	private: System::Windows::Forms::TextBox^ prixstock;

	private: System::Windows::Forms::TextBox^ prixpiece;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ nom;

	private: System::Windows::Forms::GroupBox^ groupBox8;


	private: System::Windows::Forms::GroupBox^ groupBox7;

private: System::Windows::Forms::TextBox^ idarticle;
private: System::Windows::Forms::TextBox^ tva;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::TextBox^ demarque;
private: System::Windows::Forms::TextBox^ remise;
private: System::Windows::Forms::TextBox^ marge;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App_statistiques::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main_Titre_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rafraichir = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->idclient = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panier = (gcnew System::Windows::Forms::TextBox());
			this->montantachat = (gcnew System::Windows::Forms::TextBox());
			this->chiffreaffaire = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->top10moins = (gcnew System::Windows::Forms::ComboBox());
			this->top10plus = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->valeurstockachat = (gcnew System::Windows::Forms::ComboBox());
			this->valeurstockcommercial = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->entrepot = (gcnew System::Windows::Forms::ComboBox());
			this->reappr = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->idarticle = (gcnew System::Windows::Forms::TextBox());
			this->tester = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->benefice = (gcnew System::Windows::Forms::TextBox());
			this->prixstock = (gcnew System::Windows::Forms::TextBox());
			this->prixpiece = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->tva = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->prixht = (gcnew System::Windows::Forms::TextBox());
			this->stock = (gcnew System::Windows::Forms::TextBox());
			this->marge = (gcnew System::Windows::Forms::TextBox());
			this->remise = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->demarque = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(1314, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(399, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Pôle de gestion des statistiques";
			// 
			// Main_Titre_2
			// 
			this->Main_Titre_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Main_Titre_2->AutoSize = true;
			this->Main_Titre_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Main_Titre_2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main_Titre_2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Main_Titre_2->Location = System::Drawing::Point(1193, 143);
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
			this->button1->Click += gcnew System::EventHandler(this, &App_statistiques::button1_Click);
			// 
			// rafraichir
			// 
			this->rafraichir->Location = System::Drawing::Point(566, 184);
			this->rafraichir->Name = L"rafraichir";
			this->rafraichir->Size = System::Drawing::Size(97, 23);
			this->rafraichir->TabIndex = 18;
			this->rafraichir->Text = L"Rafraîchir";
			this->rafraichir->UseVisualStyleBackColor = true;
			this->rafraichir->Click += gcnew System::EventHandler(this, &App_statistiques::rafraichir_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 17);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Valeur d\'achat du stock";
			this->label2->Click += gcnew System::EventHandler(this, &App_statistiques::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Valeur commerciale du stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Panier moyen";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(238, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 17);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Montant total d\'achat pour un client";
			this->label5->Click += gcnew System::EventHandler(this, &App_statistiques::label5_Click);
			// 
			// idclient
			// 
			this->idclient->Location = System::Drawing::Point(593, 13);
			this->idclient->Name = L"idclient";
			this->idclient->Size = System::Drawing::Size(46, 22);
			this->idclient->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(497, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Indiquez l\'id :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 17);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Top 10 articles les plus vendus";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(352, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(215, 17);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Top 10 articles les moins vendus";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(299, 17);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Produits sous le seuil de réapprovisionnement";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(366, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(157, 17);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Chiffre d\'affaire du mois";
			// 
			// panier
			// 
			this->panier->Location = System::Drawing::Point(8, 36);
			this->panier->Name = L"panier";
			this->panier->Size = System::Drawing::Size(95, 22);
			this->panier->TabIndex = 35;
			// 
			// montantachat
			// 
			this->montantachat->Location = System::Drawing::Point(241, 36);
			this->montantachat->Name = L"montantachat";
			this->montantachat->Size = System::Drawing::Size(227, 22);
			this->montantachat->TabIndex = 36;
			// 
			// chiffreaffaire
			// 
			this->chiffreaffaire->Location = System::Drawing::Point(369, 35);
			this->chiffreaffaire->Name = L"chiffreaffaire";
			this->chiffreaffaire->Size = System::Drawing::Size(154, 22);
			this->chiffreaffaire->TabIndex = 37;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->top10moins);
			this->groupBox1->Controls->Add(this->top10plus);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(74, 220);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(669, 214);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Articles";
			// 
			// top10moins
			// 
			this->top10moins->FormattingEnabled = true;
			this->top10moins->Location = System::Drawing::Point(355, 48);
			this->top10moins->Name = L"top10moins";
			this->top10moins->Size = System::Drawing::Size(296, 24);
			this->top10moins->TabIndex = 38;
			// 
			// top10plus
			// 
			this->top10plus->FormattingEnabled = true;
			this->top10plus->Location = System::Drawing::Point(11, 48);
			this->top10plus->Name = L"top10plus";
			this->top10plus->Size = System::Drawing::Size(296, 24);
			this->top10plus->TabIndex = 37;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->montantachat);
			this->groupBox2->Controls->Add(this->panier);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->idclient);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(74, 134);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(669, 77);
			this->groupBox2->TabIndex = 39;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Clients";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->valeurstockachat);
			this->groupBox3->Controls->Add(this->valeurstockcommercial);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(72, 49);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(671, 76);
			this->groupBox3->TabIndex = 40;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Stocks";
			// 
			// valeurstockachat
			// 
			this->valeurstockachat->FormattingEnabled = true;
			this->valeurstockachat->Location = System::Drawing::Point(357, 38);
			this->valeurstockachat->Name = L"valeurstockachat";
			this->valeurstockachat->Size = System::Drawing::Size(308, 24);
			this->valeurstockachat->TabIndex = 36;
			// 
			// valeurstockcommercial
			// 
			this->valeurstockcommercial->FormattingEnabled = true;
			this->valeurstockcommercial->Location = System::Drawing::Point(10, 38);
			this->valeurstockcommercial->Name = L"valeurstockcommercial";
			this->valeurstockcommercial->Size = System::Drawing::Size(299, 24);
			this->valeurstockcommercial->TabIndex = 35;
			this->valeurstockcommercial->SelectedIndexChanged += gcnew System::EventHandler(this, &App_statistiques::comboBox1_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->entrepot);
			this->groupBox4->Controls->Add(this->reappr);
			this->groupBox4->Controls->Add(this->chiffreaffaire);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->rafraichir);
			this->groupBox4->Location = System::Drawing::Point(74, 440);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(669, 213);
			this->groupBox4->TabIndex = 41;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Informations";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &App_statistiques::groupBox4_Enter);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(141, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 17);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Id de l\'entrepot :";
			this->label11->Click += gcnew System::EventHandler(this, &App_statistiques::label11_Click);
			// 
			// entrepot
			// 
			this->entrepot->FormattingEnabled = true;
			this->entrepot->Location = System::Drawing::Point(257, 38);
			this->entrepot->Name = L"entrepot";
			this->entrepot->Size = System::Drawing::Size(50, 24);
			this->entrepot->TabIndex = 40;
			// 
			// reappr
			// 
			this->reappr->FormattingEnabled = true;
			this->reappr->Location = System::Drawing::Point(11, 75);
			this->reappr->Name = L"reappr";
			this->reappr->Size = System::Drawing::Size(296, 24);
			this->reappr->TabIndex = 39;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox9);
			this->groupBox5->Controls->Add(this->idarticle);
			this->groupBox5->Controls->Add(this->tester);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->benefice);
			this->groupBox5->Controls->Add(this->prixstock);
			this->groupBox5->Controls->Add(this->prixpiece);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->nom);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->prixht);
			this->groupBox5->Controls->Add(this->stock);
			this->groupBox5->Location = System::Drawing::Point(1085, 283);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(827, 364);
			this->groupBox5->TabIndex = 42;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Zone de test";
			this->groupBox5->Enter += gcnew System::EventHandler(this, &App_statistiques::groupBox5_Enter);
			// 
			// idarticle
			// 
			this->idarticle->Location = System::Drawing::Point(6, 21);
			this->idarticle->Name = L"idarticle";
			this->idarticle->Size = System::Drawing::Size(87, 22);
			this->idarticle->TabIndex = 55;
			// 
			// tester
			// 
			this->tester->Location = System::Drawing::Point(689, 249);
			this->tester->Name = L"tester";
			this->tester->Size = System::Drawing::Size(125, 31);
			this->tester->TabIndex = 54;
			this->tester->Text = L"TESTER !";
			this->tester->UseVisualStyleBackColor = true;
			this->tester->Click += gcnew System::EventHandler(this, &App_statistiques::tester_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(478, 232);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 17);
			this->label17->TabIndex = 53;
			this->label17->Text = L"Bénéfice";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(246, 232);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(88, 17);
			this->label16->TabIndex = 52;
			this->label16->Text = L"Prix du stock";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 232);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 17);
			this->label15->TabIndex = 51;
			this->label15->Text = L"Prix Pièce";
			// 
			// benefice
			// 
			this->benefice->Location = System::Drawing::Point(481, 253);
			this->benefice->Name = L"benefice";
			this->benefice->Size = System::Drawing::Size(191, 22);
			this->benefice->TabIndex = 50;
			// 
			// prixstock
			// 
			this->prixstock->Location = System::Drawing::Point(249, 253);
			this->prixstock->Name = L"prixstock";
			this->prixstock->Size = System::Drawing::Size(191, 22);
			this->prixstock->TabIndex = 49;
			// 
			// prixpiece
			// 
			this->prixpiece->Location = System::Drawing::Point(6, 253);
			this->prixpiece->Name = L"prixpiece";
			this->prixpiece->Size = System::Drawing::Size(191, 22);
			this->prixpiece->TabIndex = 48;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(246, 55);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 17);
			this->label14->TabIndex = 47;
			this->label14->Text = L"Nom du produit";
			// 
			// nom
			// 
			this->nom->Location = System::Drawing::Point(249, 75);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(191, 22);
			this->nom->TabIndex = 46;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->remise);
			this->groupBox8->Location = System::Drawing::Point(427, 103);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(191, 99);
			this->groupBox8->TabIndex = 45;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Remise Commerciale";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->marge);
			this->groupBox7->Location = System::Drawing::Point(213, 103);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(191, 99);
			this->groupBox7->TabIndex = 44;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Marge Commerciale";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->tva);
			this->groupBox6->Location = System::Drawing::Point(6, 103);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(191, 99);
			this->groupBox6->TabIndex = 43;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Application de TVA";
			// 
			// tva
			// 
			this->tva->Location = System::Drawing::Point(38, 46);
			this->tva->Name = L"tva";
			this->tva->Size = System::Drawing::Size(111, 22);
			this->tva->TabIndex = 56;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 55);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 17);
			this->label13->TabIndex = 18;
			this->label13->Text = L"En stock";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(89, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 17);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Prix ht";
			// 
			// prixht
			// 
			this->prixht->Location = System::Drawing::Point(92, 75);
			this->prixht->Name = L"prixht";
			this->prixht->Size = System::Drawing::Size(130, 22);
			this->prixht->TabIndex = 16;
			this->prixht->TextChanged += gcnew System::EventHandler(this, &App_statistiques::textBox2_TextChanged);
			// 
			// stock
			// 
			this->stock->Location = System::Drawing::Point(6, 75);
			this->stock->Name = L"stock";
			this->stock->Size = System::Drawing::Size(69, 22);
			this->stock->TabIndex = 15;
			// 
			// marge
			// 
			this->marge->Location = System::Drawing::Point(45, 46);
			this->marge->Name = L"marge";
			this->marge->Size = System::Drawing::Size(111, 22);
			this->marge->TabIndex = 57;
			// 
			// remise
			// 
			this->remise->Location = System::Drawing::Point(38, 46);
			this->remise->Name = L"remise";
			this->remise->Size = System::Drawing::Size(111, 22);
			this->remise->TabIndex = 58;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->demarque);
			this->groupBox9->Location = System::Drawing::Point(624, 103);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(191, 99);
			this->groupBox9->TabIndex = 59;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Demarque inconnue";
			// 
			// demarque
			// 
			this->demarque->Location = System::Drawing::Point(38, 46);
			this->demarque->Name = L"demarque";
			this->demarque->Size = System::Drawing::Size(111, 22);
			this->demarque->TabIndex = 58;
			// 
			// App_statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 923);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main_Titre_2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"App_statistiques";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"App_statistiques";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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

	private: System::Void textBoxPrenomSearch_Enter(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void textBoxPrenomSearch_Leave(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rafraichir_Click(System::Object^ sender, System::EventArgs^ e) {
		// Assurez-vous que vous avez une instance de votre classe DataBase (par exemple, db)
		DataBase^ db = gcnew DataBase;

		// Définissez la requête pour le panier moyen
		String^ requetePanierMoyen = "SELECT AVG(PrixCommande) AS PrixMoyenCommande "
			"FROM ("
			"    SELECT CA.ID_COMMANDES, SUM(A.ARTICLES_PRIX_HT * (1 + T.TVA_TAUX)) AS PrixCommande "
			"    FROM Commandes_Articles CA "
			"    JOIN Articles A ON CA.ID_ARTICLES = A.ID_ARTICLES "
			"    JOIN Taux_TVA T ON A.ID_TVA = T.ID_TVA "
			"    GROUP BY CA.ID_COMMANDES"
			") AS CommandesPrix";

		// Exécutez la requête en utilisant la méthode de la classe DataBase
		DataSet^ resultPanierMoyen = db->executeToDataSet(requetePanierMoyen);

		if (resultPanierMoyen != nullptr && resultPanierMoyen->Tables->Count > 0 && resultPanierMoyen->Tables[0]->Rows->Count > 0) {
			// Récupérez la valeur du résultat
			double moyennePanier;
			if (Double::TryParse(resultPanierMoyen->Tables[0]->Rows[0]->ItemArray[0]->ToString(), moyennePanier)) {
				// Formatez la valeur avec deux chiffres après la virgule
				panier->Text = moyennePanier.ToString("N2") + "€";
			}
			else {
				panier->Text = "Format de nombre invalide";
			}
		}
		else {
			// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
			panier->Text = "Aucun résultat trouvé";
		}
		// Définissez la requête pour le chiffre d'affaires du mois
		String^ requeteChiffreAffaires =
			"WITH DernierMois AS ("
			"    SELECT TOP 1 MONTH(COMMANDES_CREA) AS MoisDerniereCommande "
			"    FROM Commandes "
			"    ORDER BY COMMANDES_CREA DESC"
			")"
			"SELECT SUM(PrixCommande) AS ChiffreAffaires "
			"FROM ("
			"    SELECT CA.ID_COMMANDES, SUM(A.ARTICLES_PRIX_HT * (1 + T.TVA_TAUX)) AS PrixCommande "
			"    FROM Commandes_Articles CA "
			"    JOIN Articles A ON CA.ID_ARTICLES = A.ID_ARTICLES "
			"    JOIN Taux_TVA T ON A.ID_TVA = T.ID_TVA "
			"    JOIN COMMANDES C ON C.ID_COMMANDES = CA.ID_COMMANDES "
			"    WHERE MONTH(COMMANDES_CREA) = (SELECT MoisDerniereCommande FROM DernierMois) "
			"    GROUP BY CA.ID_COMMANDES"
			") AS CommandesPrix";

		// Exécutez la requête en utilisant la méthode de la classe DataBase
		DataSet^ resultChiffreAffaires = db->executeToDataSet(requeteChiffreAffaires);

		// Vérifiez si le résultat contient des données
		if (resultChiffreAffaires != nullptr && resultChiffreAffaires->Tables->Count > 0 && resultChiffreAffaires->Tables[0]->Rows->Count > 0) {
			// Récupérez la valeur du résultat
			double chiffreAffaires;
			if (Double::TryParse(resultChiffreAffaires->Tables[0]->Rows[0]->ItemArray[0]->ToString(), chiffreAffaires)) {
				// Formatez la valeur avec deux chiffres après la virgule
				chiffreaffaire->Text = chiffreAffaires.ToString("N2") + "€";
			}
			else {
				chiffreaffaire->Text = "Format de nombre invalide";
			}
		}
		else {
			// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
			chiffreaffaire->Text = "Aucun résultat trouvé";
		}
		String^ requeteStockCommercial =
			"SELECT A.ARTICLES_NOM AS Produit, SUM(VS.VARIATION * A.ARTICLES_PRIX_HT) AS PrixHTStock "
			"FROM Variations_de_stocks VS "
			"JOIN Articles A ON VS.ID_ARTICLES = A.ID_ARTICLES "
			"GROUP BY A.ARTICLES_NOM";

		// Exécutez la requête en utilisant la méthode de la classe DataBase
		DataSet^ resultStockCommercial = db->executeToDataSet(requeteStockCommercial);

		// Vérifiez si le résultat contient des données
		if (resultStockCommercial != nullptr && resultStockCommercial->Tables->Count > 0 && resultStockCommercial->Tables[0]->Rows->Count > 0) {
			// Nettoyez d'abord les anciens éléments du ComboBox
			valeurstockcommercial->Items->Clear();

			// Parcourez les lignes du résultat et ajoutez-les au ComboBox
			for (int i = 0; i < resultStockCommercial->Tables[0]->Rows->Count; i++) {
				String^ nomProduit = resultStockCommercial->Tables[0]->Rows[i]->ItemArray[0]->ToString()->Replace("  ", "");
				String^ valeurCommerciale = resultStockCommercial->Tables[0]->Rows[i]->ItemArray[1]->ToString();

				// Concaténez le texte avec un saut de ligne
				String^ texteAjuste = String::Format("{0} : {1}€{2}", nomProduit, valeurCommerciale, Environment::NewLine);

				// Ajoutez la chaîne ajustée au ComboBox
				valeurstockcommercial->Items->Add(texteAjuste);
			}
		}
		else {
			// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
			valeurstockcommercial->Text = "Aucun résultat trouvé";
		}
		String^ requeteStockachat =
			"SELECT A.ARTICLES_NOM AS Produit, SUM(VS.VARIATION * A.ARTICLES_PRIX_HT * (1 + TT.TVA_TAUX)) AS PrixAvecTVAStock "
			"FROM Variations_de_stocks VS "
			"JOIN Articles A ON VS.ID_ARTICLES = A.ID_ARTICLES "
			"JOIN Taux_TVA TT ON A.ID_TVA = TT.ID_TVA "
			"GROUP BY A.ARTICLES_NOM;";

		// Exécutez la requête en utilisant la méthode de la classe DataBase
		DataSet^ resultStockachat = db->executeToDataSet(requeteStockachat);

		// Vérifiez si le résultat contient des données
		if (resultStockachat != nullptr && resultStockachat->Tables->Count > 0 && resultStockachat->Tables[0]->Rows->Count > 0) {
			// Nettoyez d'abord les anciens éléments du ComboBox
			valeurstockachat->Items->Clear();

			// Parcourez les lignes du résultat et ajoutez-les au ComboBox
			for (int i = 0; i < resultStockachat->Tables[0]->Rows->Count; i++) {
				String^ nomProduit = resultStockachat->Tables[0]->Rows[i]->ItemArray[0]->ToString()->Replace("  ", "");
				String^ valeurachat = resultStockachat->Tables[0]->Rows[i]->ItemArray[1]->ToString();

				// Concaténez le texte avec un saut de ligne
				String^ texteAjuste = String::Format("{0} : {1}€{2}", nomProduit, valeurachat, Environment::NewLine);

				// Ajoutez la chaîne ajustée au ComboBox
				valeurstockachat->Items->Add(texteAjuste);
			}
		}
		else {
			// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
			valeurstockachat->Text = "Aucun résultat trouvé";
		}
		int idClient;
		if (Int32::TryParse(idclient->Text, idClient)) {
			// Construisez la requête SQL avec l'ID du client
			String^ requeteMontantAchat = String::Format(
				"SELECT SUM(A.ARTICLES_PRIX_HT * (1 + TT.TVA_TAUX)) AS PrixTotal "
				"FROM CLIENT AS C "
				"JOIN Commandes AS CMD ON C.ID_CLIENT = CMD.ID_CLIENT "
				"JOIN Commandes_Articles AS CA ON CMD.ID_COMMANDES = CA.ID_COMMANDES "
				"JOIN Articles AS A ON CA.ID_ARTICLES = A.ID_ARTICLES "
				"JOIN Taux_TVA AS TT ON A.ID_TVA = TT.ID_TVA "
				"WHERE C.ID_CLIENT = {0} "
				"GROUP BY C.ID_CLIENT;", idClient);

			// Exécutez la requête en utilisant la méthode de la classe DataBase
			DataSet^ resultMontantAchat = db->executeToDataSet(requeteMontantAchat);

			// Vérifiez si le résultat contient des données
			if (resultMontantAchat != nullptr && resultMontantAchat->Tables->Count > 0 && resultMontantAchat->Tables[0]->Rows->Count > 0) {
				// Récupérez la valeur du résultat et affichez-la dans la TextBox "montantAchatTextBox"
				String^ montantTotal = resultMontantAchat->Tables[0]->Rows[0]->ItemArray[0]->ToString();
				montantachat->Text = montantTotal + "€";
			}
			else {
				// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
				montantachat->Text = "Aucun résultat trouvé";
			}
		}
		else {
			// L'ID du client n'est pas un nombre valide, vous pouvez gérer cela en conséquence
			montantachat->Text = "ID Client invalide";
		}
		String^ requeteTopArticles =
			"SELECT TOP 10 Commandes_Articles.ID_ARTICLES, Articles.ARTICLES_NOM, SUM(Commandes_Articles.ARTICLES_COMMANDES_NB) AS TOTAL_VENTES "
			"FROM Commandes_Articles "
			"JOIN Articles ON Commandes_Articles.ID_ARTICLES = Articles.ID_ARTICLES "
			"GROUP BY Commandes_Articles.ID_ARTICLES, Articles.ARTICLES_NOM "
			"ORDER BY TOTAL_VENTES DESC";  // Notez l'ordre DESC pour les plus vendus en premier

		// Exécutez la requête en utilisant la méthode de la classe DataBase
		DataSet^ resultTopArticles = db->executeToDataSet(requeteTopArticles);

		// Vérifiez si le résultat contient des données
		if (resultTopArticles != nullptr && resultTopArticles->Tables->Count > 0 && resultTopArticles->Tables[0]->Rows->Count > 0) {
			// Nettoyez d'abord les anciens éléments de la ComboBox
			top10plus->Items->Clear();

			// Parcourez les lignes du résultat et ajoutez-les à la ComboBox
			for (int i = 0; i < resultTopArticles->Tables[0]->Rows->Count; i++) {
				String^ nomArticle = resultTopArticles->Tables[0]->Rows[i]->ItemArray[1]->ToString()->Replace("  ", "");;
				String^ totalVentes = resultTopArticles->Tables[0]->Rows[i]->ItemArray[2]->ToString()->Replace("  ", "");;

				// Concaténez le texte avec un saut de ligne
				String^ texteAjuste = String::Format("{0} : {1} ventes", nomArticle, totalVentes);

				// Ajoutez la chaîne ajustée à la ComboBox
				top10plus->Items->Add(texteAjuste);
			}
		}
		else {
			// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
			top10plus->Text = "Aucun résultat trouvé";
		}
		String^ requeteLESSArticles =
			"SELECT TOP 10 Commandes_Articles.ID_ARTICLES, Articles.ARTICLES_NOM, SUM(Commandes_Articles.ARTICLES_COMMANDES_NB) AS TOTAL_VENTES "
			"FROM Commandes_Articles "
			"JOIN Articles ON Commandes_Articles.ID_ARTICLES = Articles.ID_ARTICLES "
			"GROUP BY Commandes_Articles.ID_ARTICLES, Articles.ARTICLES_NOM "
			"ORDER BY TOTAL_VENTES ASC";  // Notez l'ordre DESC pour les plus vendus en premier

		// Exécutez la requête en utilisant la méthode de la classe DataBase
		DataSet^ resultLESSArticles = db->executeToDataSet(requeteLESSArticles);

		// Vérifiez si le résultat contient des données
		if (resultLESSArticles != nullptr && resultLESSArticles->Tables->Count > 0 && resultLESSArticles->Tables[0]->Rows->Count > 0) {
			// Nettoyez d'abord les anciens éléments de la ComboBox
			top10moins->Items->Clear();

			// Parcourez les lignes du résultat et ajoutez-les à la ComboBox
			for (int i = 0; i < resultLESSArticles->Tables[0]->Rows->Count; i++) {
				String^ nomArticle = resultLESSArticles->Tables[0]->Rows[i]->ItemArray[1]->ToString()->Replace("  ", "");;
				String^ totalVentes = resultLESSArticles->Tables[0]->Rows[i]->ItemArray[2]->ToString()->Replace("  ", "");;

				// Concaténez le texte avec un saut de ligne
				String^ texteAjuste = String::Format("{0} : {1} ventes", nomArticle, totalVentes);

				// Ajoutez la chaîne ajustée à la ComboBox
				top10moins->Items->Add(texteAjuste);
			}
		}
		else {
			// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
			top10moins->Text = "Aucun résultat trouvé";
		}
		// Assurez-vous que l'entrepôt est sélectionné dans la ComboBox
		if (entrepot->SelectedItem != nullptr) {
			// Obtenez l'ID de l'entrepôt sélectionné
			String^ idEntrepot = entrepot->SelectedItem->ToString();

			String^ requete = "SELECT A.ARTICLES_NOM AS Produit, SUM(VS.VARIATION) AS Nombre "
				"FROM Variations_de_stocks VS "
				"JOIN Articles A ON VS.ID_ARTICLES = A.ID_ARTICLES "
				"WHERE VS.ID_ENTREPOT = " + idEntrepot + " "
				"GROUP BY A.ARTICLES_NOM "
				"HAVING SUM(VS.VARIATION) < 5";

			// Exécutez la requête en utilisant la méthode de la classe DataBase
			DataSet^ result = db->executeToDataSet(requete);

			// Vérifiez si le résultat contient des données
			if (result != nullptr && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
				// Nettoyez d'abord les anciens éléments de la ComboBox
				reappr->Items->Clear();

				// Parcourez les lignes du résultat et ajoutez-les à la ComboBox
				for (int i = 0; i < result->Tables[0]->Rows->Count; i++) {
					String^ nomProduit = result->Tables[0]->Rows[i]->ItemArray[0]->ToString()->Replace("  ", "");
					String^ nombre = result->Tables[0]->Rows[i]->ItemArray[1]->ToString();

					// Ajoutez le produit et le nombre à la ComboBox
					reappr->Items->Add(nomProduit + " : " + nombre);
				}
			}
			else {
				// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
				reappr->Text = "Aucun résultat trouvé";
			}
		}
		else {
			// L'entrepôt n'est pas sélectionné, vous pouvez gérer cela en conséquence
			reappr->Text = "";
		}


			// Construisez la requête SQL pour obtenir tous les entrepôts
			String^ requeteEntrepots = "SELECT ID_ENTREPOT FROM Entrepot";

			// Exécutez la requête en utilisant la méthode de la classe DataBase
			DataSet^ resultEntrepots = db->executeToDataSet(requeteEntrepots);

			// Vérifiez si le résultat contient des données
			if (resultEntrepots != nullptr && resultEntrepots->Tables->Count > 0 && resultEntrepots->Tables[0]->Rows->Count > 0) {
				// Nettoyez d'abord les anciens éléments de la ComboBox
				entrepot->Items->Clear();

				// Parcourez les lignes du résultat et ajoutez-les à la ComboBox
				for (int i = 0; i < resultEntrepots->Tables[0]->Rows->Count; i++) {
					String^ idEntrepot = resultEntrepots->Tables[0]->Rows[i]->ItemArray[0]->ToString();

					// Ajoutez l'ID de l'entrepôt à la ComboBox
					entrepot->Items->Add(idEntrepot);
				}
			}
			else {
				// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
				entrepot->Text = "Aucun entrepôt trouvé";
			}





	}
	System::Void tester_Click(System::Object^ sender, System::EventArgs^ e) {
		// Assurez-vous que vous avez une instance de votre classe DataBase (par exemple, db)
		DataBase^ db = gcnew DataBase;

		// Récupérez l'ID de l'article à partir de la TextBox idarticle
		int idArticle;
		if (Int32::TryParse(idarticle->Text, idArticle)) {
			// Définissez la requête en remplaçant ######CHOISIR ID###### par l'ID réel
			String^ requete = "SELECT A.ARTICLES_NOM AS Produit, A.ARTICLES_PRIX_HT, SUM(VS.VARIATION) AS Nombre "
				"FROM Variations_de_stocks VS "
				"JOIN Articles A ON VS.ID_ARTICLES = A.ID_ARTICLES "
				"WHERE A.ID_ARTICLES = " + idArticle + " "
				"GROUP BY A.ARTICLES_NOM, A.ARTICLES_PRIX_HT";

			// Exécutez la requête en utilisant la méthode de la classe DataBase
			DataSet^ result = db->executeToDataSet(requete);

			// Vérifiez si le résultat contient des données
			if (result != nullptr && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
				// Récupérez les valeurs du résultat et affichez-les dans les TextBox appropriées
				nom->Text = result->Tables[0]->Rows[0]->ItemArray[0]->ToString();
				prixht->Text = result->Tables[0]->Rows[0]->ItemArray[1]->ToString();
				stock->Text = result->Tables[0]->Rows[0]->ItemArray[2]->ToString();
			}
			else {
				// Aucun résultat trouvé, vous pouvez gérer cela en conséquence
				nom->Text = "Aucun résultat trouvé";
				prixht->Text = "";
				stock->Text = "";
			}
		}
		else {
			// Gestion de l'échec de la conversion de l'ID
			nom->Text = "ID d'article non valide";
			prixht->Text = "";
			stock->Text = "";
		}
		// DEBUT DE LA ZONE DE TEST
		double tvaValue = 0, margeValue = 0, remiseValue = 0, demarqueValue = 0;
		bool conversionTVA = Double::TryParse(tva->Text, tvaValue);
		bool conversionMarge = Double::TryParse(marge->Text, margeValue);
		bool conversionRemise = Double::TryParse(remise->Text, remiseValue);
		bool conversionDemarque= Double::TryParse(demarque->Text, demarqueValue);

		if (!conversionTVA || !conversionMarge || !conversionRemise || !conversionDemarque) {
			// Gestion de l'échec de la conversion de TVA, marge ou remise
			prixpiece->Text = "";
			prixstock->Text = "";
			benefice->Text = "Invalide";
			return; // Sortez de la méthode si les conversions échouent
		}

		// Utilisez ces valeurs pour effectuer vos calculs
		double prixHT, stockValue, beneficeValue;

		// Récupérez le prix HT du résultat précédent (assurez-vous de mettre la bonne colonne ici)
		if (Double::TryParse(prixht->Text, prixHT)) {
			// Calcul du prix avec TVA, remise et marge
			double prixAvecTVA = prixHT * (1 + tvaValue/100);
			double prixAvecMarge = prixAvecTVA * (1 + margeValue/100);
			double prixAvecRemise = prixAvecMarge * (1 - remiseValue/100);
			double prixAvecDemarque = prixAvecRemise * (1 - demarqueValue / 100);

			// Affichez le prix avec TVA, remise et marge dans la TextBox "prixpiece"
			prixpiece->Text = prixAvecDemarque.ToString("N2") + "€";

			// Récupérez le stock à partir de la TextBox "stock" (assurez-vous de mettre la bonne colonne ici)
			if (Double::TryParse(stock->Text, stockValue)) {
				// Calcul du prix total avec TVA, remise et marge
				double prixTotalAvecTVA = prixAvecDemarque * stockValue;

				// Affichez le prix total avec TVA, remise et marge dans la TextBox "prixstock"
				prixstock->Text = prixTotalAvecTVA.ToString("N2") + "€";

				// Calcul du bénéfice
				beneficeValue = prixAvecDemarque - prixHT;

				// Affichez le bénéfice dans la TextBox "benefice"
				benefice->Text = beneficeValue.ToString("N2") + "€";
			}
			else {
				// Gestion de l'échec de la conversion du stock
				prixpiece->Text = "";
				prixstock->Text = "";
				benefice->Text = "Stock non valide";
			}
		}
		else {
			// Gestion de l'échec de la conversion du prix HT
			prixpiece->Text = "";
			prixstock->Text = "";
			benefice->Text = "Prix HT non valide";
		}





	}





private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
