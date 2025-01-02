#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ManagerDriver için özet
	/// </summary>
	public ref class ManagerDriver : public System::Windows::Forms::Form
	{
	public:
		ManagerDriver(void)
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
		~ManagerDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox16;
	public:
	public: System::Windows::Forms::TextBox^ textBox15;
	private:
	public: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label30;
	public:
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox13;
	public: System::Windows::Forms::Button^ backFromManager;
	private:
	private: System::Windows::Forms::Label^ label27;
	public:

	protected:


	private:



	public:




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->backFromManager = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(176, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Dosya Yükleme Baþarýsýz !!!";
			this->label1->Visible = false;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(905, 161);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Onaylamak";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(383, 109);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(200, 305);
			this->textBox16->TabIndex = 20;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(808, 135);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(172, 20);
			this->textBox15->TabIndex = 19;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(808, 107);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(172, 20);
			this->textBox14->TabIndex = 18;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(721, 140);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(74, 13);
			this->label30->TabIndex = 17;
			this->label30->Text = L"Otobüs Kayýt#";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label29->Location = System::Drawing::Point(719, 110);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(77, 13);
			this->label29->TabIndex = 16;
			this->label29->Text = L"Kullanýcý kimliði";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->Location = System::Drawing::Point(380, 88);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(110, 18);
			this->label31->TabIndex = 14;
			this->label31->Text = L"Assign Buses";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(112, 88);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(130, 18);
			this->label28->TabIndex = 15;
			this->label28->Text = L"Kayýtlý Sürücüler";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(111, 109);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(243, 305);
			this->textBox13->TabIndex = 13;
			// 
			// backFromManager
			// 
			this->backFromManager->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->backFromManager->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backFromManager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backFromManager->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->backFromManager->Location = System::Drawing::Point(933, 484);
			this->backFromManager->Name = L"backFromManager";
			this->backFromManager->Size = System::Drawing::Size(75, 24);
			this->backFromManager->TabIndex = 12;
			this->backFromManager->Text = L"Geri";
			this->backFromManager->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(26, 14);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(174, 13);
			this->label27->TabIndex = 11;
			this->label27->Text = L"> Yönetici >> Sürücü Atamasý";
			// 
			// ManagerDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1035, 523);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->backFromManager);
			this->Controls->Add(this->label27);
			this->Name = L"ManagerDriver";
			this->Text = L"ManagerDriver";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
