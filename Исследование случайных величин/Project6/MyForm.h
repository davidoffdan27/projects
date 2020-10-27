#pragma once
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <string>

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Collections::Generic;
	using namespace System::Drawing::Drawing2D;
	using namespace Runtime::InteropServices;

	private value class MyFunction1
	{
	private:
		double _value;
	public:
		double getValue(double x, double a);
	};
	double MyFunction1::getValue(double x, double a) {
		return 1 - Math::Exp(-a * x);
	};
	private value class MyFunction2
	{
	private:
		double _value;
		double a;
	public:
		double getValueFun(double x, double *arr1, double  *arr2, int K, int N)
		{
			double *tmp;
			tmp = new double[K];
			double  res = 0;


			for (int k = 0; k < K - 1; k++) {
				if (x <= arr1[0])
					return 0;
				if (x > arr1[K - 1])
					return 1;
				if ((arr1[k] < x) && (x <= arr1[k + 1])) {
					for (int i = k; i >= 0; i--)
					{
						res += arr2[i];
					}
					return res / N;
				}

			}



		}
	};
	double E(double a);
	double D(double a);
	double funDensity(double x, double a);//плотность распределения
	double funDistribution(double x, double a);//функция распределения
	double getHistogram(double x, double *bord, double *arr3, double *arr4, int j, int N);
	double funDensityCsi(double x, double r);//плотность распределения кси
	double Frev(double x, double r);//1-Функция распределения кси
	double getValueFun(int i, double *arr, int N);
	double fun(double random, double a);
	void sort(double *ver, double *arr, int N);
	double Generate();
	void MarshalString(String ^ s, std::string& os);
	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ver;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  func;



	private: System::Windows::Forms::DataGridView^  dataGridView2;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;




	private: System::Windows::Forms::DataGridView^  dataGridView4;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column19;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column25;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridView^  dataGridView6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column27;
	private: System::Windows::Forms::Button^  button3;































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Ver = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->func = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Количество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 14);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Параметр";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(147, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"new_random";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Ver, this->func });
			this->dataGridView1->Location = System::Drawing::Point(228, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(243, 204);
			this->dataGridView1->TabIndex = 9;
			// 
			// Ver
			// 
			this->Ver->HeaderText = L"Вероятность";
			this->Ver->Name = L"Ver";
			// 
			// func
			// 
			this->func->HeaderText = L"Значение функции";
			this->func->Name = L"func";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column15,
					this->Column1, this->Column16, this->Column17, this->Column2, this->Column18, this->Column3, this->Column4, this->Column8
			});
			this->dataGridView2->Location = System::Drawing::Point(730, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(945, 204);
			this->dataGridView2->TabIndex = 13;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Мат ожидание(E)";
			this->Column15->Name = L"Column15";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"выборочное среднее(x`)";
			this->Column1->Name = L"Column1";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"abs(E-x`)";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Дисперсия(D)";
			this->Column17->Name = L"Column17";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"выборочная дисперсия(S^2)";
			this->Column2->Name = L"Column2";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"abs(D-S^2)";
			this->Column18->Name = L"Column18";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"размах выборки(R`)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"выборочная медиана(Me)";
			this->Column4->Name = L"Column4";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"мера расхождения D";
			this->Column8->Name = L"Column8";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(228, 222);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(759, 474);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"график функции";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 28);
			this->button2->TabIndex = 15;
			this->button2->Text = L"построить график";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Функция распределения(теоритическая)", L"Функция распределения(выборочная)",
					L"Оба графика(1 и 2)", L"Гистограмма"
			});
			this->comboBox1->Location = System::Drawing::Point(24, 231);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 22);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->Text = L"(Не выбранно)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 14);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Выбирите график";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column5,
					this->Column6
			});
			this->dataGridView3->Location = System::Drawing::Point(477, 12);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(247, 204);
			this->dataGridView3->TabIndex = 19;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"значение сл.величины";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"количество встреч";
			this->Column6->Name = L"Column6";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column9,
					this->Column10, this->Column12, this->Column11, this->Column7, this->Column13, this->Column14, this->Column19
			});
			this->dataGridView4->Location = System::Drawing::Point(993, 222);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(844, 195);
			this->dataGridView4->TabIndex = 20;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"начало отрезка";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"конец отрезка";
			this->Column10->Name = L"Column10";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"ср значение отрезка";
			this->Column12->Name = L"Column12";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"кол-во эл в отрезке";
			this->Column11->Name = L"Column11";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"отноcительная частота";
			this->Column7->Name = L"Column7";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Теоритическая плотность распределения";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"расхождение";
			this->Column14->Name = L"Column14";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"максимальное расхождение";
			this->Column19->Name = L"Column19";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(24, 146);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 21;
			this->textBox5->Visible = false;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column20,
					this->Column21, this->Column22, this->Column23, this->Column24, this->Column25
			});
			this->dataGridView5->Location = System::Drawing::Point(993, 423);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(844, 195);
			this->dataGridView5->TabIndex = 22;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"интервал (j)";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Вероятность попадания в интервал(q)";
			this->Column21->Name = L"Column21";
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"число наблюдений в интервале(n_j)";
			this->Column22->Name = L"Column22";
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"R_0";
			this->Column23->Name = L"Column23";
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"1-функция распределения КСИ";
			this->Column24->Name = L"Column24";
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Итог";
			this->Column25->Name = L"Column25";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 342);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 23;
			this->textBox3->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 316);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 14);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Введите альфу";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1689, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(268, 14);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Введите кол-во интервалов(по умолчанию 0)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1692, 31);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 26;
			this->textBox4->Text = L"0";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column26,
					this->Column27
			});
			this->dataGridView6->Location = System::Drawing::Point(1692, 59);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(244, 150);
			this->dataGridView6->TabIndex = 27;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Номер границы";
			this->Column26->Name = L"Column26";
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"значение границы";
			this->Column27->Name = L"Column27";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1811, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"задать границы";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1969, 789);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лаб Тв";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//srand(5);
		srand(time(0));
		int N = Convert::ToDouble(textBox1->Text);
		double a = Convert::ToDouble(textBox2->Text);
		double *ver;
		double *arr;
		ver = new double[N];
		arr = new double[N];
		for (int i = 0; i < N; i++)
		{
			ver[i] = Generate();
			arr[i] = fun(ver[i], a);
		}
		sort(ver, arr, N);
		for (int i = 0; i < N; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(round(ver[i] * 10000) / 10000);
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(round(arr[i]  * 10000) / 10000);
		}
		for (int i = 0; i < N; i++)
		{
			arr[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}

		double *tmp2;
		tmp2 = new double[N];
		int k = 0;
		for (int i = 0; i < N; i++)
		{
			tmp2[i] = getValueFun(i, arr, N);
			if (tmp2[i] != 0)
			{
				dataGridView3->Rows->Add();
				dataGridView3->Rows[k]->Cells[0]->Value = Convert::ToString(arr[i]);
				dataGridView3->Rows[k]->Cells[1]->Value = Convert::ToString(tmp2[i]);
				k++;
			}

		}
		textBox5->Text = Convert::ToString(k);

		double sum = 0;
		int tmp1 = 0;
		for (int i = 0; i < N; i++)
		{
			sum += arr[i];
			tmp1++;
		}

		double sel_av = sum / tmp1;    // выборочное среднее
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->Cells[1]->Value = Convert::ToString(round(sel_av * 10000) / 10000);



		sum = 0;
		for (int i = 0; i < N; i++)
		{
			sum += (arr[i] - sel_av)*(arr[i] - sel_av);
		}
		double S = sum / tmp1;   // выборочная дисперсия
		dataGridView2->Rows[0]->Cells[4]->Value = Convert::ToString(round(S * 10000) / 10000);




		double R = arr[N - 1] - arr[0];    // размах выборки
		dataGridView2->Rows[0]->Cells[6]->Value = Convert::ToString(round(R * 10000) / 10000);



		double Me;
		if (N % 2 == 0)
		{
			int k = N / 2;
			Me = (arr[k - 1] + arr[k]) / 2;
		}
		else
		{
			int k = (N - 1) / 2;
			Me = arr[k];
		}
		dataGridView2->Rows[0]->Cells[7]->Value = Convert::ToString(round(Me * 10000) / 10000);
		dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString(round(E(a) * 10000) / 10000);
		dataGridView2->Rows[0]->Cells[2]->Value = Convert::ToString(round(abs(E(a)- Convert::ToDouble(dataGridView2->Rows[0]->Cells[1]->Value)) * 10000) / 10000);
		dataGridView2->Rows[0]->Cells[3]->Value = Convert::ToString(round(D(a) * 10000) / 10000);
		dataGridView2->Rows[0]->Cells[5]->Value = Convert::ToString(round(abs(D(a)- Convert::ToDouble(dataGridView2->Rows[0]->Cells[4]->Value)) * 10000) / 10000);

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int N = Convert::ToDouble(textBox1->Text);//кол-во итераций 
		int k = Convert::ToDouble(textBox5->Text);
		double a = Convert::ToDouble(textBox2->Text);//параметр
		double *arr;
		double *arr1;
		double *arr2;
		arr = new double[N];
		arr1 = new double[k];
		arr2 = new double[k];
		for (int i = 0; i < N; i++)
		{
			arr[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		for (int i = 0; i < k; i++)
		{
			arr1[i] = Convert::ToDouble(dataGridView3->Rows[i]->Cells[0]->Value);
			arr2[i] = Convert::ToDouble(dataGridView3->Rows[i]->Cells[1]->Value);
		}
		double x1 = 0.0, x2 = arr[N - 1] + 1, dX = 0.01;
		double x;
		chart1->ChartAreas[0]->CursorX->IsUserEnabled = true;
		chart1->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true;
		chart1->ChartAreas[0]->AxisX->ScaleView->Zoomable = true;
		chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;

		chart1->ChartAreas[0]->CursorY->IsUserEnabled = true;
		chart1->ChartAreas[0]->CursorY->IsUserSelectionEnabled = true;
		chart1->ChartAreas[0]->AxisY->ScaleView->Zoomable = true;
		chart1->ChartAreas[0]->AxisY->ScrollBar->IsPositionedInside = true;

		switch (comboBox1->SelectedIndex) {
		case 0: {

			chart1->Series->Clear();
			this->chart1->Visible = false;
			this->chart1->Visible = true;
			Series^ series1 = gcnew Series(L"функция распределения(теоритическая)");
			series1->IsVisibleInLegend = true;
			series1->IsXValueIndexed = true;
			series1->Color = Color::Blue;
			series1->ChartType = SeriesChartType::Line;
			chart1->Series->Add(series1);
			MyFunction1^ func = gcnew MyFunction1();
			for (x = x1; x <= x2; x += dX) {
				series1->Points->AddXY(x, func->getValue(x, a));
			}
			break;
		}

		case 1: {

			chart1->Series->Clear();
			this->chart1->Visible = false;
			this->chart1->Visible = true;
			Series^ series1 = gcnew Series(L"функция распределения(выборочная)");
			series1->IsVisibleInLegend = true;
			series1->IsXValueIndexed = true;
			series1->Color = Color::Red;
			series1->ChartType = SeriesChartType::Line;
			chart1->Series->Add(series1);
			MyFunction2^ func = gcnew MyFunction2();

			for (x = x1; x <= x2; x += dX) {
				series1->Points->AddXY(x, func->getValueFun(x, arr1, arr2, k, N));
			}

			break;
		}
		case 2: {
			double j = 0;
			chart1->Series->Clear();
			Series^ series1 = gcnew Series(L"функция распределения(теоритическая)");
			series1->IsVisibleInLegend = true;
			series1->IsXValueIndexed = true;
			series1->Color = Color::Blue;
			series1->ChartType = SeriesChartType::Line;
			chart1->Series->Add(series1);
			MyFunction1^ func1 = gcnew MyFunction1();
			Series^ series2 = gcnew Series(L"функция распределения(выборочная)");
			series2->IsVisibleInLegend = true;
			series2->IsXValueIndexed = true;
			series2->Color = Color::Red;
			series2->ChartType = SeriesChartType::Line;
			chart1->Series->Add(series2);
			MyFunction2^ func2 = gcnew MyFunction2();
			for (x = x1; x <= x2; x += dX) {
				series1->Points->AddXY(x, func1->getValue(x, a));
				series2->Points->AddXY(x, func2->getValueFun(x, arr1, arr2, k, N));
				if ((abs(func1->getValue(x, a) - func2->getValueFun(x, arr1, arr2, k, N))) > j)
				{
					j = abs(func1->getValue(x, a) - func2->getValueFun(x, arr1, arr2, k, N));
				}
			}
			dataGridView2->Rows[0]->Cells[8]->Value = Convert::ToString(round(j * 10000) / 10000);
			return;
			break;
		}
		case 3: {
			int j,w;
			double h;
			if ((textBox4->Text) == Convert::ToString(0)) {
				j = floor(1 + 3.322*Math::Log10(N));//формула Стерджеса
				h = (arr[N - 1] - arr[0]) / j;
				w = -1;
			}
			else {
				j = Convert::ToDouble(textBox4->Text);
				w = 1;
			}
			double *bord;//границы отрезков
			double *arr3;//кол-во эл в интервале
			double *arr4;// не определен
			bord = new double[j+1];
			arr3 = new double[j];
			if (w == -1) {
				bord[0] = arr[0];
				for (int i = 1; i < j + 1; i++)
				{
					bord[i] = bord[i - 1] + h;
				}
			}
			if (w == 1)
			{
				bord[0] = Convert::ToDouble(dataGridView6->Rows[0]->Cells[1]->Value);
				for (int i = 1; i < j + 1; i++)
				{
					bord[i] = Convert::ToDouble(dataGridView6->Rows[i]->Cells[1]->Value);
				}
			}
			arr3 = new double[j];
			arr4 = new double[j];
			arr3[0] = bord[0];
			int tmp11 = 0;
			for (int i = 0; i < j; i++)
			{
				dataGridView4->Rows->Add();
				dataGridView4->Rows[i]->Cells[0]->Value = Convert::ToString(bord[i]);
				dataGridView4->Rows[i]->Cells[1]->Value = Convert::ToString(bord[i+1]);
			}
			for (int i = 0; i < j; i++)
			{
			dataGridView4->Rows[i]->Cells[2]->Value = Convert::ToString((bord[i + 1] + bord[i]) / 2);
			}
			for (int i = 0; i < j; i++)
			{
				tmp11 = 0;
				for (int q = 0; q < k; q++) {
					if ((arr1[q] >= bord[i]) && (arr1[q] < bord[i + 1]))
					{
						tmp11 += arr2[q];
					}
				}
				arr3[i] = tmp11;
				
			}
			if (w == -1) {
				arr3[j - 1]++;
			}
			for (int i = 0; i < j; i++)
			{
				arr4[i] = arr3[i] / (N*abs(bord[i + 1] - bord[i]));
			}
			for (int i = 0; i < j; i++)
			{
				dataGridView4->Rows[i]->Cells[3]->Value = Convert::ToString(arr3[i]);
				dataGridView4->Rows[i]->Cells[4]->Value = Convert::ToString(/*arr3[i] / N);//*/arr4[i]);
				dataGridView4->Rows[i]->Cells[5]->Value = Convert::ToString(funDensity((bord[i + 1] + bord[i]) / 2,a));
			}
			double max = 0;
			for (int i = 0; i < j; i++)
			{
				dataGridView4->Rows[i]->Cells[6]->Value = Convert::ToString(abs(arr4[i] - funDensity((bord[i + 1] + bord[i]) / 2, a)));

				if (abs(arr4[i] - funDensity((bord[i + 1] + bord[i]) / 2, a)) > max) {
					max = abs(arr4[i] - funDensity((bord[i + 1] + bord[i]) / 2, a));
				}
			}
			dataGridView4->Rows[0]->Cells[7]->Value = Convert::ToString(max);
			chart1->Series->Clear();
			this->chart1->Visible = false;
			this->chart1->Visible = true;
			Series^ series1 = gcnew Series(L"Гистограмма");
			series1->IsVisibleInLegend = true;
			series1->IsXValueIndexed = true;
			series1->Color = Color::ForestGreen;
			series1->ChartType = SeriesChartType::Line;
			chart1->Series->Add(series1);
			for (x = x1; x <= x2; x += dX) {
				series1->Points->AddXY(x, getHistogram(x, bord, arr3, arr4, j, N));
			}


			double *z;//границы отрезков
			z = new double[j+3];
			z[0] = -100;
			for (int i = 0; i < j + 1; i++)
			{
				z[i + 1] = bord[i];
			}
			z[j + 2] = z[j + 1] + 100;
			int r = 0;
			for (int i = 0; i < j+2; i++)
			{
				dataGridView5->Rows->Add();
				dataGridView5->Rows[i]->Cells[0]->Value = Convert::ToString(i+1);
				
				r = i + 1;
			}
			dataGridView5->Rows[0]->Cells[1]->Value = Convert::ToString(funDistribution(z[1], a));
			dataGridView5->Rows[0]->Cells[2]->Value = Convert::ToString(0);

			for (int i = 1; i < j + 1; i++)
			{
			dataGridView5->Rows[i]->Cells[1]->Value = Convert::ToString(funDistribution(z[i + 1], a) - funDistribution(z[i], a));
			dataGridView5->Rows[i]->Cells[2]->Value = Convert::ToString(arr3[i-1]);
			}
			dataGridView5->Rows[j+1]->Cells[1]->Value = Convert::ToString(1 - funDistribution(z[j+1], a));
			dataGridView5->Rows[j+1]->Cells[2]->Value = Convert::ToString(0);
			double r_0 = 0;//R_0
			for (int i = 1; i < r + 1; i++)
			{
				r_0 = r_0 + pow(Convert::ToDouble(dataGridView5->Rows[i - 1]->Cells[2]->Value) - N * Convert::ToDouble(dataGridView5->Rows[i - 1]->Cells[1]->Value), 2.0) / (N* Convert::ToDouble(dataGridView5->Rows[i - 1]->Cells[1]->Value));
			}
			dataGridView5->Rows[0]->Cells[3]->Value = Convert::ToString(r_0);
			double fun_r_0 = Frev(r_0, r - 1);
			double alpha = Convert::ToDouble(textBox3->Text);
			dataGridView5->Rows[0]->Cells[4]->Value = Convert::ToString(fun_r_0);
			
			if (fun_r_0 > alpha)
			{
				dataGridView5->Rows[0]->Cells[5]->Value = ("Гипотеза принята");
			}
			else {
				dataGridView5->Rows[0]->Cells[5]->Value = ("Гипотеза отвергнута");
			}
			
			break;
		}
		}
	}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int N = Convert::ToDouble(textBox1->Text);//кол-во итераций
	int k = Convert::ToDouble(textBox4->Text);
	if (k == 0) {
		dataGridView6->Rows->Add();
		dataGridView6->Rows[0]->Cells[1]->Value = dataGridView4->Rows[0]->Cells[0]->Value;
		for (int i = 0; i < floor(1 + 3.322*Math::Log10(N)); i++) {
			dataGridView6->Rows->Add();
			dataGridView6->Rows[i]->Cells[0]->Value = Convert::ToString(i);
			dataGridView6->Rows[i+1]->Cells[1]->Value = dataGridView4->Rows[i]->Cells[1]->Value;

		}
	}

	if (k != 0) {
		for (int i = 0; i < k; i++) {
			dataGridView6->Rows->Add();
			dataGridView6->Rows[i]->Cells[0]->Value = Convert::ToString(i);
		}
	}
}
};

				double getHistogram(double x, double *bord,double *arr3, double *arr4, int j,int N)
				{
					if (x < bord[0])
						return 0;
					if (x > bord[j])
						return 0;
					for (int i = 0; i < j; i++) {
						if ((x >= bord[i]) && (x < bord[i + 1]))
						{
							//return arr3[i] / N;
							return arr4[i];
						}
					}
				}

			 double getValueFun(int i, double *arr, int N)
			 {
				 double *tmp;
				 tmp = new double[N];
				 double a, b, res = 0;
				 for (int k = 0; k < N; k++)
				 {
					 tmp[k] = 1;
				 }
				 for (int k = 0; k < N - 1; k++)
				 {
					 a = arr[k];
					 b = arr[k + 1];
					 if (a == b)
					 {
						 tmp[k + 1] = tmp[k] + 1;
						 tmp[k] = 0;
					 }

				 }
				 return tmp[i];
			 }
			 double Generate()
			 {
				 double random = (double)rand() / RAND_MAX;
				 return random;
			 }

			 void MarshalString(String ^ s, std::string& os)
			 {
				 using namespace Runtime::InteropServices;
				 const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }

			 double fun(double random, double a)
			 {
				 double x = random;
				 double val = -log(1 - x) / a;
				 return val;
			 }
			 double E(double a)
			 {
				 return 1/a;
			 }
			 double D(double a)
			 {
				 return 1 / pow(a,2);
			 }
			 double funDensity(double x, double a)//плотность распределения
			 {
				 if (x < 0) {
					 return 0;
				 }
				 if (x >= 0) {
					 return a * exp(-a * x);
				 }
			 }
			 double funDistribution(double x, double a)//функция распределения
			 {
				 if (x < 0) {
					 return 0;
				 }
				 if (x >= 0) {
					 return 1 - exp(-a * x);
				 }
			 }
			 double funDensityCsi(double x, double r)//плотность распределения КСИ
			 {
				 if (x <= 0) {
					 return 0;
				 }
				 if (x > 0) {
					 return pow(x, r / 2 - 1) * exp(-x / 2) / tgamma(r / 2) / pow(2, r / 2);
				 }
			 }
			 double Frev(double x, double r)//1-функция распределения от КСИ
			 {
				 
				 int n = 1000;
					double  h = x / n;
					 double res = 0;
					 for (int i = 0; i < n; i++) {
						 res = res + (funDensityCsi(i * h,r) + funDensityCsi((i + 1) * h,r)) * h / 2;
					 }
					 return 1 - res;
			 }


			 void sort(double *ver, double *arr, int N)
			 {
				 double tmp, tmp1;
				 for (int i = 0; i < N; i++)
				 {
					 for (int j = 0; j < N - i - 1; j++)
					 {
						 if (ver[j] > ver[j + 1])
						 {
							 // меняем элементы местами
							 tmp = ver[j];
							 tmp1 = arr[j];
							 ver[j] = ver[j + 1];
							 arr[j] = arr[j + 1];
							 ver[j + 1] = tmp;
							 arr[j + 1] = tmp1;
						 }
					 }
				 }
			 }



}