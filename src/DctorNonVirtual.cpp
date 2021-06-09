class Shape {

		int* canvas;

	public:

		virtual bool draw() {
			//init canvas
		}

		~Shape() {			//Compliant: has virtual function & non virtual destructor but most base class so compliant.
			delete canvas;
		}
	};


	class Circle : public Shape {

		int radius;
		int *circle;

	public:

		bool draw() {
			//draw circle on canvas
			return true;
		}

		~Circle() {		//Non-Compliant : Destructor is non empty & not virtual
			delete circle;
		}
	};



	class Ring : public Shape {

		int radius;
		int *circle;

	public:
		
		bool draw() {
			//draw circle on canvas
			return true;
		}
		
		~Ring() {	//Compliant : since Destructor is empty, being non virtual doesn't matter.
			
		}
	};



	class Polygon {

		int* canvas;
		
	public:

		virtual bool draw() {
			//render polygon
			return true;
		}

		virtual ~Polygon() {	//Compliant : since its base most class

		}
	};


	class Square : public Polygon {

		int *sides;

	public:

		bool draw() {
			//draw circle on canvas
			return true;
		}

		~Square() {		//Compliant: Destructor not empty & virtual
			delete circle;
		}
	};