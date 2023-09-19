const unsigned THRESHOLD = 18;

class Person
{
    private:
        unsigned age;
        const char* name;
    public:
        Person(unsigned age, const char* name);
        bool IsAdult();
        const char* Name();
};