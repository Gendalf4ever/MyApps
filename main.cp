#include <iostream>
#include <unistd.h>
#include <stdlib.h>
    std::string Words[15]={"Хорек","Парацетамол","Животное","Акселерометр","Вирус",
        "Гематома","Малокалиберный","Архивариус","Реставрация","Аналог",    "Рекреационный","Облагодетельствовать","Инкрустированный","Высокопревосходительство","Превысокомногорассмотрительствующий"};
int main(int argc, const char * argv[]) {
    int level;
    bool rightanswer=false;
    int wordscapcity;
    while (rightanswer!=true) {
       std::cout<<"Выберите уровень сложности:\n";
          sleep(1);
       std::cout<<"1-Легкий\n";
          sleep(1);
       std::cout<<"2-Средний\n";
        sleep(1);
       std::cout<<"3-Тяжелый\n";
        std::cin>>level;
        switch (level) {
            case 1:
                std::cout<<"Вы выбрали легкий уровень сложности\n";
                wordscapcity=5;
                sleep(1);
                rightanswer=true;
                break;
                case 2:
                std::cout<<"Вы выбрали средний уровень сложности\n";
                wordscapcity=10;
                sleep(1);
                  rightanswer=true;
                break;
            case 3:
                std::cout<<"Вы выбрали тяжелый уровень сложности\n";
                wordscapcity=15;
                sleep(1);
                  rightanswer=true;
                break;
            default:
                std::cout<<"Можно выбрать только один из перечисленных уровней сложности\n";
                system("clear");
                break;
        } //switch
    }//while
       system("clear");
    std::string hiddenwords[wordscapcity];
    std:: string answer[wordscapcity];
    srand(time(NULL));
    int randomnumber;
    for (int i=0; i<wordscapcity; i++) {
        randomnumber=rand()%15;
        hiddenwords[i]=Words[randomnumber];
    }
    sleep(1);
    std::cout<<"Запоминайте слова:\n";
    for (int i=0; i<wordscapcity; i++)
    {
        sleep(1);
        std::cout<<hiddenwords[i]<<"\n";
    }
      sleep(10);
       system("clear");
    std::cout<<"Теперь вводите через enter слова, которые помните\n";
    int score,wronganswerscapacity,answercapacity=wordscapcity;
    std::string wronganswers[wordscapcity];
    for (int i=0; i<wordscapcity; i++)
    {
        std::cout<<"Слов осталось: "<<answercapacity<<"\n";
        std::cin>>answer[i];
        if (answer[i]==hiddenwords[i])
                   score++;
        else
        {
            wronganswers[i]=answer[i];
            wronganswerscapacity++;
            
        };
        answercapacity--;
           } //for
    std::cout<<"Правильных слов: "<<score<<"\n";
    if (wronganswerscapacity!=0) {
        std::cout<<"Ваши неправильные ответы: \n";
        for (int i = wronganswerscapacity; i>0; i--)
            std::cout<<wronganswers[i]<<"\n";
    }
    return 0;
}
