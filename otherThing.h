/*
    機會 與 命運，後有情境贛話 選擇題
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void chance_or_destiny(int score);
void result(short option, bool choose_flag /* 事件選擇 */);

void chance_or_destiny(int score) {
    srand(time(0));

    short chance = 0, destiny = 0;

    for (int i = 0; i < score; i++) {
        int random = rand() % 6 + 1;

        if (random == 1 || random == 3 || random == 5) {
            chance++;
        }
        else {
            destiny++;
        }
    }

    char targetChance[] = "幫你引導到了，\"機會\"";
    char targetDestiny[] = "幫你引導到了，\"命運\"";

    short option;
    if (chance > destiny) {
        cout<<targetChance<<endl;
        cout<<"3 個選項，選擇 1 個事件，輸入選項: 1 ~ 3 (會蠻好玩的)"<<endl;
        cout<<"(1) 繼續保持下去"<<endl<<"(2) 砍掉重練，重新再來"<<endl<<"(3) 使用人生重來槍"<<endl;
        cout<<"=> ";
        cin>>option;
        
        result(option, true);
    }
    else {
        cout<<targetDestiny<<endl;
    }
}

void result(short option, bool choose_flag /* 事件選擇 */) {
    if (choose_flag == true) {
        /* 機會 */
        bool flag = true;
        while (flag) {
            switch (option) {
                case 1:
                    cout<<"加油 !"<<endl;
                    flag = false;
                    break;
                case 2:
                    cout<<"辛苦了 !"<<endl;
                    flag = false;
                    break;
                case 3:
                    cout<<"這裡沒有賣這種東西，去找哆啦A夢要......"<<endl;
                    for (int i = 0; i < 5; i++) {
                        cout<<endl<<endl;
                    }
                    cout<<"多啦A夢 完結 !"<<endl;
                    flag = false;
                    break;

                default:
                    cout<<"欸嘿~ 亂答喔~~"<<endl;
                    flag = true;
                    break;
            }
        }
    }
    else {
        /* 命運 */
    }
}


