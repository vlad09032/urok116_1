/*
�������� ����� Ball, ������� ������ ����� ��������� ��� �������� ����������-����� �� ����������
�� ���������:

   m_color (Red);

   m_radius (20.0).

� ������ Ball ������ ���� ��������� ������������:

   ��� ������������ �������� ������ ��� m_color;

   ��� ������������ �������� ������ ��� m_radius;

   ��� ������������ �������� � ��� m_radius, � ��� m_color;

   ��� ������������ ��������, ����� �������� �� ������������� ������.

�� ����������� ��������� �� ��������� ��� �������������. �������� ��� ���� ������� ��� ������
����� (m_color) � ������� (m_radius) ���� (������� ������ Ball).

b) ������ �������� ��� ��� �� ����������� ������� � �������������� ������������� � �����������
�� ���������. ������������ ������������ ��� ����� ������ �������������.
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