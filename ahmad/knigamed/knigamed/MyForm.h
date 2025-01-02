#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label18;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::SteelBlue;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(851, 17);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(158, 177);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton6->Location = System::Drawing::Point(327, 157);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(52, 17);
			this->radioButton6->TabIndex = 34;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Kadýn";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton5->Location = System::Drawing::Point(263, 158);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(53, 17);
			this->radioButton5->TabIndex = 33;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Erkek";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(263, 290);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(516, 20);
			this->textBox18->TabIndex = 32;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(263, 246);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(203, 20);
			this->textBox17->TabIndex = 31;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(623, 197);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(156, 20);
			this->textBox16->TabIndex = 30;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(595, 154);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(184, 20);
			this->textBox15->TabIndex = 29;
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"Code";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"0301", L"0302", L"0303", L"0304", L"0305", L"0306",
					L"0311", L"0312", L"0313", L"0314", L"0315", L"0316", L"0321", L"0322", L"0323", L"0324", L"0325", L"0326", L"0331", L"0332",
					L"0333", L"0334", L"0335", L"0336", L"0337", L"0341", L"0342", L"0343", L"0344", L"0345", L"0346"
			});
			this->comboBox1->Location = System::Drawing::Point(263, 197);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(58, 21);
			this->comboBox1->TabIndex = 28;
			this->comboBox1->Text = L"03-- --";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(327, 198);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(139, 20);
			this->textBox14->TabIndex = 27;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(595, 117);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(184, 20);
			this->textBox13->TabIndex = 26;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(263, 117);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(203, 20);
			this->textBox12->TabIndex = 25;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label26->Location = System::Drawing::Point(179, 288);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(54, 16);
			this->label26->TabIndex = 23;
			this->label26->Text = L"Address:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label27->Location = System::Drawing::Point(179, 244);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(80, 16);
			this->label27->TabIndex = 22;
			this->label27->Text = L"Kimlik Kartý#:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(513, 196);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(114, 16);
			this->label25->TabIndex = 21;
			this->label25->Text = L"Sürücü Belgesi No:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label24->Location = System::Drawing::Point(181, 196);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(70, 16);
			this->label24->TabIndex = 20;
			this->label24->Text = L"Tel.numara";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(513, 152);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(86, 16);
			this->label23->TabIndex = 19;
			this->label23->Text = L"Doðum Tarihi:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label22->Location = System::Drawing::Point(181, 154);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 16);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Cinsiyet";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label21->Location = System::Drawing::Point(513, 115);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(57, 16);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Soy isim:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label20->Location = System::Drawing::Point(181, 115);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(43, 16);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Ýlk Adý:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(389, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(230, 20);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Bilet Düzenleyicisi için Kayýt";
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(909, 466);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 26);
			this->button10->TabIndex = 36;
			this->button10->Text = L"Geri";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::RoyalBlue;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(896, 234);
			this->button19->Name = L"button19";
			this->button19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 37;
			this->button19->Text = L"Yüklemek";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(12, 17);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(201, 15);
			this->label18->TabIndex = 38;
			this->label18->Text = L"> Yönetici >> Bilet Düzenleyici";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1035, 521);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button10);
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
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
