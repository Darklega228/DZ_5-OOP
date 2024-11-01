#include <iostream>
#include <Windows.h>
using namespace std;

class Desklamp {
	unsigned short weight;
	unsigned short width;
	int Brightness;
	string Color;
	string Brand;
public:
	Desklamp() :Desklamp(5, 2, 4) {}
	/*SetDay(1);
	SetMonth(1);
	SetYear(2025);
}*/

	Desklamp(unsigned short weight, unsigned short width, int Brightness) {
		/*this->day = day;
		this->month = month;
		this->year = year;*/
		SetWeight(weight);
		SetWidth(width);
		SetBrightness(Brightness);
	}

	Desklamp& SetWeight(unsigned short);
	Desklamp& SetWidth(unsigned short);
	Desklamp& SetBrightness(int);

	unsigned short GetWeight() const;
	unsigned short GetWidth() const;
	int GetBrightness() const;

	void Print() const;
};

Desklamp& Desklamp::SetWeight(unsigned short weight) {
	if (weight >= 1 && weight <= 31)
		this->weight = weight;
	else throw "Было передано неверное значение в параметр d. Ожидается целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}
Desklamp& Desklamp::SetWidth(unsigned short width) {
	if (width >= 1 && width <= 12) this->width = width;
	else throw "Было передано неверное значение в параметр m. Ожидается целое число в диапазоне от 1 до 12 включительно.\n";
	return *this;
}
Desklamp& Desklamp::SetBrightness(int Brightness) {
	this->Brightness = Brightness;
	return *this;
}
unsigned short Desklamp::GetWeight() const {
	return this->weight;
}
unsigned short Desklamp::GetWidth() const {
	return this->width;
}
int Desklamp::GetBrightness() const {
	return this->Brightness;
}
void Desklamp::Print() const {
	cout << "Лампа " << this->weight << " кг, " << this->width << " ширина, " << this->Brightness << " яркость." << "\n";
}

class Laptop {
	unsigned short weightNout;
	unsigned short heightNout;
	int hertz;
	string ColorNout;
	string BrandNout;
public:
	Laptop() :Laptop(5, 2, 4) {}
	/*SetDay(1);
	SetMonth(1);
	SetYear(2025);
}*/

	Laptop(unsigned short weightNout, unsigned short heightNout, int hertz) {
		/*this->day = day;
		this->month = month;
		this->year = year;*/
		SetWeight(weightNout);
		SetHeight(heightNout);
		SetHertz(hertz);
	}

	Laptop& SetWeight(unsigned short);
	Laptop& SetHeight(unsigned short);
	Laptop& SetHertz(int);

	unsigned short GetWeight() const;
	unsigned short GetHeight() const;
	int GetHertz() const;

	void Print() const;
};

Laptop& Laptop::SetWeight(unsigned short weightNout) {
	if (weightNout >= 1 && weightNout <= 31)
		this->weightNout = weightNout;
	else throw "Было передано неверное значение в параметр d. Ожидается целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}
Laptop& Laptop::SetHeight(unsigned short heightNout) {
	if (heightNout >= 1 && heightNout <= 50) this->heightNout = heightNout;
	else throw "Было передано неверное значение в параметр m. Ожидается целое число в диапазоне от 1 до 12 включительно.\n";
	return *this;
}
Laptop& Laptop::SetHertz(int hertz) {
	this->hertz = hertz;
	return *this;
}
unsigned short Laptop::GetWeight() const {
	return this->weightNout;
}
unsigned short Laptop::GetHeight() const {
	return this->heightNout;
}
int Laptop::GetHertz() const {
	return this->hertz;
}
void Laptop::Print() const {
	cout << "Ноутбук " << this->weightNout << " кг, " << this->heightNout << " см, " << this->hertz << " герц." << "\n";
}

class Flashlight {
	unsigned short weightFlash;
	unsigned short heightFlash;
	int distance;
	string ColorFlash;
	string BrandFlash;
public:
	Flashlight() :Flashlight(5, 2, 4) {}
	/*SetDay(1);
	SetMonth(1);
	SetYear(2025);
}*/

	Flashlight(unsigned short weightFlash, unsigned short heightNout, int distance) {
		/*this->day = day;
		this->month = month;
		this->year = year;*/
		SetWeight(weightFlash);
		SetHeight(heightNout);
		SetDistance(distance);
	}

	Flashlight& SetWeight(unsigned short);
	Flashlight& SetHeight(unsigned short);
	Flashlight& SetDistance(int);

	unsigned short GetWeight() const;
	unsigned short GetHeight() const;
	int GetDistance() const;

	void Print() const;
};

Flashlight& Flashlight::SetWeight(unsigned short weightFlash) {
	if (weightFlash >= 1 && weightFlash <= 31)
		this->weightFlash = weightFlash;
	else throw "Было передано неверное значение в параметр d. Ожидается целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}
Flashlight& Flashlight::SetHeight(unsigned short heightFlash) {
	if (heightFlash >= 1 && heightFlash <= 50) this->heightFlash = heightFlash;
	else throw "Было передано неверное значение в параметр m. Ожидается целое число в диапазоне от 1 до 12 включительно.\n";
	return *this;
}
Flashlight& Flashlight::SetDistance(int distance) {
	this->distance = distance;
	return *this;
}
unsigned short Flashlight::GetWeight() const {
	return this->weightFlash;
}
unsigned short Flashlight::GetHeight() const {
	return this->heightFlash;
}
int Flashlight::GetDistance() const {
	return this->distance;
}
void Flashlight::Print() const {
	cout << "Фонарик " << this->weightFlash << " кг, " << this->heightFlash << " см, " << this->distance << " дистанция." << "\n";
}

class Ps3 {
	unsigned short weightPs3;
	unsigned short heightPs3;
	int games;
	string ColorPs3;
	string Model;
public:
	Ps3() :Ps3(5, 2, 4) {}
	/*SetDay(1);
	SetMonth(1);
	SetYear(2025);
}*/

	Ps3(unsigned short weightPs3, unsigned short heightPs3, int games) {
		/*this->day = day;
		this->month = month;
		this->year = year;*/
		SetWeight(weightPs3);
		SetHeight(heightPs3);
		SetGames(games);
	}

	Ps3& SetWeight(unsigned short);
	Ps3& SetHeight(unsigned short);
	Ps3& SetGames(int);

	unsigned short GetWeight() const;
	unsigned short GetHeight() const;
	int GetGames() const;

	void Print() const;
};

Ps3& Ps3::SetWeight(unsigned short weightPs3) {
	if (weightPs3 >= 1 && weightPs3 <= 31)
		this->weightPs3 = weightPs3;
	else throw "Было передано неверное значение в параметр d. Ожидается целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}
Ps3& Ps3::SetHeight(unsigned short heightPs3) {
	if (heightPs3 >= 1 && heightPs3 <= 50) this->heightPs3 = heightPs3;
	else throw "Было передано неверное значение в параметр m. Ожидается целое число в диапазоне от 1 до 12 включительно.\n";
	return *this;
}
Ps3& Ps3::SetGames(int games) {
	this->games = games;
	return *this;
}
unsigned short Ps3::GetWeight() const {
	return this->weightPs3;
}
unsigned short Ps3::GetHeight() const {
	return this->heightPs3;
}
int Ps3::GetGames() const {
	return this->games;
}
void Ps3::Print() const {
	cout << "Пс3 " << this->weightPs3 << " кг, " << this->heightPs3 << " см, " << this->games << " дистанция." << "\n";
}

class GrannyGame {
	unsigned short weightG;
	unsigned short heightG;
	int years;
	string Name;
	string placeofresidence;
public:
	GrannyGame() :GrannyGame(5, 2, 4) {}
	/*SetDay(1);
	SetMonth(1);
	SetYear(2025);
}*/

	GrannyGame(unsigned short weightG, unsigned short heightG, int years) {
		/*this->day = day;
		this->month = month;
		this->year = year;*/
		SetWeight(weightG);
		SetHeight(heightG);
		SetGames(years);
	}

	GrannyGame& SetWeight(unsigned short);
	GrannyGame& SetHeight(unsigned short);
	GrannyGame& SetGames(int);

	unsigned short GetWeight() const;
	unsigned short GetHeight() const;
	int GetGames() const;

	void Print() const;
};

GrannyGame& GrannyGame::SetWeight(unsigned short weightG) {
	if (weightG >= 1 && weightG <= 150)
		this->weightG = weightG;
	else throw "Было передано неверное значение в параметр d. Ожидается целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}
GrannyGame& GrannyGame::SetHeight(unsigned short heightG) {
	if (heightG >= 1 && heightG <= 200) this->heightG = heightG;
	else throw "Было передано неверное значение в параметр m. Ожидается целое число в диапазоне от 1 до 12 включительно.\n";
	return *this;
}
GrannyGame& GrannyGame::SetGames(int years) {
	this->years = years;
	return *this;
}
unsigned short GrannyGame::GetWeight() const {
	return this->weightG;
}
unsigned short GrannyGame::GetHeight() const {
	return this->heightG;
}
int GrannyGame::GetGames() const {
	return this->years;
}
void GrannyGame::Print() const {
	cout << "Бабка " << this->weightG << " кг, " << this->heightG << " см, " << this->years << " дистанция." << "\n";
}

int main() {
	setlocale(0, "");
	Desklamp a;
	Laptop b;
	Flashlight c;
	Ps3 d;
	GrannyGame e;


	a.SetWeight(5);
	a.SetWidth(2);
	a.SetBrightness(4);
	a.Print();

	b.SetWeight(4);
	b.SetHeight(30);
	b.SetHertz(4);
	b.Print();

	c.SetWeight(1);
	c.SetHeight(15);
	c.SetDistance(4);
	c.Print();

	d.SetWeight(2);
	d.SetHeight(1);
	d.SetGames(3);
	d.Print();

	e.SetWeight(50);
	e.SetHeight(168);
	e.SetGames(70);
	e.Print();
}