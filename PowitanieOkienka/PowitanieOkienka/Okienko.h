#pragma once

namespace PowitanieOkienka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Okienko
	/// </summary>
	public ref class Okienko : public System::Windows::Forms::Form
	{
	public:
		Okienko(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okienko()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ myLabel;
	private: System::Windows::Forms::PictureBox^ myPictureBox;
	private: System::Windows::Forms::TextBox^ myTextBox;

	private: System::Windows::Forms::Button^ myButton;
	protected:

	protected:










	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Okienko::typeid));
			this->myLabel = (gcnew System::Windows::Forms::Label());
			this->myPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->myTextBox = (gcnew System::Windows::Forms::TextBox());
			this->myButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// myLabel
			// 
			this->myLabel->AutoSize = true;
			this->myLabel->BackColor = System::Drawing::Color::GhostWhite;
			this->myLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->myLabel->Location = System::Drawing::Point(91, 177);
			this->myLabel->Name = L"myLabel";
			this->myLabel->Size = System::Drawing::Size(159, 25);
			this->myLabel->TabIndex = 0;
			this->myLabel->Text = L"Just write sth!";
			this->myLabel->Click += gcnew System::EventHandler(this, &Okienko::etykieta_Click_1);
			// 
			// myPictureBox
			// 
			this->myPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myPictureBox.Image")));
			this->myPictureBox->Location = System::Drawing::Point(108, 29);
			this->myPictureBox->Name = L"myPictureBox";
			this->myPictureBox->Size = System::Drawing::Size(125, 124);
			this->myPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->myPictureBox->TabIndex = 1;
			this->myPictureBox->TabStop = false;
			this->myPictureBox->Click += gcnew System::EventHandler(this, &Okienko::pictureBox1_Click);
			// 
			// myTextBox
			// 
			this->myTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->myTextBox->Location = System::Drawing::Point(108, 233);
			this->myTextBox->Name = L"myTextBox";
			this->myTextBox->Size = System::Drawing::Size(125, 22);
			this->myTextBox->TabIndex = 2;
			this->myTextBox->TextChanged += gcnew System::EventHandler(this, &Okienko::myTextBox_TextChanged);
			// 
			// myButton
			// 
			this->myButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->myButton->Location = System::Drawing::Point(108, 273);
			this->myButton->Name = L"myButton";
			this->myButton->Size = System::Drawing::Size(125, 35);
			this->myButton->TabIndex = 3;
			this->myButton->Text = L"Submit";
			this->myButton->UseVisualStyleBackColor = true;
			this->myButton->Click += gcnew System::EventHandler(this, &Okienko::myButton_Click);
			// 
			// Okienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(340, 369);
			this->Controls->Add(this->myButton);
			this->Controls->Add(this->myTextBox);
			this->Controls->Add(this->myPictureBox);
			this->Controls->Add(this->myLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Okienko";
			this->Text = L"MyWindow";
			this->Load += gcnew System::EventHandler(this, &Okienko::Okienko_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Okienko_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void etykieta_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void etykieta_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void myButton_Click(System::Object^ sender, System::EventArgs^ e) {
	myLabel->Text = "Hello "+ myTextBox->Text + " !"; //Sets label text to my text
}
private: System::Void myTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
