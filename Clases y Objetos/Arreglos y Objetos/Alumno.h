//Arreglos de Objetos


class Alumno
{
	//	Atributos
	private:
		float calMate, calProgra, promedio;
		
	//Métodoa
	
	public:
		Alumno(float _calMate, float _calProgra) //Constructor 1
		{
			calMate = _calMate;
			calProgra = _calProgra;
		}
	
	
	public :
		Alumno() //Constructor por Defecto
		{
				
		}
		
		
		void pedirDatos();
		void mostrarNotas();	
	
		
};
