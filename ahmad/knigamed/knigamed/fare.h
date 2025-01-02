#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// fare için özet
	/// </summary>
	public ref class fare : public System::Windows::Forms::Form
	{
	public:
		fare(void)
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
		~fare()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label14;
	protected:
	public: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	public:
	public: System::Windows::Forms::TextBox^ textBox7;
	private:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ textBox4;
	private:
	public: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;
	public:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fare::typeid));
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(813, 290);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(76, 13);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Dosya eksik";
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(812, 273);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 13);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Geçersiz Giriþ";
			this->label13->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::Red;
			this->textBox8->Location = System::Drawing::Point(813, 448);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(170, 20);
			this->textBox8->TabIndex = 40;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Red;
			this->textBox7->Location = System::Drawing::Point(813, 249);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 39;
			this->textBox7->Text = L"$";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(970, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 24);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 38;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1001, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(26, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 37;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Lime;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(904, 472);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 26);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Onaylamak";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(813, 421);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(170, 20);
			this->textBox6->TabIndex = 35;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(813, 392);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(170, 20);
			this->textBox5->TabIndex = 34;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Lime;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(902, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 26);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Onaylamak";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(813, 222);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 20);
			this->textBox4->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(813, 195);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 20);
			this->textBox3->TabIndex = 31;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(719, 449);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 16);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Ýndirim";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(719, 423);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 16);
			this->label8->TabIndex = 29;
			this->label8->Text = L"CNIC";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(719, 393);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 16);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Adý";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(719, 250);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 16);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Ücret Ata";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(719, 222);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Varýþ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(719, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Kalkýþ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(398, 162);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(235, 354);
			this->textBox2->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(102, 162);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(246, 354);
			this->textBox1->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(394, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 22);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Ýndirimli Yolcular";
			this->label3->Click += gcnew System::EventHandler(this, &fare::label3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(812, 369);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(92, 18);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Ýndirim için";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(810, 351);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 18);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Yolcularý Ata";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(810, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 18);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Ücret Ata";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(161, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 22);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Otobüs Ata";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(360, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 31);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Ücret ve Ýndirim";
			// 
			// fare
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1062, 610);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"fare";
			this->Text = L"fare";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
