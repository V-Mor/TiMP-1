#pragma once
#include "Header.h"
namespace Конвертер{

	using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
/// <summary>
/// Summary for MyForm
/// </summary>
using namespace std;



// Main object

Velich *mainObj;


public ref class MyForm : public System::Windows::Forms::Form
{
public:
	MyForm(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::MenuStrip^  menuStrip1;
protected:
private: System::Windows::Forms::ToolStripMenuItem^  выберитеВеличинуToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  линейныеРазмерыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  метрыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  футыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  дюймыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  вёрстыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  астрономическиеЕдиницыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  световыеГодаToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  энергияToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  джоулиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  электроновольтыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  киловаттчасыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  калорииToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  массаToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  килограммыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  фунтыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  пудыToolStripMenuItem;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::ToolStripMenuItem^  милиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  аршиныToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  локтиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  скоростьToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  метрыВСекундуToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  километрыВЧасToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  милиВЧасToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  махиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  узлыToolStripMenuItem;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Button^  button2;






protected:

private:
	/// <summary>
	/// Required designer variable.
	/// </summary>
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->выберитеВеличинуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->линейныеРазмерыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->метрыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->футыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->дюймыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->вёрстыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->астрономическиеЕдиницыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->световыеГодаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->милиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->аршиныToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->локтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->энергияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->джоулиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->электроновольтыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->киловаттчасыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->калорииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->массаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->килограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->фунтыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->пудыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->скоростьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->метрыВСекундуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->километрыВЧасToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->милиВЧасToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->махиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->узлыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выберитеВеличинуToolStripMenuItem });
		this->menuStrip1->Location = System::Drawing::Point(202, 41);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(137, 24);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// выберитеВеличинуToolStripMenuItem
		// 
		this->выберитеВеличинуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			this->линейныеРазмерыToolStripMenuItem,
				this->энергияToolStripMenuItem, this->массаToolStripMenuItem, this->скоростьToolStripMenuItem
		});
		this->выберитеВеличинуToolStripMenuItem->Name = L"выберитеВеличинуToolStripMenuItem";
		this->выберитеВеличинуToolStripMenuItem->Size = System::Drawing::Size(129, 20);
		this->выберитеВеличинуToolStripMenuItem->Text = L"Выберите величину";
		// 
		// линейныеРазмерыToolStripMenuItem
		// 
		this->линейныеРазмерыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
			this->метрыToolStripMenuItem,
				this->футыToolStripMenuItem, this->дюймыToolStripMenuItem, this->вёрстыToolStripMenuItem, this->астрономическиеЕдиницыToolStripMenuItem,
				this->световыеГодаToolStripMenuItem, this->милиToolStripMenuItem, this->аршиныToolStripMenuItem, this->локтиToolStripMenuItem
		});
		this->линейныеРазмерыToolStripMenuItem->Name = L"линейныеРазмерыToolStripMenuItem";
		this->линейныеРазмерыToolStripMenuItem->Size = System::Drawing::Size(183, 22);
		this->линейныеРазмерыToolStripMenuItem->Text = L"Линейные размеры";
		// 
		// метрыToolStripMenuItem
		// 
		this->метрыToolStripMenuItem->AccessibleName = L"dimension";
		this->метрыToolStripMenuItem->Name = L"метрыToolStripMenuItem";
		this->метрыToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->метрыToolStripMenuItem->Text = L"Метры";
		this->метрыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// футыToolStripMenuItem
		// 
		this->футыToolStripMenuItem->AccessibleName = L"dimension";
		this->футыToolStripMenuItem->Name = L"футыToolStripMenuItem";
		this->футыToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->футыToolStripMenuItem->Text = L"Футы";
		this->футыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// дюймыToolStripMenuItem
		// 
		this->дюймыToolStripMenuItem->AccessibleName = L"dimension";
		this->дюймыToolStripMenuItem->Name = L"дюймыToolStripMenuItem";
		this->дюймыToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->дюймыToolStripMenuItem->Text = L"Дюймы";
		this->дюймыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// вёрстыToolStripMenuItem
		// 
		this->вёрстыToolStripMenuItem->AccessibleName = L"dimension";
		this->вёрстыToolStripMenuItem->Name = L"вёрстыToolStripMenuItem";
		this->вёрстыToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->вёрстыToolStripMenuItem->Text = L"Вёрсты";
		this->вёрстыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// астрономическиеЕдиницыToolStripMenuItem
		// 
		this->астрономическиеЕдиницыToolStripMenuItem->AccessibleName = L"dimension";
		this->астрономическиеЕдиницыToolStripMenuItem->Name = L"астрономическиеЕдиницыToolStripMenuItem";
		this->астрономическиеЕдиницыToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->астрономическиеЕдиницыToolStripMenuItem->Text = L"Астрономические единицы";
		this->астрономическиеЕдиницыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// световыеГодаToolStripMenuItem
		// 
		this->световыеГодаToolStripMenuItem->AccessibleName = L"dimension";
		this->световыеГодаToolStripMenuItem->Name = L"световыеГодаToolStripMenuItem";
		this->световыеГодаToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->световыеГодаToolStripMenuItem->Text = L"Световые года";
		this->световыеГодаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// милиToolStripMenuItem
		// 
		this->милиToolStripMenuItem->AccessibleName = L"dimension";
		this->милиToolStripMenuItem->Name = L"милиToolStripMenuItem";
		this->милиToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->милиToolStripMenuItem->Text = L"Мили";
		this->милиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// аршиныToolStripMenuItem
		// 
		this->аршиныToolStripMenuItem->AccessibleName = L"dimension";
		this->аршиныToolStripMenuItem->Name = L"аршиныToolStripMenuItem";
		this->аршиныToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->аршиныToolStripMenuItem->Text = L"Аршины";
		this->аршиныToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// локтиToolStripMenuItem
		// 
		this->локтиToolStripMenuItem->AccessibleName = L"dimension";
		this->локтиToolStripMenuItem->Name = L"локтиToolStripMenuItem";
		this->локтиToolStripMenuItem->Size = System::Drawing::Size(227, 22);
		this->локтиToolStripMenuItem->Text = L"Локти";
		this->локтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// энергияToolStripMenuItem
		// 
		this->энергияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			this->джоулиToolStripMenuItem,
				this->электроновольтыToolStripMenuItem, this->киловаттчасыToolStripMenuItem, this->калорииToolStripMenuItem
		});
		this->энергияToolStripMenuItem->Name = L"энергияToolStripMenuItem";
		this->энергияToolStripMenuItem->Size = System::Drawing::Size(183, 22);
		this->энергияToolStripMenuItem->Text = L"Энергия";
		// 
		// джоулиToolStripMenuItem
		// 
		this->джоулиToolStripMenuItem->AccessibleName = L"energy";
		this->джоулиToolStripMenuItem->Name = L"джоулиToolStripMenuItem";
		this->джоулиToolStripMenuItem->Size = System::Drawing::Size(173, 22);
		this->джоулиToolStripMenuItem->Text = L"Джоули";
		this->джоулиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// электроновольтыToolStripMenuItem
		// 
		this->электроновольтыToolStripMenuItem->AccessibleName = L"energy";
		this->электроновольтыToolStripMenuItem->Name = L"электроновольтыToolStripMenuItem";
		this->электроновольтыToolStripMenuItem->Size = System::Drawing::Size(173, 22);
		this->электроновольтыToolStripMenuItem->Text = L"Электроновольты";
		this->электроновольтыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// киловаттчасыToolStripMenuItem
		// 
		this->киловаттчасыToolStripMenuItem->AccessibleName = L"energy";
		this->киловаттчасыToolStripMenuItem->Name = L"киловаттчасыToolStripMenuItem";
		this->киловаттчасыToolStripMenuItem->Size = System::Drawing::Size(173, 22);
		this->киловаттчасыToolStripMenuItem->Text = L"Киловатт-часы";
		this->киловаттчасыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// калорииToolStripMenuItem
		// 
		this->калорииToolStripMenuItem->AccessibleName = L"energy";
		this->калорииToolStripMenuItem->Name = L"калорииToolStripMenuItem";
		this->калорииToolStripMenuItem->Size = System::Drawing::Size(173, 22);
		this->калорииToolStripMenuItem->Text = L"Калории";
		this->калорииToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// массаToolStripMenuItem
		// 
		this->массаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->килограммыToolStripMenuItem,
				this->фунтыToolStripMenuItem, this->пудыToolStripMenuItem
		});
		this->массаToolStripMenuItem->Name = L"массаToolStripMenuItem";
		this->массаToolStripMenuItem->Size = System::Drawing::Size(183, 22);
		this->массаToolStripMenuItem->Text = L"Масса";
		// 
		// килограммыToolStripMenuItem
		// 
		this->килограммыToolStripMenuItem->AccessibleName = L"mass";
		this->килограммыToolStripMenuItem->Name = L"килограммыToolStripMenuItem";
		this->килограммыToolStripMenuItem->Size = System::Drawing::Size(147, 22);
		this->килограммыToolStripMenuItem->Tag = L"";
		this->килограммыToolStripMenuItem->Text = L"Килограммы";
		this->килограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// фунтыToolStripMenuItem
		// 
		this->фунтыToolStripMenuItem->AccessibleName = L"mass";
		this->фунтыToolStripMenuItem->Name = L"фунтыToolStripMenuItem";
		this->фунтыToolStripMenuItem->Size = System::Drawing::Size(147, 22);
		this->фунтыToolStripMenuItem->Tag = L"";
		this->фунтыToolStripMenuItem->Text = L"Фунты";
		this->фунтыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// пудыToolStripMenuItem
		// 
		this->пудыToolStripMenuItem->AccessibleName = L"mass";
		this->пудыToolStripMenuItem->Name = L"пудыToolStripMenuItem";
		this->пудыToolStripMenuItem->Size = System::Drawing::Size(147, 22);
		this->пудыToolStripMenuItem->Tag = L"";
		this->пудыToolStripMenuItem->Text = L"Пуды";
		this->пудыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// скоростьToolStripMenuItem
		// 
		this->скоростьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
			this->метрыВСекундуToolStripMenuItem,
				this->километрыВЧасToolStripMenuItem, this->милиВЧасToolStripMenuItem, this->махиToolStripMenuItem, this->узлыToolStripMenuItem
		});
		this->скоростьToolStripMenuItem->Name = L"скоростьToolStripMenuItem";
		this->скоростьToolStripMenuItem->Size = System::Drawing::Size(183, 22);
		this->скоростьToolStripMenuItem->Text = L"Скорость";
		// 
		// метрыВСекундуToolStripMenuItem
		// 
		this->метрыВСекундуToolStripMenuItem->AccessibleName = L"speed";
		this->метрыВСекундуToolStripMenuItem->Name = L"метрыВСекундуToolStripMenuItem";
		this->метрыВСекундуToolStripMenuItem->Size = System::Drawing::Size(169, 22);
		this->метрыВСекундуToolStripMenuItem->Text = L"Метры в секунду";
		this->метрыВСекундуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// километрыВЧасToolStripMenuItem
		// 
		this->километрыВЧасToolStripMenuItem->AccessibleName = L"speed";
		this->километрыВЧасToolStripMenuItem->Name = L"километрыВЧасToolStripMenuItem";
		this->километрыВЧасToolStripMenuItem->Size = System::Drawing::Size(169, 22);
		this->километрыВЧасToolStripMenuItem->Text = L"Километры в час";
		this->километрыВЧасToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// милиВЧасToolStripMenuItem
		// 
		this->милиВЧасToolStripMenuItem->AccessibleName = L"speed";
		this->милиВЧасToolStripMenuItem->Name = L"милиВЧасToolStripMenuItem";
		this->милиВЧасToolStripMenuItem->Size = System::Drawing::Size(169, 22);
		this->милиВЧасToolStripMenuItem->Text = L"Мили в час";
		this->милиВЧасToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// махиToolStripMenuItem
		// 
		this->махиToolStripMenuItem->AccessibleName = L"speed";
		this->махиToolStripMenuItem->Name = L"махиToolStripMenuItem";
		this->махиToolStripMenuItem->Size = System::Drawing::Size(169, 22);
		this->махиToolStripMenuItem->Text = L"Махи";
		this->махиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// узлыToolStripMenuItem
		// 
		this->узлыToolStripMenuItem->AccessibleName = L"speed";
		this->узлыToolStripMenuItem->Name = L"узлыToolStripMenuItem";
		this->узлыToolStripMenuItem->Size = System::Drawing::Size(169, 22);
		this->узлыToolStripMenuItem->Text = L"Узлы";
		this->узлыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::метрыToolStripMenuItem_Click);
		// 
		// comboBox1
		// 
		this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
		this->comboBox1->Location = System::Drawing::Point(202, 134);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(136, 21);
		this->comboBox1->TabIndex = 1;
		this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(186, 203);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(75, 23);
		this->button1->TabIndex = 2;
		this->button1->Text = L"Справка";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(14, 45);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(170, 20);
		this->textBox1->TabIndex = 3;
		this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
		this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(16, 134);
		this->textBox2->Name = L"textBox2";
		this->textBox2->ReadOnly = true;
		this->textBox2->Size = System::Drawing::Size(170, 20);
		this->textBox2->TabIndex = 4;
		// 
		// button2
		// 
		this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->button2->Location = System::Drawing::Point(125, 82);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(136, 34);
		this->button2->TabIndex = 5;
		this->button2->Text = L"Конвертировать";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		this->ClientSize = System::Drawing::Size(440, 262);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->menuStrip1);
		this->Name = L"MyForm";
		this->Text = L"Конвертер единиц измерения";
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
	char *typeFirstVel = new char[32], *typeSecondVel = new char[32];
