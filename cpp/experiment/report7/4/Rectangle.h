//Rectangle.h
class Rectangle{
private:
	float len, wid;
public:
	void set(float length, float width);
	float getLen();
	float getWid();
	float area() const;
	float perim() const;
};
