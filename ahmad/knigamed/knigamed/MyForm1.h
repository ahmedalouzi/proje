#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1 için özet
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(624, 203);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 20);
			this->textBox3->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(952, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 13);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Dosya mevcut olamaz";
			this->label4->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::Red;
			this->panel1->Location = System::Drawing::Point(517, 309);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 103);
			this->panel1->TabIndex = 37;
			this->panel1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Baþarýyla Silindi";
			this->label3->Visible = false;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(76, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ýptal etmek";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(170, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Onaylamak";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(76, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L">> Araç Verilerini Sil";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(8, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Otobüs Kayýt No::";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(143, 164);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(172, 13);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Error! File Couldn\'t be loaded";
			this->label19->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(135, 152);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(302, 265);
			this->textBox1->TabIndex = 36;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(343, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Aracý Sil";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(941, 514);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 25);
			this->button21->TabIndex = 34;
			this->button21->Text = L"Geri";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(884, 204);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 24);
			this->button20->TabIndex = 33;
			this->button20->Text = L"Ýptal etmek";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(965, 205);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 32;
			this->button19->Text = L"Atamak";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(623, 149);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(164, 20);
			this->textBox14->TabIndex = 31;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(847, 175);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(193, 20);
			this->textBox13->TabIndex = 30;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(809, 179);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(18, 13);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Ýle";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(590, 178);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(42, 13);
			this->label24->TabIndex = 28;
			this->label24->Text = L"Ýtibaren";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(623, 175);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(164, 20);
			this->textBox12->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(514, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Kalkýþ Zamaný";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(514, 178);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(64, 13);
			this->label22->TabIndex = 25;
			this->label22->Text = L"Rotayý Girin:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(514, 152);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(87, 13);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Otobüs Kayýt No.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(131, 122);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(180, 21);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Kayýtlý Otobüsler";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(65, 34);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(148, 15);
			this->label17->TabIndex = 21;
			this->label17->Text = L"> Yönetici >> Rota Ata";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1104, 572);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