private: void ubr(String^ s)
{
	if (метрыToolStripMenuItem->Text != s)
		метрыToolStripMenuItem->Checked = false;
	if (футыToolStripMenuItem->Text != s)
		футыToolStripMenuItem->Checked = false;
	if (дюймыToolStripMenuItem->Text != s)
		дюймыToolStripMenuItem->Checked = false;
	if (вёрстыToolStripMenuItem->Text != s)
		вёрстыToolStripMenuItem->Checked = false;
	if (астрономическиеЕдиницыToolStripMenuItem->Text != s)
		астрономическиеЕдиницыToolStripMenuItem->Checked = false;
	if (световыеГодаToolStripMenuItem->Text != s)
		световыеГодаToolStripMenuItem->Checked = false;
	if (килограммыToolStripMenuItem->Text != s)
		килограммыToolStripMenuItem->Checked = false;
	if (фунтыToolStripMenuItem->Text != s)
		фунтыToolStripMenuItem->Checked = false;
	if (пудыToolStripMenuItem->Text != s)
		пудыToolStripMenuItem->Checked = false;
	if (джоулиToolStripMenuItem->Text != s)
		джоулиToolStripMenuItem->Checked = false;
	if (электроновольтыToolStripMenuItem->Text != s)
		электроновольтыToolStripMenuItem->Checked = false;
	if (киловаттчасыToolStripMenuItem->Text != s)
		киловаттчасыToolStripMenuItem->Checked = false;
	if (калорииToolStripMenuItem->Text != s)
		калорииToolStripMenuItem->Checked = false;
	if (милиToolStripMenuItem->Text != s)
		милиToolStripMenuItem->Checked = false;
	if (аршиныToolStripMenuItem->Text != s)
		аршиныToolStripMenuItem->Checked = false;
	if (локтиToolStripMenuItem->Text != s)
		локтиToolStripMenuItem->Checked = false;
	if (метрыВСекундуToolStripMenuItem->Text != s)
		метрыВСекундуToolStripMenuItem->Checked = false;
	if (километрыВЧасToolStripMenuItem->Text != s)
		километрыВЧасToolStripMenuItem->Checked = false;
	if (милиВЧасToolStripMenuItem->Text != s)
		милиВЧасToolStripMenuItem->Checked = false;
	if (махиToolStripMenuItem->Text != s)
		махиToolStripMenuItem->Checked = false;
	if (узлыToolStripMenuItem->Text != s)
		узлыToolStripMenuItem->Checked = false;

}
private: System::Void метрыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	//if (!(((ToolStripMenuItem^)sender)->Checked))
	//{
	ubr(((ToolStripMenuItem^)sender)->Text);
	((ToolStripMenuItem^)sender)->Checked = true;
	выберитеВеличинуToolStripMenuItem->Text = ((ToolStripMenuItem^)sender)->Text;
	//}
	//else
	//{
	//	((ToolStripMenuItem^)sender)->Checked = false;
	//}
	//if (((ToolStripMenuItem^)sender)->Checked)
	//{
	comboBox1->Items->Clear();
	comboBox1->Items->Add("Выберите величину");
	comboBox1->SelectedIndex = 0;
	Zapoln(((ToolStripMenuItem^)sender)->AccessibleName, ((ToolStripMenuItem^)sender)->Text);
	//}
	makeObj(((ToolStripMenuItem^)sender)->Text);

}

