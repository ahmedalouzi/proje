#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ticketlssuer için özet
	/// </summary>
	public ref class ticketlssuer : public System::Windows::Forms::Form
	{
	public:
		ticketlssuer(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~ticketlssuer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	public: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	public:
	public: System::Windows::Forms::Button^ button1;
	private:

	public: System::Windows::Forms::RadioButton^ radioButton6;
	public: System::Windows::Forms::RadioButton^ radioButton5;
	public: System::Windows::Forms::TextBox^ textBox18;
	public: System::Windows::Forms::TextBox^ textBox17;
	public: System::Windows::Forms::TextBox^ textBox16;
	public: System::Windows::Forms::TextBox^ textBox15;
	public: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::TextBox^ textBox14;
	public: System::Windows::Forms::TextBox^ textBox13;
	public: System::Windows::Forms::TextBox^ textBox12;
	public: System::Windows::Forms::Button^ button19;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button10;
	public:
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ticketlssuer::typeid));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(246, 399);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(490, 144);
			this->textBox3->TabIndex = 54;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(219, 361);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(103, 20);
			this->textBox2->TabIndex = 53;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(809, 65);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(161, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(635, 287);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 51;
			this->textBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(791, 404);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 13);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Registration failed due to file missing";
			this->label1->Visible = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(815, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 30);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Ýptal";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(896, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 30);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Kayýt ol";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton6->Location = System::Drawing::Point(283, 198);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(52, 17);
			this->radioButton6->TabIndex = 46;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Kadýn";
			this->radioButton6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton5->Location = System::Drawing::Point(219, 199);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(53, 17);
			this->radioButton5->TabIndex = 45;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Erkek";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(219, 331);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(516, 20);
			this->textBox18->TabIndex = 44;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(219, 287);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(203, 20);
			this->textBox17->TabIndex = 43;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(579, 238);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(156, 20);
			this->textBox16->TabIndex = 42;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(551, 195);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(184, 20);
			this->textBox15->TabIndex = 41;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"0301", L"0302", L"0303", L"0304", L"0305", L"0306",
					L"0311", L"0312", L"0313", L"0314", L"0315", L"0316", L"0321", L"0322", L"0323", L"0324", L"0325", L"0326", L"0331", L"0332",
					L"0333", L"0334", L"0335", L"0336", L"0337", L"0341", L"0342", L"0343", L"0344", L"0345", L"0346"
			});
			this->comboBox1->Location = System::Drawing::Point(219, 238);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(58, 21);
			this->comboBox1->TabIndex = 40;
			this->comboBox1->Text = L"03 -- --";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(283, 239);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(139, 20);
			this->textBox14->TabIndex = 39;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(551, 158);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(184, 20);
			this->textBox13->TabIndex = 38;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(219, 158);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(203, 20);
			this->textBox12->TabIndex = 37;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::RoyalBlue;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(852, 253);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 36;
			this->button19->Text = L"Yükle";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(134, 399);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Kayýtlý Otobüsler";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(111, 361);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 16);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Otobüs numarasý";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label26->Location = System::Drawing::Point(135, 329);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(54, 16);
			this->label26->TabIndex = 32;
			this->label26->Text = L"Address:";
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(932, 517);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 26);
			this->button10->TabIndex = 35;
			this->button10->Text = L"Geri";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label27->Location = System::Drawing::Point(135, 285);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(68, 16);
			this->label27->TabIndex = 31;
			this->label27->Text = L"Kimlik kartý";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(459, 239);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(114, 16);
			this->label25->TabIndex = 30;
			this->label25->Text = L"Sürücü Belgesi No:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label24->Location = System::Drawing::Point(137, 237);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(70, 16);
			this->label24->TabIndex = 29;
			this->label24->Text = L"Tel.numara";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(459, 193);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(86, 16);
			this->label23->TabIndex = 28;
			this->label23->Text = L"Doðum Tarihi:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label22->Location = System::Drawing::Point(137, 195);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 16);
			this->label22->TabIndex = 27;
			this->label22->Text = L"Cinsiyet";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label21->Location = System::Drawing::Point(469, 156);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 16);
			this->label21->TabIndex = 26;
			this->label21->Text = L"Soy adý";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label20->Location = System::Drawing::Point(137, 156);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(43, 16);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Ýlk Adi:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(388, 72);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(230, 20);
			this->label19->TabIndex = 24;
			this->label19->Text = L"Bilet Düzenleyicisi için Kayýt";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(47, 35);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(201, 15);
			this->label18->TabIndex = 23;
			this->label18->Text = L"> Yönetici >> Bilet Düzenleyici";
			// 
			// ticketlssuer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->ClientSize = System::Drawing::Size(1055, 579);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Name = L"ticketlssuer";
			this->Text = L"ticketlssuer";
			this->Load += gcnew System::EventHandler(this, &ticketlssuer::ticketlssuer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ticketlssuer_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
