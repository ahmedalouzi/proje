#pragma once

namespace knigamed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// passenger için özet
	/// </summary>
	public ref class passenger : public System::Windows::Forms::Form
	{
	public:
		passenger(void)
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
		~passenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox69;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox68;
	private: System::Windows::Forms::PictureBox^ pictureBox67;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::PictureBox^ pictureBox66;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(passenger::typeid));
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(2, 22);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(45, 43);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox69->TabIndex = 11;
			this->pictureBox69->TabStop = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(353, 116);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(59, 74);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox68->TabIndex = 10;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(75, 12);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(150, 61);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox67->TabIndex = 9;
			this->pictureBox67->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(412, 189);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(356, 327);
			this->textBox11->TabIndex = 8;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label64->Location = System::Drawing::Point(408, 163);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(148, 24);
			this->label64->TabIndex = 7;
			this->label64->Text = L"Mevcut Rotalar";
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(691, 32);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(335, 125);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 6;
			this->pictureBox66->TabStop = false;
			// 
			// passenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(1026, 539);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->pictureBox66);
			this->Name = L"passenger";
			this->Text = L"passenger";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
