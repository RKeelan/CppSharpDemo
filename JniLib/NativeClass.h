#pragma once
class NativeClass
{
public:
	float number;

	int GetInt() { return prv_int; }
	void SetInt(int value) { prv_int = value; }

	int Square(int n) { return n * n; }
	float Halve(float n) { return n / 2; }

private:
	int prv_int;
};

