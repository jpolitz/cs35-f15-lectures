// Class _declaration_

class Posn {
  private:
    float x, y;

  public:
    void print();
    void print2();

    Posn();  // constructor, no arguments
    Posn(float x, float y);  // constructor with arguments
    ~Posn(); // destructor
};

