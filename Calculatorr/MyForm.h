#pragma once

namespace Calculatorr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn6;





	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;


	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnPoqint;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDel;




	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnMulti;
	private: System::Windows::Forms::Button^ btnDiv;

	private: System::Windows::Forms::Button^ btnEqually;


















	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnPoqint = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEqually = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(320, 45);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(12, 72);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 56);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(95, 72);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 56);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(176, 72);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 56);
			this->btn3->TabIndex = 3;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(176, 144);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 56);
			this->btn6->TabIndex = 6;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(95, 144);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 56);
			this->btn5->TabIndex = 5;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(12, 144);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 56);
			this->btn4->TabIndex = 4;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(176, 221);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 56);
			this->btn9->TabIndex = 9;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(93, 221);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 56);
			this->btn8->TabIndex = 8;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(12, 221);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 56);
			this->btn7->TabIndex = 7;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnPoqint
			// 
			this->btnPoqint->Location = System::Drawing::Point(176, 297);
			this->btnPoqint->Name = L"btnPoqint";
			this->btnPoqint->Size = System::Drawing::Size(75, 56);
			this->btnPoqint->TabIndex = 12;
			this->btnPoqint->Text = L",";
			this->btnPoqint->UseVisualStyleBackColor = true;
			this->btnPoqint->Click += gcnew System::EventHandler(this, &MyForm::btnPoqint_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(93, 297);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 56);
			this->btn0->TabIndex = 11;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnDel
			// 
			this->btnDel->Location = System::Drawing::Point(12, 297);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(75, 56);
			this->btnDel->TabIndex = 10;
			this->btnDel->Text = L"—";
			this->btnDel->UseVisualStyleBackColor = true;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyForm::btnDel_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(270, 72);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(62, 47);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnSub
			// 
			this->btnSub->Location = System::Drawing::Point(270, 125);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(62, 47);
			this->btnSub->TabIndex = 14;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnMulti
			// 
			this->btnMulti->Location = System::Drawing::Point(270, 178);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(62, 47);
			this->btnMulti->TabIndex = 15;
			this->btnMulti->Text = L"*";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(270, 231);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(62, 47);
			this->btnDiv->TabIndex = 16;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnEqually
			// 
			this->btnEqually->Location = System::Drawing::Point(270, 284);
			this->btnEqually->Name = L"btnEqually";
			this->btnEqually->Size = System::Drawing::Size(62, 47);
			this->btnEqually->TabIndex = 17;
			this->btnEqually->Text = L"=";
			this->btnEqually->UseVisualStyleBackColor = true;
			this->btnEqually->Click += gcnew System::EventHandler(this, &MyForm::btnEqually_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(344, 393);
			this->Controls->Add(this->btnEqually);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMulti);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnPoqint);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->txtDisplay);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double firstnum, secondnum, answer;
		String^ charOP;

#pragma endregion
private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {

	Button ^ numb = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = numb->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + numb->Text;
	}
}
private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {
	Button^ Aop = safe_cast<Button^>(sender);
	firstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	charOP = Aop->Text;

}
private: System::Void btnDel_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnPoqint_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(","))
	{
		txtDisplay->Text = txtDisplay->Text + ",";
	}
}
private: System::Void btnEqually_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = Double::Parse(txtDisplay->Text);

	if (charOP == "+")
	{
		answer = firstnum + secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "-")
	{
		answer = firstnum - secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "*")
	{
		answer = firstnum * secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "/")
	{
		answer = firstnum / secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
}
};
}
