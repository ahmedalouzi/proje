#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// driver için özet
	/// </summary>
	public ref class driver : public System::Windows::Forms::Form
	{
	public:
		driver(void)
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
		~driver()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label27;
	protected:
	private: System::Windows::Forms::Button^ button7;
	public:
	private: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Label^ label26;
	private:
	private: System::Windows::Forms::Label^ label25;
	public:
	public: System::Windows::Forms::Label^ label24;
	private:
	public: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	public:
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label20;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(driver::typeid));
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(397, 354);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(126, 15);
			this->label27->TabIndex = 21;
			this->label27->Text = L"Dosya eksik hatasý";
			this->label27->Visible = false;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(947, 26);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Oturumu Kapat";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(947, 496);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Geri";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label26->Location = System::Drawing::Point(535, 311);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(76, 15);
			this->label26->TabIndex = 18;
			this->label26->Text = L"Kayýt Deðil";
			this->label26->Click += gcnew System::EventHandler(this, &driver::label26_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(394, 311);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(82, 15);
			this->label25->TabIndex = 17;
			this->label25->Text = L"Toplam Yolcu";
			this->label25->Click += gcnew System::EventHandler(this, &driver::label25_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label24->Location = System::Drawing::Point(535, 275);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(85, 15);
			this->label24->TabIndex = 16;
			this->label24->Text = L"Atama Deðil";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label23->Location = System::Drawing::Point(535, 237);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(85, 15);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Atama Deðil";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(394, 275);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(69, 15);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Otobüs Tipi";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(394, 237);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 15);
			this->label21->TabIndex = 14;
			this->label21->Text = L"Otobüs Atamasý";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(449, 26);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(141, 141);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Highlight;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(386, 181);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(302, 24);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Sürücü Modülüne Hoþ Geldiniz";
			// 
			// driver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(1045, 525);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label20);
			this->Name = L"driver";
			this->Text = L"driver";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
