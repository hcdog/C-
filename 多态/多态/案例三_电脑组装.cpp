#include <iostream>
#include<string>
using namespace std;

class Cpu//抽象cpu
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
//抽象显卡
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

class Computer//compute不继承任何组件，用来接受部件，实现组装和工作
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
		cout << "CPU开始工作" << endl;
	}
private:

};

class Intelvideo :public VideoCard
{
public:
	virtual void show() {
		cout << "显卡开始工作" << endl;
	}
private:

};
class IntelMermory :public Mermory
{
public:
	virtual void storage() {
		cout << "内存开始工作" << endl;
	}
private:

};
//联想
class Levelcpu :public Cpu
{
public:
	virtual void calc() {
		cout << "LevelCPU开始工作" << endl;
	}
private:

};

class Levelvideo :public VideoCard
{
public:
	virtual void show() {
		cout << "Level显卡开始工作" << endl;
	}
private:

};
class LevelMermory :public Mermory
{
public:
	virtual void storage() {
		cout << "Level内存开始工作" << endl;
	}
private:

};

void test1() {
	//第一台电脑，生产部件
	Cpu *cpu1 = new Intelcpu;//Intel的CPU
	VideoCard *video1 = new Levelvideo;//联想的显卡？？？
	Mermory *mermory1 = new IntelMermory;//intel内存
	Computer *computer1 = new Computer(cpu1, video1, mermory1);//组装电脑
	//工作
	computer1->work();//想要释放内存，应该在compute的析构函数中释放
	delete computer1;
	//电脑二
	Computer *computer2 = new Computer(new Intelcpu, new Intelvideo, new IntelMermory);//组装电脑
	//工作
	computer2->work();//想要释放内存，应该在compute的析构函数中释放
	delete computer2;
}
void main() {
	test1();//正常工作
}
