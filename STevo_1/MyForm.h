#pragma once
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/core/core.hpp>
#include "cvToBitmap.h"
#include <math.h>
#include <msclr/marshal_cppstd.h>


#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif
#undef max
#undef min

cv::Mat CitraStart;
cv::Mat CitraResize(CitraStart.size(),CitraStart.type());
cv::Mat Citra;
cv::Mat CitraPicBox1(Citra.size(),Citra.type());
cv::Mat CitraGrid(Citra.size(),Citra.type());

cv::Mat Black_PictureArea;
//cv::Mat Black_PictureArea2(Black_PictureArea.size(),Black_PictureArea.type());

cv::Mat CitraEvent(Black_PictureArea.size(),Black_PictureArea.type());
cv::Mat CitraGridNew(CitraGrid.size(),CitraGrid.type());


int Dots[10000][2];
int New_Dots[10000][2];
int Point_Size;
int LastPoint_Size;
int dist_height;
int dist_width;

int Dots2[10000][2];
int New_Dots2[10000][2];
int Point_Size2;
int LastPoint_Size2;

double Scaling1;
double Scaling2;
double Calibrated_PixelValue;
cv::Point Polygon_points [10000][1];
int Zoom_Picture1,Zoom_Picture2;

namespace STevo_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoSizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoZoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  drawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  polygonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectNewAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lineColourToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pointColourToolStripMenuItem;



	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  Drawing_Tab;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::TabPage^  Stereology_Tab;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;



	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectNewAreaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  selectNonAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  calculateToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ToolStripMenuItem^  drawingBoxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stereologyPictureBoxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  drawingPictureBoxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stereologyPictureBoxToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  selectNewAreaToolStripMenuItem2;
	private: System::Windows::Forms::Button^  CalculateButton;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::NumericUpDown^  Section_NumberBox;


	private: System::Windows::Forms::NumericUpDown^  Calibrated_PixelWidthBox;






	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  Section_ThicknessBox;
	private: System::Windows::Forms::NumericUpDown^  Microscope_MagmmBox;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::NumericUpDown^  Calibrated_PixelHeightBox;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  Save_Button;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  Delete_Button;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Image_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Image_NameCols;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Point_CountCols;


	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label26;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::NumericUpDown^  Resize_FactorBox;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::NumericUpDown^  Microscope_MagPixelBox;




	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoSizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawingBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stereologyPictureBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoZoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawingPictureBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stereologyPictureBoxToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->polygonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectNewAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectNewAreaToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lineColourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pointColourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Drawing_Tab = (gcnew System::Windows::Forms::TabPage());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->Microscope_MagPixelBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Resize_FactorBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->Calibrated_PixelHeightBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Section_ThicknessBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->Microscope_MagmmBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Section_NumberBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->Calibrated_PixelWidthBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->selectAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectNewAreaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectNonAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Stereology_Tab = (gcnew System::Windows::Forms::TabPage());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->Delete_Button = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Image_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Image_NameCols = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Point_CountCols = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Save_Button = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->CalculateButton = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Drawing_Tab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Microscope_MagPixelBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Resize_FactorBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Calibrated_PixelHeightBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Section_ThicknessBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Microscope_MagmmBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Section_NumberBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Calibrated_PixelWidthBox))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->Stereology_Tab->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->openToolStripMenuItem, 
				this->saveToolStripMenuItem, this->drawToolStripMenuItem, this->settingsToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1184, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->openToolStripMenuItem1, 
				this->saveToolStripMenuItem1, this->printToolStripMenuItem});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->openToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->openToolStripMenuItem1->Text = L"Open Image";
			this->openToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem1_Click);
			// 
			// saveToolStripMenuItem1
			// 
			this->saveToolStripMenuItem1->Name = L"saveToolStripMenuItem1";
			this->saveToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->saveToolStripMenuItem1->Text = L"Save Image";
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->printToolStripMenuItem->Text = L"Print";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->autoSizeToolStripMenuItem, 
				this->autoZoomToolStripMenuItem});
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->saveToolStripMenuItem->Text = L"View";
			// 
			// autoSizeToolStripMenuItem
			// 
			this->autoSizeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->drawingBoxToolStripMenuItem, 
				this->stereologyPictureBoxToolStripMenuItem});
			this->autoSizeToolStripMenuItem->Name = L"autoSizeToolStripMenuItem";
			this->autoSizeToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->autoSizeToolStripMenuItem->Text = L"Auto Size";
			// 
			// drawingBoxToolStripMenuItem
			// 
			this->drawingBoxToolStripMenuItem->Name = L"drawingBoxToolStripMenuItem";
			this->drawingBoxToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->drawingBoxToolStripMenuItem->Text = L"Drawing Picture Box";
			this->drawingBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::drawingBoxToolStripMenuItem_Click);
			// 
			// stereologyPictureBoxToolStripMenuItem
			// 
			this->stereologyPictureBoxToolStripMenuItem->Name = L"stereologyPictureBoxToolStripMenuItem";
			this->stereologyPictureBoxToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->stereologyPictureBoxToolStripMenuItem->Text = L"Stereology Picture Box";
			this->stereologyPictureBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::stereologyPictureBoxToolStripMenuItem_Click);
			// 
			// autoZoomToolStripMenuItem
			// 
			this->autoZoomToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->drawingPictureBoxToolStripMenuItem, 
				this->stereologyPictureBoxToolStripMenuItem1});
			this->autoZoomToolStripMenuItem->Name = L"autoZoomToolStripMenuItem";
			this->autoZoomToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->autoZoomToolStripMenuItem->Text = L"Auto Zoom";
			// 
			// drawingPictureBoxToolStripMenuItem
			// 
			this->drawingPictureBoxToolStripMenuItem->Name = L"drawingPictureBoxToolStripMenuItem";
			this->drawingPictureBoxToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->drawingPictureBoxToolStripMenuItem->Text = L"Drawing Picture Box";
			this->drawingPictureBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::drawingPictureBoxToolStripMenuItem_Click);
			// 
			// stereologyPictureBoxToolStripMenuItem1
			// 
			this->stereologyPictureBoxToolStripMenuItem1->Name = L"stereologyPictureBoxToolStripMenuItem1";
			this->stereologyPictureBoxToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->stereologyPictureBoxToolStripMenuItem1->Text = L"Stereology Picture Box";
			this->stereologyPictureBoxToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::stereologyPictureBoxToolStripMenuItem1_Click);
			// 
			// drawToolStripMenuItem
			// 
			this->drawToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->polygonToolStripMenuItem, 
				this->selectNewAreaToolStripMenuItem, this->selectNewAreaToolStripMenuItem2});
			this->drawToolStripMenuItem->Name = L"drawToolStripMenuItem";
			this->drawToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->drawToolStripMenuItem->Text = L"Draw";
			// 
			// polygonToolStripMenuItem
			// 
			this->polygonToolStripMenuItem->Name = L"polygonToolStripMenuItem";
			this->polygonToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->polygonToolStripMenuItem->Text = L"Select Area";
			// 
			// selectNewAreaToolStripMenuItem
			// 
			this->selectNewAreaToolStripMenuItem->Name = L"selectNewAreaToolStripMenuItem";
			this->selectNewAreaToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->selectNewAreaToolStripMenuItem->Text = L"Select New Area";
			// 
			// selectNewAreaToolStripMenuItem2
			// 
			this->selectNewAreaToolStripMenuItem2->Name = L"selectNewAreaToolStripMenuItem2";
			this->selectNewAreaToolStripMenuItem2->Size = System::Drawing::Size(159, 22);
			this->selectNewAreaToolStripMenuItem2->Text = L"Select Non Area";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->lineColourToolStripMenuItem, 
				this->pointColourToolStripMenuItem});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// lineColourToolStripMenuItem
			// 
			this->lineColourToolStripMenuItem->Name = L"lineColourToolStripMenuItem";
			this->lineColourToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->lineColourToolStripMenuItem->Text = L"Line Colour";
			// 
			// pointColourToolStripMenuItem
			// 
			this->pointColourToolStripMenuItem->Name = L"pointColourToolStripMenuItem";
			this->pointColourToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->pointColourToolStripMenuItem->Text = L"Point Colour";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Drawing_Tab);
			this->tabControl1->Controls->Add(this->Stereology_Tab);
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1160, 520);
			this->tabControl1->TabIndex = 1;
			// 
			// Drawing_Tab
			// 
			this->Drawing_Tab->BackColor = System::Drawing::Color::Silver;
			this->Drawing_Tab->Controls->Add(this->label32);
			this->Drawing_Tab->Controls->Add(this->label31);
			this->Drawing_Tab->Controls->Add(this->label30);
			this->Drawing_Tab->Controls->Add(this->Microscope_MagPixelBox);
			this->Drawing_Tab->Controls->Add(this->label28);
			this->Drawing_Tab->Controls->Add(this->Resize_FactorBox);
			this->Drawing_Tab->Controls->Add(this->label21);
			this->Drawing_Tab->Controls->Add(this->Calibrated_PixelHeightBox);
			this->Drawing_Tab->Controls->Add(this->label10);
			this->Drawing_Tab->Controls->Add(this->label9);
			this->Drawing_Tab->Controls->Add(this->Section_ThicknessBox);
			this->Drawing_Tab->Controls->Add(this->Microscope_MagmmBox);
			this->Drawing_Tab->Controls->Add(this->label19);
			this->Drawing_Tab->Controls->Add(this->label18);
			this->Drawing_Tab->Controls->Add(this->Section_NumberBox);
			this->Drawing_Tab->Controls->Add(this->Calibrated_PixelWidthBox);
			this->Drawing_Tab->Controls->Add(this->label8);
			this->Drawing_Tab->Controls->Add(this->label7);
			this->Drawing_Tab->Controls->Add(this->label6);
			this->Drawing_Tab->Controls->Add(this->label5);
			this->Drawing_Tab->Controls->Add(this->label4);
			this->Drawing_Tab->Controls->Add(this->label3);
			this->Drawing_Tab->Controls->Add(this->label2);
			this->Drawing_Tab->Controls->Add(this->label1);
			this->Drawing_Tab->Controls->Add(this->panel1);
			this->Drawing_Tab->Location = System::Drawing::Point(4, 22);
			this->Drawing_Tab->Name = L"Drawing_Tab";
			this->Drawing_Tab->Padding = System::Windows::Forms::Padding(3);
			this->Drawing_Tab->Size = System::Drawing::Size(1152, 494);
			this->Drawing_Tab->TabIndex = 0;
			this->Drawing_Tab->Text = L"Drawing Tab";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(1081, 267);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(29, 13);
			this->label32->TabIndex = 26;
			this->label32->Text = L"Pixel";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(1003, 266);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(23, 13);
			this->label31->TabIndex = 25;
			this->label31->Text = L"mm";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(1064, 284);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 24;
			this->label30->Text = L"=";
			// 
			// Microscope_MagPixelBox
			// 
			this->Microscope_MagPixelBox->Location = System::Drawing::Point(1084, 283);
			this->Microscope_MagPixelBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->Microscope_MagPixelBox->Name = L"Microscope_MagPixelBox";
			this->Microscope_MagPixelBox->Size = System::Drawing::Size(54, 20);
			this->Microscope_MagPixelBox->TabIndex = 23;
			this->Microscope_MagPixelBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->Microscope_MagPixelBox->ValueChanged += gcnew System::EventHandler(this, &MyForm::Microscope_MagPixelBox_ValueChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(1003, 194);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(89, 13);
			this->label28->TabIndex = 22;
			this->label28->Text = L"Resize Factor (%)";
			// 
			// Resize_FactorBox
			// 
			this->Resize_FactorBox->DecimalPlaces = 2;
			this->Resize_FactorBox->Location = System::Drawing::Point(1005, 210);
			this->Resize_FactorBox->Name = L"Resize_FactorBox";
			this->Resize_FactorBox->Size = System::Drawing::Size(133, 20);
			this->Resize_FactorBox->TabIndex = 21;
			this->Resize_FactorBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {25, 0, 0, 0});
			this->Resize_FactorBox->ValueChanged += gcnew System::EventHandler(this, &MyForm::Resize_FactorBox_ValueChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1001, 320);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(136, 13);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Calibrated Pixel Height (µm)";
			// 
			// Calibrated_PixelHeightBox
			// 
			this->Calibrated_PixelHeightBox->DecimalPlaces = 6;
			this->Calibrated_PixelHeightBox->Location = System::Drawing::Point(1004, 336);
			this->Calibrated_PixelHeightBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->Calibrated_PixelHeightBox->Name = L"Calibrated_PixelHeightBox";
			this->Calibrated_PixelHeightBox->Size = System::Drawing::Size(133, 20);
			this->Calibrated_PixelHeightBox->TabIndex = 19;
			this->Calibrated_PixelHeightBox->ThousandsSeparator = true;
			this->Calibrated_PixelHeightBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Calibrated_PixelHeightBox->ValueChanged += gcnew System::EventHandler(this, &MyForm::Calibrated_PixelHeightBox_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1002, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Thickness (µm)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1003, 253);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Microscope Magnification";
			// 
			// Section_ThicknessBox
			// 
			this->Section_ThicknessBox->Location = System::Drawing::Point(1004, 161);
			this->Section_ThicknessBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->Section_ThicknessBox->Name = L"Section_ThicknessBox";
			this->Section_ThicknessBox->Size = System::Drawing::Size(133, 20);
			this->Section_ThicknessBox->TabIndex = 16;
			this->Section_ThicknessBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {600, 0, 0, 0});
			this->Section_ThicknessBox->ValueChanged += gcnew System::EventHandler(this, &MyForm::Section_ThicknessBox_ValueChanged_1);
			// 
			// Microscope_MagmmBox
			// 
			this->Microscope_MagmmBox->Location = System::Drawing::Point(1005, 283);
			this->Microscope_MagmmBox->Name = L"Microscope_MagmmBox";
			this->Microscope_MagmmBox->Size = System::Drawing::Size(54, 20);
			this->Microscope_MagmmBox->TabIndex = 15;
			this->Microscope_MagmmBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Microscope_MagmmBox->ValueChanged += gcnew System::EventHandler(this, &MyForm::Microscope_MagmmBox_ValueChanged_1);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1000, 97);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 13);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Section Number";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1001, 371);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(133, 13);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Calibrated Pixel Width (µm)";
			// 
			// Section_NumberBox
			// 
			this->Section_NumberBox->Location = System::Drawing::Point(1003, 113);
			this->Section_NumberBox->Name = L"Section_NumberBox";
			this->Section_NumberBox->Size = System::Drawing::Size(133, 20);
			this->Section_NumberBox->TabIndex = 10;
			this->Section_NumberBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// Calibrated_PixelWidthBox
			// 
			this->Calibrated_PixelWidthBox->DecimalPlaces = 6;
			this->Calibrated_PixelWidthBox->Location = System::Drawing::Point(1004, 387);
			this->Calibrated_PixelWidthBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->Calibrated_PixelWidthBox->Name = L"Calibrated_PixelWidthBox";
			this->Calibrated_PixelWidthBox->Size = System::Drawing::Size(133, 20);
			this->Calibrated_PixelWidthBox->TabIndex = 9;
			this->Calibrated_PixelWidthBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Calibrated_PixelWidthBox->ValueChanged += gcnew System::EventHandler(this, &MyForm::Calibrated_PixelWidthBox_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1108, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1108, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1067, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Height";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1067, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Width";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1024, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1024, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1000, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Y:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1000, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X :";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(980, 490);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(980, 490);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->selectAreaToolStripMenuItem, 
				this->selectNewAreaToolStripMenuItem1, this->selectNonAreaToolStripMenuItem, this->calculateToolStripMenuItem, this->resetToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(218, 114);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// selectAreaToolStripMenuItem
			// 
			this->selectAreaToolStripMenuItem->Name = L"selectAreaToolStripMenuItem";
			this->selectAreaToolStripMenuItem->Size = System::Drawing::Size(217, 22);
			this->selectAreaToolStripMenuItem->Text = L"Mark As Selected Area";
			this->selectAreaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectAreaToolStripMenuItem_Click);
			// 
			// selectNewAreaToolStripMenuItem1
			// 
			this->selectNewAreaToolStripMenuItem1->Name = L"selectNewAreaToolStripMenuItem1";
			this->selectNewAreaToolStripMenuItem1->Size = System::Drawing::Size(217, 22);
			this->selectNewAreaToolStripMenuItem1->Text = L"Select New Area";
			this->selectNewAreaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::selectNewAreaToolStripMenuItem1_Click);
			// 
			// selectNonAreaToolStripMenuItem
			// 
			this->selectNonAreaToolStripMenuItem->Name = L"selectNonAreaToolStripMenuItem";
			this->selectNonAreaToolStripMenuItem->Size = System::Drawing::Size(217, 22);
			this->selectNonAreaToolStripMenuItem->Text = L"Mark As Selected Non Area";
			this->selectNonAreaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectNonAreaToolStripMenuItem_Click);
			// 
			// calculateToolStripMenuItem
			// 
			this->calculateToolStripMenuItem->Name = L"calculateToolStripMenuItem";
			this->calculateToolStripMenuItem->Size = System::Drawing::Size(217, 22);
			this->calculateToolStripMenuItem->Text = L"Calculate";
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(217, 22);
			this->resetToolStripMenuItem->Text = L"Reset";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::resetToolStripMenuItem_Click);
			// 
			// Stereology_Tab
			// 
			this->Stereology_Tab->BackColor = System::Drawing::Color::Silver;
			this->Stereology_Tab->Controls->Add(this->label29);
			this->Stereology_Tab->Controls->Add(this->label27);
			this->Stereology_Tab->Controls->Add(this->textBox4);
			this->Stereology_Tab->Controls->Add(this->label26);
			this->Stereology_Tab->Controls->Add(this->Delete_Button);
			this->Stereology_Tab->Controls->Add(this->panel3);
			this->Stereology_Tab->Controls->Add(this->Save_Button);
			this->Stereology_Tab->Controls->Add(this->label25);
			this->Stereology_Tab->Controls->Add(this->label24);
			this->Stereology_Tab->Controls->Add(this->label23);
			this->Stereology_Tab->Controls->Add(this->label22);
			this->Stereology_Tab->Controls->Add(this->CalculateButton);
			this->Stereology_Tab->Controls->Add(this->label17);
			this->Stereology_Tab->Controls->Add(this->label16);
			this->Stereology_Tab->Controls->Add(this->label15);
			this->Stereology_Tab->Controls->Add(this->label14);
			this->Stereology_Tab->Controls->Add(this->textBox3);
			this->Stereology_Tab->Controls->Add(this->textBox2);
			this->Stereology_Tab->Controls->Add(this->textBox1);
			this->Stereology_Tab->Controls->Add(this->label13);
			this->Stereology_Tab->Controls->Add(this->label12);
			this->Stereology_Tab->Controls->Add(this->label11);
			this->Stereology_Tab->Controls->Add(this->numericUpDown1);
			this->Stereology_Tab->Controls->Add(this->panel2);
			this->Stereology_Tab->Controls->Add(this->shapeContainer1);
			this->Stereology_Tab->Location = System::Drawing::Point(4, 22);
			this->Stereology_Tab->Name = L"Stereology_Tab";
			this->Stereology_Tab->Padding = System::Windows::Forms::Padding(3);
			this->Stereology_Tab->Size = System::Drawing::Size(1152, 494);
			this->Stereology_Tab->TabIndex = 1;
			this->Stereology_Tab->Text = L"Stereology Tab";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(687, 11);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(51, 13);
			this->label29->TabIndex = 35;
			this->label29->Text = L"Pixel Bar ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(687, 411);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(85, 13);
			this->label27->TabIndex = 34;
			this->label27->Text = L"Volume ( mm^3 )";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(690, 427);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 20);
			this->textBox4->TabIndex = 33;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(857, 22);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(92, 13);
			this->label26->TabIndex = 31;
			this->label26->Text = L"Point Count Table";
			// 
			// Delete_Button
			// 
			this->Delete_Button->Location = System::Drawing::Point(690, 270);
			this->Delete_Button->Name = L"Delete_Button";
			this->Delete_Button->Size = System::Drawing::Size(120, 65);
			this->Delete_Button->TabIndex = 30;
			this->Delete_Button->Text = L"Delete Data";
			this->Delete_Button->UseVisualStyleBackColor = true;
			this->Delete_Button->Click += gcnew System::EventHandler(this, &MyForm::Delete_Button_Click);
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Location = System::Drawing::Point(856, 43);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(274, 445);
			this->panel3->TabIndex = 29;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Image_Number, 
				this->Image_NameCols, this->Point_CountCols});
			this->dataGridView1->Location = System::Drawing::Point(-1, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(274, 445);
			this->dataGridView1->TabIndex = 0;
			// 
			// Image_Number
			// 
			this->Image_Number->HeaderText = L"Section Number";
			this->Image_Number->Name = L"Image_Number";
			this->Image_Number->Width = 50;
			// 
			// Image_NameCols
			// 
			this->Image_NameCols->HeaderText = L"Name";
			this->Image_NameCols->Name = L"Image_NameCols";
			// 
			// Point_CountCols
			// 
			this->Point_CountCols->HeaderText = L"ΣPi";
			this->Point_CountCols->Name = L"Point_CountCols";
			this->Point_CountCols->Width = 80;
			// 
			// Save_Button
			// 
			this->Save_Button->Location = System::Drawing::Point(690, 199);
			this->Save_Button->Name = L"Save_Button";
			this->Save_Button->Size = System::Drawing::Size(120, 65);
			this->Save_Button->TabIndex = 28;
			this->Save_Button->Text = L"Save Data";
			this->Save_Button->UseVisualStyleBackColor = true;
			this->Save_Button->Click += gcnew System::EventHandler(this, &MyForm::Save_Button_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1028, 26);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(66, 13);
			this->label25->TabIndex = 27;
			this->label25->Text = L"Corrected Y:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(1028, 6);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(66, 13);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Corrected X:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(959, 26);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 13);
			this->label23->TabIndex = 25;
			this->label23->Text = L"Y :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(959, 6);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 13);
			this->label22->TabIndex = 24;
			this->label22->Text = L"X :";
			// 
			// CalculateButton
			// 
			this->CalculateButton->Location = System::Drawing::Point(690, 341);
			this->CalculateButton->Name = L"CalculateButton";
			this->CalculateButton->Size = System::Drawing::Size(120, 65);
			this->CalculateButton->TabIndex = 23;
			this->CalculateButton->Text = L"Calculate";
			this->CalculateButton->UseVisualStyleBackColor = true;
			this->CalculateButton->Click += gcnew System::EventHandler(this, &MyForm::CalculateButton_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1098, 26);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 22;
			this->label17->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1098, 6);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(985, 27);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(985, 7);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(690, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(690, 156);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(690, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(687, 98);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"a/p (µm x µm)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(687, 140);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"ΣP";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(689, 59);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Total Point";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown1->Location = System::Drawing::Point(690, 27);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(91, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 490);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(670, 490);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			this->pictureBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox2_MouseClick);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 3);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->rectangleShape1});
			this->shapeContainer1->Size = System::Drawing::Size(1146, 488);
			this->shapeContainer1->TabIndex = 32;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->Location = System::Drawing::Point(853, 17);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(100, 23);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(1184, 561);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"STevo Ver 1.0";
			this->TransparencyKey = System::Drawing::Color::Maroon;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->Drawing_Tab->ResumeLayout(false);
			this->Drawing_Tab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Microscope_MagPixelBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Resize_FactorBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Calibrated_PixelHeightBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Section_ThicknessBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Microscope_MagmmBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Section_NumberBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Calibrated_PixelWidthBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->Stereology_Tab->ResumeLayout(false);
			this->Stereology_Tab->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string MarshalString (System::String ^ s) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)
				(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			std::string os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void openToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK) {
					 CitraStart = cv::imread(MarshalString(openFileDialog1->FileName));
					 CitraLoad();
				 }

			 }
			 void CitraLoad(){

				 double Resize_Factor = (double) Resize_FactorBox->Value;
				 Resize_Factor = Resize_Factor/100;

				 CitraStart.copyTo(CitraResize);
				 //CitraStart = cv::Mat();

				 cv::resize(CitraResize,Citra,cv::Size(Resize_Factor*CitraResize.cols,Resize_Factor*CitraResize.rows),0,0,CV_INTER_LINEAR);
				 CitraResize= cv::Mat();

				 Citra.copyTo(CitraPicBox1);
				 Citra.copyTo(CitraGrid);
				 Citra= cv::Mat();

				 pictureBox1->Image = MatToBitmap(CitraPicBox1);
				 delete MatToBitmap(CitraPicBox1);

				 Black_PictureArea = cv::Mat::zeros ((pictureBox1->Image->Size.Height),(pictureBox1->Image->Size.Width),CV_8UC1 );

				 label7->Text = Convert::ToString(pictureBox1->Image->Size.Width);
				 label8->Text = Convert::ToString(pictureBox1->Image->Size.Height);
				 Zoom_Picture1 = 0;
				 Zoom_Picture2 = 0;
				 Point_Size = 0;

				 pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 Black_PictureArea.copyTo(CitraEvent);
				 Black_PictureArea= cv::Mat();

			 }
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (pictureBox1->Image != nullptr) {

					 if (e->Button==System::Windows::Forms::MouseButtons::Left) {

						 Dots[0][0]= (e->X);Dots[0][1] = (e->Y);
						 Dots[Point_Size+1][0] = (e->X);Dots[Point_Size+1][1] = (e->Y);
						 Polygon_points[0][Point_Size] = cv::Point (Dots[Point_Size][0],Dots[Point_Size][1]);
						 Point_Size++;

						 label3->Text = Convert::ToString(e->X);
						 label4->Text = Convert::ToString(e->Y);
						 pictureBox1->Refresh();
					 }
					 if (e->Button==System::Windows::Forms::MouseButtons::Left && Control::ModifierKeys == Keys::Control ) {

						 Point_Size = 0;
						 pictureBox1->Refresh();

					 }
				 }
			 }
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 if (pictureBox1->Image != nullptr) {

					 Pen^ Pena = gcnew Pen(System::Drawing::Color::Yellow, 2);
					 for (int i=0; i<Point_Size; i++) {
						 e->Graphics->DrawLine(Pena, Dots[i][0], Dots[i][1], Dots[i+1][0], Dots[i+1][1]);
					 }
					 delete Pena;
				 }
			 }
	private: System::Void pictureBox2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void selectAreaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Draw_Line2();
				 Draw_Polygon();
				 PointRead();
			 }
	private: System::Void selectNewAreaToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

				 //CitraEvent.copyTo(Black_PictureArea2);
				 pictureBox1->Image = MatToBitmap(CitraPicBox1);
				 delete MatToBitmap(CitraPicBox1);
				 Point_Size =0;
			 }

	private: System::Void selectNonAreaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Draw_Line1();
				 Draw_BlackPolygon();
				 PointRead();
			 }
	private: System::Void resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 CitraLoad();
				 Point_Size =0;
			 }
			 void Draw_Line1(){

				 if(Zoom_Picture1>0){

					 for (int i=0; i<Point_Size; i++) {
						 cv::Point Start_Pointline ( Dots[i][0]/Scaling1, Dots[i][1]/Scaling1);
						 cv::Point Second_Pointline (Dots[i+1][0]/Scaling1, Dots[i+1][1]/Scaling1);
						 cv::line(CitraGrid,Start_Pointline,Second_Pointline,cv::Scalar(0,0,255),2,8);
						 cv::line(CitraPicBox1,Start_Pointline,Second_Pointline,cv::Scalar(0,0,255),2,8);
					 }
				 }

				 else{

					 for (int i=0; i<Point_Size; i++) {
						 cv::Point Start_Pointline ( Dots[i][0], Dots[i][1]);
						 cv::Point Second_Pointline (Dots[i+1][0], Dots[i+1][1]);
						 cv::line(CitraGrid,Start_Pointline,Second_Pointline,cv::Scalar(0,0,255),2,8);
						 cv::line(CitraPicBox1,Start_Pointline,Second_Pointline,cv::Scalar(0,0,255),2,8);
					 }
				 }
			 }

			 void Draw_Line2(){


				 if(Zoom_Picture1>0){

					 for (int i=0; i<Point_Size; i++) {
						 cv::Point Start_Pointline ( Dots[i][0]/Scaling1, Dots[i][1]/Scaling1);
						 cv::Point Second_Pointline (Dots[i+1][0]/Scaling1, Dots[i+1][1]/Scaling1);
						 cv::line(CitraGrid,Start_Pointline,Second_Pointline,cv::Scalar(200,255,0),2,8);
						 cv::line(CitraPicBox1,Start_Pointline,Second_Pointline,cv::Scalar(200,255,0),2,8);
					 }
				 }

				 else{

					 for (int i=0; i<Point_Size; i++) {
						 cv::Point Start_Pointline ( Dots[i][0], Dots[i][1]);
						 cv::Point Second_Pointline (Dots[i+1][0], Dots[i+1][1]);
						 cv::line(CitraGrid,Start_Pointline,Second_Pointline,cv::Scalar(200,255,0),2,8);
						 cv::line(CitraPicBox1,Start_Pointline,Second_Pointline,cv::Scalar(200,255,0),2,8);
					 }
				 }
			 }

			 void Draw_Polygon(){

				 //Black_PictureArea2.copyTo(CitraEvent);

				 if (Zoom_Picture1>0){
					 for (int i=0; i<Point_Size; i++) {
						 Polygon_points[0][i] = cv::Point (Dots[i][0]/Scaling1,Dots[i][1]/Scaling1);
					 }
					 const cv::Point* pts[1]= {Polygon_points[0]};
					 const int npt[] = { Point_Size };
					 cv::fillPoly(CitraEvent,  pts, npt, 1, cv::Scalar(255),8);
				 }

				 else{
					 for (int i=0; i<Point_Size; i++) {
						 Polygon_points[0][i] = cv::Point (Dots[i][0],Dots[i][1]);
					 }
					 const cv::Point* pts[1]= {Polygon_points[0]};
					 const int npt[] = { Point_Size };
					 cv::fillPoly(CitraEvent,  pts, npt, 1, cv::Scalar(255),8);
				 }
			 }

			 void Draw_BlackPolygon(){

				 //Black_PictureArea2.copyTo(CitraEvent);

				 if (Zoom_Picture1>0){
					 for (int i=0; i<Point_Size; i++) {
						 Polygon_points[0][i] = cv::Point (Dots[i][0]/Scaling1,Dots[i][1]/Scaling1);
					 }
					 const cv::Point* pts[1]= {Polygon_points[0]};
					 const int npt[] = { Point_Size };
					 cv::fillPoly(CitraEvent,  pts, npt, 1, cv::Scalar(0),8);
				 }

				 else{
					 for (int i=0; i<Point_Size; i++) {
						 Polygon_points[0][i] = cv::Point (Dots[i][0],Dots[i][1]);
					 }
					 const cv::Point* pts[1]= {Polygon_points[0]};
					 const int npt[] = { Point_Size };
					 cv::fillPoly(CitraEvent,  pts, npt, 1, cv::Scalar(0),8);
				 }

			 }


			 void PointRead() {

				 CitraGrid.copyTo(CitraGridNew);

				 dist_height = (int) numericUpDown1->Value;
				 dist_width = (int) numericUpDown1->Value;
				 int PlusGrid = cvRound(dist_width/5);

				 int Width =  CitraEvent.cols;//kebalik (Harusnya Height)
				 int Height = CitraEvent.rows;// kebalik (Harusnya Width)
				 int PointCount = 0;
				 int PointAll = 0;

				 for (int i=0;i<Height;i+=dist_width)
				 {
					 for (int j=0;j<Width;j+=dist_height)
					 {
						 if( i-PlusGrid<0){
							 PlusGrid=0;
						 }
						 else if( j-PlusGrid<0){
							 PlusGrid=0;
						 }
						 else {
							 PlusGrid =  cvRound(dist_width/5);
						 }

						 if(i+PlusGrid>Height){
							 PlusGrid=0;
						 }
						 else if(j+PlusGrid>Width){
							 PlusGrid=0;
						 }
						 else {
							 PlusGrid =  cvRound(dist_width/5);
						 }

						 if(CitraEvent.at<uchar>(i,j)>0){

							 cv::line(CitraGridNew,cv::Point(j,i-PlusGrid),cv::Point(j,i+PlusGrid),cv::Scalar(255,0,0),2);
							 cv::line(CitraGridNew,cv::Point(j-PlusGrid,i),cv::Point(j+PlusGrid,i),cv::Scalar(255,0,0),2);
							 PointCount++;

						 }

						 else {

							 cv::line(CitraGridNew,cv::Point(j,i-PlusGrid),cv::Point(j,i+PlusGrid),cv::Scalar(0,0,255),1);
							 cv::line(CitraGridNew,cv::Point(j-PlusGrid,i),cv::Point(j+PlusGrid,i),cv::Scalar(0,0,255),1);
							 PointAll++;
						 }
					 }

				 }
				 int TotalPoint = PointAll +PointCount;

				 double Calibrated_PixelWidth = (double) Calibrated_PixelWidthBox->Value;
				 double Calibrated_PixelHeight = (double) Calibrated_PixelHeightBox->Value;
				 double Thickness = (double) Section_ThicknessBox->Value;
				 double Resize_Factor = (double) Resize_FactorBox->Value;
				 Resize_Factor = Resize_Factor/100;

				 double ThicknessB = Thickness;
				 double AreaofInterest = (dist_width*Calibrated_PixelWidth/Resize_Factor)*(dist_height*Calibrated_PixelHeight/Resize_Factor);

				 textBox1->Text = Convert::ToString(String::Format("{0:0.000000}",AreaofInterest));
				 textBox3->Text = Convert::ToString(TotalPoint);
				 textBox2->Text = Convert::ToString(PointCount);

				 pictureBox2->Image = MatToBitmap(CitraGridNew);
				 delete MatToBitmap(CitraGridNew);
				 CitraGridNew.release();

			 }



	private: System::Void pictureBox2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (pictureBox2->Image != nullptr) {

					 if (e->Button==System::Windows::Forms::MouseButtons::Left) {

						 Dots2[0][0]= (e->X);
						 Dots2[0][1] = (e->Y);
						 cv::Point Point_Event2 (Dots2[0][0],Dots2[0][1]);

						 PointClick();

						 label14->Text = Convert::ToString(Dots2[0][0]);
						 label15->Text = Convert::ToString(Dots2[0][1]);
						 pictureBox2->Refresh();
					 }

				 }
			 }

			 void PointClick(){

				 dist_height = (int) numericUpDown1->Value;
				 dist_width = (int) numericUpDown1->Value;
				 int PlusGrid = dist_width/5;
				 double Point_ScalingX ;
				 double Point_ScalingY ;

				 if(Zoom_Picture2>0){

					 Point_ScalingX = ((double) Dots2[0][0]/Scaling2)/((double)dist_width);
					 Point_ScalingY = ((double) Dots2[0][1]/Scaling2)/((double)dist_width);
				 }
				 else{

					 Point_ScalingX = ((double) Dots2[0][0])/((double)dist_width);
					 Point_ScalingY = ((double) Dots2[0][1])/((double)dist_width);
				 }
				 double intpart,fractpartX,fractpartY;
				 fractpartX = modf(Point_ScalingX,&intpart);
				 fractpartY = modf(Point_ScalingY,&intpart);
				 int Point_RoundMaxi = cvCeil(Point_ScalingX);
				 int Point_RoundMaxj = cvCeil(Point_ScalingY);

				 int Point_RoundMini = cvFloor(Point_ScalingX);
				 int Point_RoundMinj = cvFloor(Point_ScalingY);

				 int RealPointi;
				 int RealPointj;

				 if(fractpartX>=0.5){
					 RealPointi= Point_RoundMaxi*dist_width;
				 }

				 else {
					 RealPointi = Point_RoundMini*dist_width;
				 }

				 if(fractpartY>=0.5){
					 RealPointj= Point_RoundMaxj*dist_width;
				 }

				 else {
					 RealPointj = Point_RoundMinj*dist_width;
				 }

				 cv::Point Real_PointClick = (RealPointi,RealPointj);
				 cv::Point Real_PointClick1 = (RealPointi-PlusGrid,RealPointj-PlusGrid);
				 cv::Point Real_PointClick2 = (RealPointi+PlusGrid,RealPointj+PlusGrid);


				 label16->Text = Convert::ToString(RealPointi);
				 label17->Text = Convert::ToString(RealPointj);


				 if(CitraEvent.at<uchar>(RealPointj,RealPointi)>0){

					 cv::line(CitraEvent,cv::Point(RealPointi-3,RealPointj-3),cv::Point(RealPointi+3,RealPointj+3),cv::Scalar(0),3);

				 }

				 else {

					 cv::line(CitraEvent,cv::Point(RealPointi-3,RealPointj-3),cv::Point(RealPointi+3,RealPointj+3),cv::Scalar(255),3);
				 }

				 PointRead();

			 }

	private: System::Void Section_ThicknessBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 int Numeric_A = (int) numericUpDown1->Value;
				 PointRead();
			 }

			 void VolumeFormula (){
				 double Calibrated_PixelWidth = (double) Calibrated_PixelWidthBox->Value;
				 double Calibrated_PixelHeight = (double) Calibrated_PixelHeightBox->Value;
				 double Resize_Factor = (double) Resize_FactorBox->Value;
				 double Thickness = (double) Section_ThicknessBox->Value;
				 //double Tissues_Shrinkage = (double)Tissues_ShrinkageBox->Value;
				 int Sum_PointCount = 0;

				 for (int i = 0; i<(dataGridView1->Rows->Count); i++)
				 {
					 Sum_PointCount += Convert::ToInt32(dataGridView1->Rows[i]->Cells[2]->Value);
				 }

				 double AreaofInterest = (dist_width*Calibrated_PixelWidth/Resize_Factor)*(dist_height*Calibrated_PixelHeight/Resize_Factor);
				 double Volume = Thickness*AreaofInterest*Sum_PointCount*0.00001;
				 textBox4->Text = Convert::ToString(String::Format("{0:0.00000000}",Volume));

			 }

	private: System::Void CalculateButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 VolumeFormula();

			 }

			 void Aspect_Ratio1() {

				 if ((pictureBox1->Image->Size.Width) > (pictureBox1->Image->Size.Height) ){
					 Scaling1 = (double)(pictureBox1->Size.Width)/(double)(pictureBox1->Image->Size.Width) ;
					 int New_Width1 = (pictureBox1->Size.Width);
					 int New_Height1 = cvRound((pictureBox1->Image->Size.Height)*Scaling1);
					 this->pictureBox1->Size = System::Drawing::Size(New_Width1, New_Height1);

				 }
				 else if  ((pictureBox1->Image->Size.Width) <=  (pictureBox1->Image->Size.Height)){
					 Scaling1 = (double)(pictureBox1->Size.Height)/(double)(pictureBox1->Image->Size.Height);
					 int New_Height1 = (pictureBox1->Size.Height);
					 int New_Width1 = cvRound((pictureBox1->Image->Size.Width)*Scaling1);
					 this->pictureBox1->Size = System::Drawing::Size(New_Width1, New_Height1);
				 }

			 }
			 void Aspect_Ratio2() {

				 if ((pictureBox2->Image->Size.Width) > (pictureBox2->Image->Size.Height) ){
					 Scaling2 = (double)(pictureBox2->Size.Width)/(double)(pictureBox2->Image->Size.Width) ;
					 int New_Width2 = (pictureBox2->Size.Width);
					 int New_Height2 = cvRound((pictureBox2->Image->Size.Height)*Scaling2);
					 this->pictureBox2->Size = System::Drawing::Size(New_Width2, New_Height2);
				 }
				 else if   ((pictureBox2->Image->Size.Width) <=  (pictureBox2->Image->Size.Height)){
					 Scaling2 = (double)(pictureBox2->Size.Height)/(double)(pictureBox2->Image->Size.Height);
					 int New_Height2 = (pictureBox2->Size.Height);
					 int New_Width2 = cvRound((pictureBox2->Image->Size.Width)*Scaling2);
					 this->pictureBox1->Size = System::Drawing::Size(New_Width2, New_Height2);

				 }
			 }

	private: System::Void drawingBoxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 Zoom_Picture1 = 0;
			 }
	private: System::Void stereologyPictureBoxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 Zoom_Picture2 = 0;
			 }
	private: System::Void drawingPictureBoxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->Location = System::Drawing::Point(0, 0);
				 this->pictureBox1->Size = System::Drawing::Size(540,540);
				 pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 Aspect_Ratio1();
				 Zoom_Picture1 = 1;
			 }
	private: System::Void stereologyPictureBoxToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox2->Location = System::Drawing::Point(0, 0);
				 this->pictureBox2->Size = System::Drawing::Size(600, 600);
				 pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 Aspect_Ratio2();
				 Zoom_Picture2 = 1;
			 }

	private: System::Void Save_Button_Click(System::Object^  sender, System::EventArgs^  e) {

				 dataGridView1->Rows->Add((Section_NumberBox->Value),(openFileDialog1->SafeFileName),(textBox2->Text));

			 }
	private: System::Void Delete_Button_Click(System::Object^  sender, System::EventArgs^  e) {

				 if( dataGridView1->CurrentCell->Value == nullptr){
					 MessageBox::Show("Current Cell is Empty");
				 }
				 else{
					 dataGridView1->Rows->RemoveAt(dataGridView1->CurrentCell->RowIndex);
				 }
			 }

	private: System::Void Resize_FactorBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

				 double Resize_Factor = (double) Resize_FactorBox->Value;
				 Resize_Factor = Resize_Factor/100;
				 CitraLoad();
				 Point_Size =0;
			 }

	private: System::Void Section_ThicknessBox_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
				 this->Section_ThicknessBox->Value = System::Decimal(Section_ThicknessBox->Value);
			 }
	/*private: System::Void Tissues_ShrinkageBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->Tissues_ShrinkageBox->Value = System::Decimal(Tissues_ShrinkageBox->Value);
			 }*/
	private: System::Void Calibrated_PixelHeightBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

				 this->Calibrated_PixelHeightBox->Value = System::Decimal(Calibrated_PixelHeightBox->Value);
			 }
	private: System::Void Calibrated_PixelWidthBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->Calibrated_PixelWidthBox->Value = System::Decimal(Calibrated_PixelWidthBox->Value);
			 }
	private: System::Void Microscope_MagmmBox_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
				 
				 Calibrated_PixelValue = (double) Microscope_MagmmBox->Value/ (double)Microscope_MagPixelBox->Value;
				 Calibrated_PixelWidthBox->Value = Convert::ToDecimal(Calibrated_PixelValue*1000);
				 Calibrated_PixelHeightBox->Value = Convert::ToDecimal (Calibrated_PixelValue*1000);
				 this->Microscope_MagmmBox->Value = System::Decimal(Microscope_MagmmBox->Value);
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 }
	private: System::Void Microscope_MagPixelBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 Calibrated_PixelValue = (double) Microscope_MagmmBox->Value/(double) Microscope_MagPixelBox->Value;
				 Calibrated_PixelWidthBox->Value = Convert::ToDecimal(Calibrated_PixelValue*1000);
				 Calibrated_PixelHeightBox->Value = Convert::ToDecimal (Calibrated_PixelValue*1000);
				 this->Microscope_MagPixelBox->Value = System::Decimal(Microscope_MagPixelBox->Value);
			 }
	};
}