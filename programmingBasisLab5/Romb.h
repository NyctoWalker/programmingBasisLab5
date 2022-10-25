#pragma once
#include <iostream>

using namespace std;

//����� ���� ����� �������� � ������ ����, ��� ��� ����� ����������� �� ������ �����
class Point
{
public:
	double x;
	double y;
};

class Romb
{
private:
	Point A, B, C, D;
	Point AC; //��� ������������
	Point BD; //��� ������������
	double dAC=0; //���������
	double dBD=0;

public:
	bool isRomb = 0;
	void CreateRomb(); //���� �������� ��� �����
	void CalculateRomb(); //������� 4 ����� ����� � �������
	void PrintRomb();
	void MoveRomb();
	void CheckCross();
	void CheckPoint(Point check_point);
};