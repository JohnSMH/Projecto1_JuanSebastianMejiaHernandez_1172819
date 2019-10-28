#pragma once
#include "Pila.h"
#include "Nodo.h"
#include "Cola.h"
#include "ListaDE.h"



namespace Projecto1JuanSebastianMejiaHernandez1172819 {

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
	private: System::Windows::Forms::RichTextBox^ richTextBoxPila;
	private: System::Windows::Forms::RichTextBox^ richTextBoxCola;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::Button^ buttonIngresar;

	private: System::Windows::Forms::RichTextBox^ richTextBoxPrecios;
	private: System::Windows::Forms::Button^ buttonOrdenar;
	private: System::Windows::Forms::Button^ buttonEliminar;

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
			this->richTextBoxPila = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxCola = (gcnew System::Windows::Forms::RichTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonIngresar = (gcnew System::Windows::Forms::Button());
			this->richTextBoxPrecios = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonOrdenar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBoxPila
			// 
			this->richTextBoxPila->Location = System::Drawing::Point(12, 12);
			this->richTextBoxPila->Name = L"richTextBoxPila";
			this->richTextBoxPila->Size = System::Drawing::Size(37, 164);
			this->richTextBoxPila->TabIndex = 0;
			this->richTextBoxPila->Text = L"";
			// 
			// richTextBoxCola
			// 
			this->richTextBoxCola->Location = System::Drawing::Point(55, 12);
			this->richTextBoxCola->Name = L"richTextBoxCola";
			this->richTextBoxCola->Size = System::Drawing::Size(45, 164);
			this->richTextBoxCola->TabIndex = 1;
			this->richTextBoxCola->Text = L"";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(157, 12);
			this->maskedTextBox1->Mask = L"0";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(17, 20);
			this->maskedTextBox1->TabIndex = 2;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(203, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L".";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(180, 12);
			this->maskedTextBox2->Mask = L"0";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(17, 20);
			this->maskedTextBox2->TabIndex = 7;
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(219, 12);
			this->maskedTextBox3->Mask = L"0";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(17, 20);
			this->maskedTextBox3->TabIndex = 8;
			this->maskedTextBox3->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(242, 12);
			this->maskedTextBox4->Mask = L"0";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(17, 20);
			this->maskedTextBox4->TabIndex = 9;
			this->maskedTextBox4->ValidatingType = System::Int32::typeid;
			// 
			// buttonIngresar
			// 
			this->buttonIngresar->Location = System::Drawing::Point(157, 48);
			this->buttonIngresar->Name = L"buttonIngresar";
			this->buttonIngresar->Size = System::Drawing::Size(102, 23);
			this->buttonIngresar->TabIndex = 10;
			this->buttonIngresar->Text = L"Ingresar Precio";
			this->buttonIngresar->UseVisualStyleBackColor = true;
			this->buttonIngresar->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// richTextBoxPrecios
			// 
			this->richTextBoxPrecios->Location = System::Drawing::Point(157, 80);
			this->richTextBoxPrecios->Name = L"richTextBoxPrecios";
			this->richTextBoxPrecios->Size = System::Drawing::Size(100, 96);
			this->richTextBoxPrecios->TabIndex = 11;
			this->richTextBoxPrecios->Text = L"";
			// 
			// buttonOrdenar
			// 
			this->buttonOrdenar->Location = System::Drawing::Point(12, 182);
			this->buttonOrdenar->Name = L"buttonOrdenar";
			this->buttonOrdenar->Size = System::Drawing::Size(88, 23);
			this->buttonOrdenar->TabIndex = 12;
			this->buttonOrdenar->Text = L"Ordenar";
			this->buttonOrdenar->UseVisualStyleBackColor = true;
			this->buttonOrdenar->Click += gcnew System::EventHandler(this, &MyForm::ButtonOrdenar_Click);
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(157, 182);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(100, 23);
			this->buttonEliminar->TabIndex = 13;
			this->buttonEliminar->Text = L"Eliminar Precios";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &MyForm::ButtonEliminar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 261);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonOrdenar);
			this->Controls->Add(this->richTextBoxPrecios);
			this->Controls->Add(this->buttonIngresar);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->richTextBoxCola);
			this->Controls->Add(this->richTextBoxPila);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
		public: int numit = 0;
		Pila *p = new Pila();
		Pila* auxp = new Pila();
		Cola* c = new Cola();
		Cola* auxc = new Cola();
		ListaDE* Lis = new ListaDE();
		
		//Codigo para imprimir la cola no importa numero de elementos
	public: Void ImprimirC() {
			richTextBoxCola->Text = "";
			int temp = 0;

			while (c->Numerodeelementos() != 0)
			{
				temp = c->Descolar();
				richTextBoxCola->Text += "\n" + temp;
				auxc->Encolar(temp);
			}

			while (auxc->Numerodeelementos() != 0)
			{
				c->Encolar(auxc->Descolar());
			}
		};

		//Codigo para imprimir pila sin importar numero de elementos
	public: Void ImprimirP() {
		richTextBoxPila->Text = "";
		int temp = 0;
		while (p->Numerodeelementos() != 0)
		{
			temp = p->Desapilar();
			richTextBoxPila->Text += "\n"+temp;
			auxp->Apilar(temp);
		}

		while (auxp->Numerodeelementos()!=0)
		{
			p->Apilar(auxp->Desapilar());
		}
	};

		//Ordena la Pila
	public: Void OrdenarP() {
		
		
		while (p->Numerodeelementos() != 0)
		{
			
			int temp = p->Desapilar();


			
			while (auxp->Numerodeelementos() != 0 && auxp->ObtenerCima() < temp)
			{
								p->Apilar(auxp->Desapilar());
			}

			
			auxp->Apilar(temp);
		}

		while (auxp->Numerodeelementos() != 0) {
			p->Apilar(auxp->Desapilar());
		}

	}

		//Ordena la Cola
	public: Void OrdenarC() {
		
		int x, y, NE = c->Numerodeelementos(), recorrido = 0;
		while (recorrido < NE) {
			int recorrido2 = 0;
			x = c->Descolar();
			while (recorrido2 < NE - 1) {
				y = c->Descolar();
				if (x > y) {
					c->Encolar(y);
				}
				else {
					c->Encolar(x);
					x = y;
				}
				recorrido2++;
			}
			c->Encolar(x);
			recorrido++;
		}

		

	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Creacion de Pila
		for (int i = 0; i < 10; i++)
		{
			p->Apilar(i);
		}
		//Creacion de Cola
		for (int i = 0; i < 10; i++)
		{
			c->Encolar(i);
		}

		
		ImprimirC();
		ImprimirP();
	}

		//Funcion semi recursiva que funciona hasta devolver un precio correcto
	public: int AgregarPrecio(int pre) {
		
		int precio=-1;
		if (BuscarPila(pre))
		{
			precio=QuitarPila(pre);
			
		}
		else if (BuscarCola(pre)) {
			precio=QuitarCola(pre);
			
		}
		else {
			if (pre==9)
			{
				precio=AgregarPrecio(0);

			}
			else {
				precio=AgregarPrecio(pre + 1);
			}
		}
		return precio;
	}

		//Codigo Para eliminar un elemento de la Cola
	public: int QuitarCola(int pre) {
		int temp = -1;
		int precio;

		while (temp!=pre)
		{
			temp = c->Descolar();
			if (temp!=pre)
			{
				c->Encolar(temp);
			}
			
		}

		precio = temp;
		


		
		return precio;
	}

		//Codigo para eliminar un elemento de la pila
	public: int QuitarPila(int pre) {
		int temp;
		int precio;

		temp = -1;

		while (temp!=pre)
		{
			temp = p->Desapilar();
			auxp->Apilar(temp);
		}
		
		precio = temp;
		auxp->Desapilar();
		while (auxp->Numerodeelementos()!=0)
		{
			p->Apilar(auxp->Desapilar());
		}

		return precio;
	}

		//Codigo que devuelve si x numero existe en la cola
	public: bool BuscarCola(int pre) {
		int temp;
		bool ver = false;
		
	
		while (c->Numerodeelementos()!=0)
		{
			temp = c->Descolar();
			auxc->Encolar(temp);
			if (temp==pre)
			{
				ver = true;
			}
		}

		while (auxc->Numerodeelementos() != 0)
		{
			c->Encolar(auxc->Descolar());
		}

		return ver;
	}

		//Codigo para revisar si un numero esta en la pila
	public: bool BuscarPila(int pre) {
		int temp;
		bool ver = false;
		

		while (p->Numerodeelementos()!=0)
		{
			temp = p->Desapilar();
			auxp->Apilar(temp);
			if (temp == pre)
			{
				ver = true;
			}
		}

		while (auxp->Numerodeelementos()!=0)
		{
			p->Apilar(auxp->Desapilar());
		}
			
		return ver;
	}

		//Devuelve individualmente los precios a la pila y la cola
	public: Void Devolver(int pre) {
		
		if (numit==0)
		{

		}
		else {
			if (!BuscarPila(pre)) {
				p->Apilar(pre);
			}
			else if (!BuscarCola(pre)) {
				c->Encolar(pre);
			}
		}


		
	}

		//Boton que añade los precios utilizando las reglas, guarda los precios en lista
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try
		{
			if (numit > 2)
			{
				richTextBoxPrecios->Text += "Limite alcanzado" + "\n";
			}
			else {
				int n1, n2, n3, n4;

				n1 = AgregarPrecio(Convert::ToInt32(maskedTextBox1->Text));
				n2 = AgregarPrecio(Convert::ToInt32(maskedTextBox2->Text));
				n3 = AgregarPrecio(Convert::ToInt32(maskedTextBox3->Text));
				n4 = AgregarPrecio(Convert::ToInt32(maskedTextBox4->Text));
				numit++;
				

				richTextBoxPrecios->Text += "Precio " + numit + ": " + n1 + n2 + n3 + n4 + "\n";
				Lis->Agregar(n1);
				Lis->Agregar(n2);
				Lis->Agregar(n3);
				Lis->Agregar(n4);

				ImprimirC();
				ImprimirP();
			}
		}
		catch (...)
		{
			System::Windows::Forms::MessageBox::Show("precio no ingresado");
		}
			
		
		
		
	}

		//Boton para devolver los precios a su cola y pila
	private: System::Void ButtonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		for (int i = 0; i < 4; i++)
	{
			if (Lis->Numerodeelementos()==0)
			{

			}
			else {
				Devolver(Lis->Quitar());
				
			}
			
	}
		richTextBoxPrecios->Text += "Precio " + (numit)+" ha sido eliminado" + "\n";
		if (numit==0)
		{

		}
		else {
			numit--;
		}
		
		
	
	ImprimirC();
	ImprimirP();
	

	if (numit==0)
	{
		richTextBoxPrecios->Text = "";
	}
}

		//Llama a ordenar la pila y la cola
	private: System::Void ButtonOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
	OrdenarC();
	OrdenarP();
	ImprimirP();
	ImprimirC();
}
};
}
