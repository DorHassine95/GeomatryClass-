#pragma once
class Point
{
private:
	int _x;
	int _y;
public:
	int getY() const;
	int getX() const;
	void setX(int x = 0);
	void setY(int y = 0);
	void PrintPoint() const;
	void setPoint(int,int);
	Point* getAddress() {
		return this;
	}
	void shiftX(int);
	void shiftY(int);
	void shiftPoint(int,int);
	Point & inc(int ,int);
	Point(const Point& other);
	bool equal(const Point & other) const;
	~Point();
	};

