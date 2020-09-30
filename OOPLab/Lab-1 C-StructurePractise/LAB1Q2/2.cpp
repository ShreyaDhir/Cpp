#include<iostream>

struct Student {
    private:
    int roll_no, totalmarks;
    float percentage;
    char name[100];
    int marks[5];

    public:
    void input() {
        totalmarks=0;
        std::cin >> name >> roll_no;
        for (int i = 0; i < 5; i++)
        {
            std::cin >> marks[i];
        }

    }

    void totalMarks() {
        for (int i = 0; i < 5; i++)
        {
            totalmarks+=marks[i];
        }
        percentage=(totalmarks/500)*100;
    }

    int get_roll_no() {
        return roll_no;
    }

    void range(Student* s, float lr, float ur) {
        if(s->percentage > lr && s->percentage < ur) {
            s->Display();
        }
    }

    void Display() {
        // Code likhle yaha display ka
        
    }
};

int main() {
    struct Student* s;
    int n;
    std::cin >> n;
    s=new Student[n];
    for (int i = 0; i < n; i++)
    {
        (s+i)->input();
    }
    for (int i = 0; i < n; i++)
    {
        s->totalMarks();
    }

    int roll_number;
    std::cin >> roll_number;

    for (int i = 0; i < n; i++)
    {
        if((s+i)->get_roll_no() == roll_number) {
            (s+i)->Display();
        }
    }

    int lr, ur;
    std::cin >>lr >>ur;
    for (int i = 0; i < n; i++)
    {
        s->range(s, lr, ur);
    }

    return 0;
}