private: void Zapoln(String^ tag, String^ name)
{
	if (tag == "mass")
	{
		if (name != "Килограммы")
			comboBox1->Items->Add("Килограммы");
		if (name != "Фунты")
			comboBox1->Items->Add("Фунты");
		if (name != "Пуды")
			comboBox1->Items->Add("Пуды");
	}
	if (tag == "dimension")
	{
		if (name != "Метры")
			comboBox1->Items->Add("Метры");
		if (name != "Футы")
			comboBox1->Items->Add("Футы");
		if (name != "Дюймы")
			comboBox1->Items->Add("Дюймы");
		if (name != "Вёрсты")
			comboBox1->Items->Add("Вёрсты");
		if (name != "Астрономические единицы")
			comboBox1->Items->Add("Астрономические единицы");
		if (name != "Световые года")
			comboBox1->Items->Add("Световые года");
		if (name != "Локти")
			comboBox1->Items->Add("Локти");
		if (name != "Аршины")
			comboBox1->Items->Add("Аршины");
		if (name != "Мили")
			comboBox1->Items->Add("Мили");
	}
	if (tag == "energy")
	{
		if (name != "Джоули")
			comboBox1->Items->Add("Джоули");
		if (name != "Электроновольты")
			comboBox1->Items->Add("Электроновольты");
		if (name != "Киловатт-часы")
			comboBox1->Items->Add("Киловатт-часы");
		if (name != "Калории")
			comboBox1->Items->Add("Калории");
	}
	if (tag == "speed")
	{
		if (name != "Метры в секунду")
			comboBox1->Items->Add("Метры в секунду");
		if (name != "Километры в час")
			comboBox1->Items->Add("Километры в час");
		if (name != "Мили в час")
			comboBox1->Items->Add("Мили в час");
		if (name != "Махи")
			comboBox1->Items->Add("Махи");
		if (name != "Узлы")
			comboBox1->Items->Add("Узлы");
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (comboBox1->SelectedItem->ToString() != "Выберите величину")
	{
		for (int i = 0; i < (comboBox1->Items->Count); i++)
			if (comboBox1->Items[i] == "Выберите величину")
			{
				comboBox1->Items->RemoveAt(i);
				i++;
			}
		makeSecondObj(comboBox1->SelectedItem->ToString());
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	ofstream fout("file.txt");
	fout << "Правила пользования программой:\n\
1. Нажмите на верхнюю надпись \"Выберите величину\" и выберите велиину, ИЗ которой вам необходимо произвести конвертацию\n\
2. Перед тем как вводить необходимое значение, обратите внимание на следующие правила ввода:\n\
   – Допускается ввод целых и дробных чисел только в десятичной системе счисления (иначе результаты будут некорректны)\n\
   – Единственным допустимым разделителем между целой и дробной частью числа является ЗАПЯТАЯ\n\
   – Допускается ввод чисел в экспоненциальном виде с использованием символа \"e\", после которого пишется порядок числа\n\
   – Допускается ввод знака \"-\" перед числом, а также знаков \"+\" и \"-\" для обозначения знака порядка числа (после символа \"e\")\n\
   – Ввод всех прочих символов запрещён!\n\
3. Введите численное значение Вашей величины, подлежащей конвертации, в окошко слева от кнопки выбора, описанной в первом пункте\n\
4. Выберите итоговую величину, В которую будет производиться конвертация, кликнув по окошку выбора с надписью \"Выберите величину\" в нижней части окна\n\
5. Нажмите кнопку \"Конвертировать\". В строке, находящейся слева от окошка, описанного в предыдущем пункте, Вы увидете необходимый результат конвертации\n\
";
	fout.close();
	system("notepad file.txt");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Защита от дурака
	if (textBox1->Text == "")
	{
		MessageBox::Show("Введите числовое значение величины для перевода", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (выберитеВеличинуToolStripMenuItem->Checked)
	{
		MessageBox::Show("Выберите исходную величину для перевода", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if ((comboBox1->Text == "Выберите величину") || (comboBox1->Text == ""))
	{
		MessageBox::Show("Выберите конечную величину для перевода", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	double x;
	bool Success = double::TryParse(textBox1->Text, x);
	if (!x)
	{
		MessageBox::Show("Некорректный ввод!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	ifstream fin("file1.txt");
	if (!fin)
	{
		MessageBox::Show("Не найден файл с коэффициентами!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Velich vel = Velich(x, typeFirstVel);
	mainObj = &vel;
	IKonverter &konvVel = Konverter(*mainObj);
	long double result = konvVel.Perevod(typeSecondVel);
	if (result < 1.7e-308)
	{
		MessageBox::Show("Результат слишком мал для отображения!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	textBox2->Text = result.ToString();
}
private: void makeObj(String^ s)
{
	if (s == "Метры")
		typeFirstVel = "meter";
	if (s == "Футы")
		typeFirstVel = "foot";
	if (s == "Дюймы")
		typeFirstVel = "inch";
	if (s == "Вёрсты")
		typeFirstVel = "verst";
	if (s == "Астрономические единицы")
		typeFirstVel = "astred";
	if (s == "Аршины")
		typeFirstVel = "arshin";
	if (s == "Световые года")
		typeFirstVel = "lyear";
	if (s == "Мили")
		typeFirstVel = "mile";
	if (s == "Локти")
		typeFirstVel = "lokt";
	if (s == "Электроновольты")
		typeFirstVel = "elvolt";
	if (s == "Джоули")
		typeFirstVel = "joule";
	if (s == "Киловатт-часы")
		typeFirstVel = "kwch";
	if (s == "Калории")
		typeFirstVel = "calorie";
	if (s == "Килограммы")
		typeFirstVel = "kilo";
	if (s == "Фунты")
		typeFirstVel = "pound";
	if (s == "Пуды")
		typeFirstVel = "pud";
	if (s == "Метры в секунду")
		typeFirstVel = "metersec";
	if (s == "Километры в час")
		typeFirstVel = "kmhour";
	if (s == "Мили в час")
		typeFirstVel = "milehour";
	if (s == "Махи")
		typeFirstVel = "mah";
	if (s == "Узлы")
		typeFirstVel = "knot";
}
private: void makeSecondObj(String^ s)
{
	if (s == "Метры")
		typeSecondVel = "meter";
	if (s == "Футы")
		typeSecondVel = "foot";
	if (s == "Дюймы")
		typeSecondVel = "inch";
	if (s == "Вёрсты")
		typeSecondVel = "verst";
	if (s == "Астрономические единицы")
		typeSecondVel = "astred";
	if (s == "Аршины")
		typeSecondVel = "arshin";
	if (s == "Световые года")
		typeSecondVel = "lyear";
	if (s == "Мили")
		typeSecondVel = "mile";
	if (s == "Локти")
		typeSecondVel = "lokt";
	if (s == "Электроновольты")
		typeSecondVel = "elvolt";
	if (s == "Джоули")
		typeSecondVel = "joule";
	if (s == "Киловатт-часы")
		typeSecondVel = "kwch";
	if (s == "Калории")
		typeSecondVel = "calorie";
	if (s == "Килограммы")
		typeSecondVel = "kilo";
	if (s == "Фунты")
		typeSecondVel = "pound";
	if (s == "Пуды")
		typeSecondVel = "pud";
	if (s == "Метры в секунду")
		typeSecondVel = "metersec";
	if (s == "Километры в час")
		typeSecondVel = "kmhour";
	if (s == "Мили в час")
		typeSecondVel = "milehour";
	if (s == "Махи")
		typeSecondVel = "mah";
	if (s == "Узлы")
		typeSecondVel = "knot";
}
		 bool Backspace = false;
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
{
	if (e->KeyCode == Keys::Back)
		Backspace = true;
}

private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (Backspace) || (e->KeyChar == '-') || (e->KeyChar == '+') || (e->KeyChar == 'e')))
	{
		e->KeyChar = Char(0);
		MessageBox::Show("Некорректный ввод!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	};
	Backspace = false;
}
};
}
