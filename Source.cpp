
#include "Phone.h"
#include "Laptop.h"
#include "Bicycle.h"
#include "Hoverboard.h"
#include "MobileBag.h"
#include "Radio.h"

//#include "PersonalMobilityDevice.h"
//#include "PortableMobile.h"
int main()
{
    fflush;
    
    setlocale(LC_ALL, "Russian");
    I_Electronics* item[6];
           item[0] = new Phone(0.118,"phone");
        item[1] = new Laptop(1.6,1);
        item[2] = new Bicycle(10.1,28);
        item[3] = new HoverBoard(100.5,120.4,20000);
        item[4] = new Radio(120,"УКВ");
        item[5] = new MobileBag(6,2,14.23);
     bool exist = true;
    while (exist)
    {
        system("cls");
        cout << "Выберите товар: 1 - Телефон , 2 - Ноутбук, 3 - Велосипед, 4 - Летающая Доска, 5 - Радио, 6 - Самобеглая сумка,  0 чтобы выйти" << endl;
        int choice_item;
        cin >> choice_item;
        switch (choice_item)
        {
        case 1:
            item[0]->Show();
            break;

        case 2:
            item[1]->Show();
            break;

        case 3:
            item[2]->Show();
            break;

        case 4:
            item[3]->Show();
            break;

        case 5:
            item[4]->Show();
            break;
        case 6:
            item[5]->Show();
            break;

        case 0:
            exist = false;
            break;

        default:
            cout << "Выберите  товар от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete item[0];
    delete item[1];
    delete item[2];
    delete item[3];
    delete item[4];
    delete item[5];
    return 0;
}