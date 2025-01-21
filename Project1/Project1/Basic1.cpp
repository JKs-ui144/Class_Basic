#include <iostream>
using namespace std;

class IAnimal
{
public:
	virtual void SoundPlay() = 0;
	virtual void Walk() = 0;
};

class Dog : public IAnimal
{
private:
	string name;
	string sound;
	int hp;
public:
	Dog(string _name, string _sound, int _hp)
	{
		name = _name;
		sound = _sound;
		hp = _hp;
	}

	void Walk() override
	{
		cout << name << "°¡ ÅÍ¹÷ÅÍ¹÷ °È´Â´Ù." << endl;
	}

	void SoundPlay() override
	{
		cout << name << " : " << sound << endl;
	}
};

class Cat : public IAnimal
{
private:
	string name;
	string sound;
	int hp;
public:
	Cat(string _name, string _sound, int _hp)
	{
		name = _name;
		sound = _sound;
		hp = _hp;
	}

	void Walk() override
	{
		cout << name << "°¡ »ì±Ý»ì±Ý °È´Â´Ù." << endl;
	}

	void SoundPlay() override
	{
		cout << name << " : " << sound << endl;
	}
};

/*int main()
{
	IAnimal* dog = new Dog("°­¾ÆÁö", "¸Û¸Û", 100);
	IAnimal* cat = new Cat("°í¾çÀÌ", "¾ß¿Ë", 100);
	
	IAnimal* animals[2] = { dog,cat };
	for (int i = 0; i < 2; i++)
	{
		animals[i]->SoundPlay();
		animals[i]->Walk();
	}
	return 0;
}*/