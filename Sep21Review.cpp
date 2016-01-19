#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
struct DogStruct;

class Dog {
//private:
public:
    string name;
    string breed;
    int height;
    int weight;
    int count;
    DogStruct *dogstruct;
    void test() { count = 0; cout << count << endl; }
    string getName();
    string getBreed();
    Dog(string name, string breed) : name(name), breed(breed) {}
};



string Dog::getName(){
    return name;
}

string Dog::getBreed(){
    return breed;
}

struct DogStruct {
    const char *name;
    const char *breed;
    int height;
    int weight;
};

void getDogInfo(struct DogStruct theDog){
    printf(" Name %s\n", theDog.name);
    printf(" Breed %s\n", theDog.breed);
}

int main(){
    Dog d("test1","test2");
    cout << d.getName() << endl;
    Dog *dog = new Dog("Tippy", "spoodle");
    Dog *dog1 = new Dog("Dodo", "cocker spaniel");
    Dog *dog2 = new Dog("Big", "saint bernard");
    Dog *dog3 = new Dog("Jean", "sheperd");
    cout << dog->getName() << endl;
    cout << dog->getBreed() << endl;
    Dog *dd = dog3;
    cout << dd->getName() << endl;

    DogStruct thedog = {"Dodo","cocker spaniel", 5, 15}; //intializer struct
    getDogInfo(thedog);

    DogStruct thedog1 = (DogStruct) thedog;
    cout << thedog1.name << endl;
    DogStruct *thedog2 = (DogStruct *) &thedog;
    cout << thedog2->name << endl;

    Dog t("Hobo", "sheperd");  //cast class into struct
    cout << t.getName() << endl;
    t.test();
                                                //convert class to struct
    DogStruct *dogstruct = (DogStruct *)dog;    //cast class into struct
    cout << dog->getName() << endl;
    dogstruct->name = "Tippy Tran";
    cout << dogstruct->name << endl;

    printf("%s\n", dog->getName().c_str());
    cout << dog->getName() << endl;
                                                //convert struct to class
//    Dog *dogclass = (Dog *)dogstruct;
    return 0;
}
