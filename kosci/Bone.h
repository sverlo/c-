#pragma once
class Bone
{
public:
	Bone();
	~Bone();
	static int MakeThrow();
	static void SetPoint(int *);
	static int GetPoint() { return _point; }
	static void SetCounter(int val) { _counter = val; }
	static int GetCounter() { return _counter; }
	void SetThrowsResult(int i, int current) const { _throws[i] = current; }
	int * Bone::GetThrowsResult() const { return _throws; }
private:
	static int _point;
	static int _counter;
	int * _throws;
};

