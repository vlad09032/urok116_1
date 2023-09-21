/*
Ќапишите класс Ball, который должен иметь следующие две закрытые переменные-члены со значени€ми
по умолчанию:

   m_color (Red);

   m_radius (20.0).

¬ классе Ball должны быть следующие конструкторы:

   дл€ установлени€ значени€ только дл€ m_color;

   дл€ установлени€ значени€ только дл€ m_radius;

   дл€ установлени€ значений и дл€ m_radius, и дл€ m_color;

   дл€ установлени€ значений, когда значени€ не предоставлены вообще.

Ќе используйте параметры по умолчанию дл€ конструкторов. Ќапишите еще одну функцию дл€ вывода
цвета (m_color) и радиуса (m_radius) шара (объекта класса Ball).

b) “еперь обновите ваш код из предыдущего задани€ с использованием конструкторов с параметрами
по умолчанию. ѕостарайтесь использовать как можно меньше конструкторов.
*/
#include<iostream>
#include<string>

class Ball
{
private:
	std::string m_color;
	double m_radius;
public:

	Ball(std::string color = "Red", double radius = 20.0)
	{
		m_color = color;
		m_radius = radius;
	}
	Ball(double radius)
	{
		m_radius = radius;
		m_color = "Red";
	}
	void print() { std::cout << m_color<<" radius " << m_radius << std::endl; };
};

int main()
{
	Ball def;
	def.print();

	Ball black("black");
	black.print();

	Ball thirty(30.0);
	thirty.print();

	Ball blackThirty("black", 30.0);
	blackThirty.print();

	return 0;
}