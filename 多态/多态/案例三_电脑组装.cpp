#include <iostream>
#include<string>
using namespace std;

class Cpu//����cpu
{
public:
	Cpu();
	~Cpu();
	virtual void calc() = 0;

private:

};

Cpu::Cpu()
{
}

Cpu::~Cpu()
{
}
//�����Կ�
class VideoCard
{
public:
	VideoCard();
	~VideoCard();
	virtual void show() = 0;
private:

};

VideoCard::VideoCard()
{
}

VideoCard::~VideoCard()
{
}

class Mermory
{
public:
	Mermory();
	~Mermory();
	virtual void storage() = 0;
private:

};

Mermory::Mermory()
{
}

Mermory::~Mermory()
{
}

class Computer//compute���̳��κ�������������ܲ�����ʵ����װ�͹���
{
public:
	Computer(Cpu *cpu, VideoCard *v, Mermory *m);
	~Computer();
	Cpu *cpu;
	VideoCard *v;
	Mermory *m;
	void work() {
		cpu->calc();
		v->show();
		m->storage();
	}
private:

};

Computer::Computer(Cpu *cpu, VideoCard *v, Mermory *m)
{
	this->cpu = cpu;
	this->m = m;
	this->v = v;
}

Computer::~Computer()
{
	if (cpu != NULL) {
		delete cpu;
		cpu = NULL;
	}
	
	if (v != NULL) {
		delete v;
		v = NULL;
	}
	if (m != NULL) {
		delete m;
		m = NULL;
	}
}

class Intelcpu:public Cpu
{
public:
	virtual void calc() {
		cout << "CPU��ʼ����" << endl;
	}
private:

};

class Intelvideo :public VideoCard
{
public:
	virtual void show() {
		cout << "�Կ���ʼ����" << endl;
	}
private:

};
class IntelMermory :public Mermory
{
public:
	virtual void storage() {
		cout << "�ڴ濪ʼ����" << endl;
	}
private:

};
//����
class Levelcpu :public Cpu
{
public:
	virtual void calc() {
		cout << "LevelCPU��ʼ����" << endl;
	}
private:

};

class Levelvideo :public VideoCard
{
public:
	virtual void show() {
		cout << "Level�Կ���ʼ����" << endl;
	}
private:

};
class LevelMermory :public Mermory
{
public:
	virtual void storage() {
		cout << "Level�ڴ濪ʼ����" << endl;
	}
private:

};

void test1() {
	//��һ̨���ԣ���������
	Cpu *cpu1 = new Intelcpu;//Intel��CPU
	VideoCard *video1 = new Levelvideo;//������Կ�������
	Mermory *mermory1 = new IntelMermory;//intel�ڴ�
	Computer *computer1 = new Computer(cpu1, video1, mermory1);//��װ����
	//����
	computer1->work();//��Ҫ�ͷ��ڴ棬Ӧ����compute�������������ͷ�
	delete computer1;
	//���Զ�
	Computer *computer2 = new Computer(new Intelcpu, new Intelvideo, new IntelMermory);//��װ����
	//����
	computer2->work();//��Ҫ�ͷ��ڴ棬Ӧ����compute�������������ͷ�
	delete computer2;
}
void main() {
	test1();//��������
}
