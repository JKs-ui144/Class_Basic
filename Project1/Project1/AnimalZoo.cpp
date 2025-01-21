#include <iostream>
#include <string>
#include <random>
using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal(){}
};

class Dog : public Animal
{
private:
	string name;
	string sound;

public:
	Dog(string _name, string _sound)
	{
		name = _name;
		sound = _sound;
	}
	void makeSound() override
	{
		cout << name << "의 소리: " << sound << endl;
	}
};

class Cat : public Animal
{
private:
	string name;
	string sound;

public:
	Cat(string _name, string _sound)
	{
		name = _name;
		sound = _sound;
	}
	void makeSound() override
	{
		cout << name << "의 소리: " << sound << endl;
	}
};

class Cow : public Animal
{
private:
	string name;
	string sound;

public:
	Cow(string _name, string _sound)
	{
		name = _name;
		sound = _sound;
	}
	void makeSound() override
	{
		cout << name << "의 소리: " << sound << endl;
	}
};

Animal* createRandomAnimal() {

		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(1, 3);

		int randNum = dist(gen);

		switch (randNum)
		{
		case 1: {
			cout << "강아지가 추가되었습니다." << endl;
			return new Dog("강아지", "멍멍");
			break;
		}
		case 2: {
			cout << "고양이가 추가되었습니다." << endl;
			return new Cat("고양이", "야옹");
			break;
		}
		case 3: {
			cout << "송아지가 추가되었습니다." << endl;
			return new Cow("송아지", "음메");
			break;
		}
		default:
		return nullptr;
		
	}
}
class Zoo
{
private:
	Animal* animals[10] = {nullptr};
	int animalCount = 0;
public:
	void addAnimal(Animal* animal)
	{
		if (animalCount < 10) {
			animals[animalCount++] = animal;
		}
		else cout << "동물원이 꽉 찼습니다." << endl;
	}

	void performActions()
	{
		for (int i = 0; i < animalCount; i++) {
			animals[i]->makeSound();
		}
	}

	~Zoo() {
		for (int i = 0; i < animalCount; i++) {
			delete animals[i];
		}
	}
};

int main() {
	Animal* animals[3];
	animals[0] = new Dog("강아지", "멍멍");
	animals[1] = new Cat("고양이", "야옹");
	animals[2] = new Cow("송아지", "음메");

	for (int i = 0; i < 3; i++) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}

	Zoo zoo;
	zoo.addAnimal(createRandomAnimal());
	zoo.performActions();
	for (int i = 0; i < 10; i++) {
		zoo.addAnimal(createRandomAnimal());
	}
	zoo.performActions();
	return 0;
}