/**
 * @file timer.cpp
 * @author your name (you@domain.com)
 * @brief ����ɶ����B��
 * @version 0.1
 * @date 2023-01-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <ctime>

using namespace std;


int main(int argc, char const *argv[]) {
    // �Ĥ@�ؤ覡
    // time_t t1 = time(NULL);
    // cout<<t1<<endl;
    // char *time_msg = ctime(&t1);
    // cout<<time_msg<<endl;

    // �ĤG�ؤ覡
    // time_t t2;
    // time(&t2);
    // char *msg_1 = ctime(&t2);
    // cout<<msg_1<<endl;

    // �ĤT�ؤ覡
    // time_t *t3 = new time_t;
    // time(t3);
    // cout<<*t3<<endl;
    // char *msg_2 = ctime(t3);
    // cout<<msg_2<<endl;

    /*
        �榡�Ʈɶ�
    
        struct tm �ϥΤ覡
     */

    // tm t = {0};   // �� tm �����Ҧ��� ���]�� 0
    // t.tm_year = 2023;
    // t.tm_mon = 2;
    // t.tm_mday = 1;
    // cout<<t.tm_year<<"/"<<t.tm_mon<<"/"<<t.tm_mday<<endl;

    // �榡�ƹ�@: ���o�{�b�ɶ�
    time_t timer = time(NULL);
    struct tm *p_time = localtime(&timer);

    // ��@���X�A�n�A�ɨ��~�t
    // cout<<p_time->tm_year + 1900<<"/"<<p_time->tm_mon+1<<"/"<<p_time->tm_mday
    //     <<"  �g"<<p_time->tm_wday<<endl
    //     <<p_time->tm_hour<<" : "<<p_time->tm_min<<" : "<<p_time->tm_sec;

    // �H "�r��" �Φ���X�A�~�t�����|�۰ʸɨ�
    char *result = new char[30];
    strftime(result, 30, "�{�b: %Y/%m/%d   %H:%M:%S", p_time);
    cout<<result<<endl;

    // ��l�ƩҦ����
    // struct tm startDate = {0};
    
    // startDate.tm_year = 2023;
    // startDate.tm_mon = 2 - 1;
    // startDate.tm_mday = 28;

    // cout<<"startDate: "<<startDate.tm_year<<"/"<<startDate.tm_mon<<"/"<<startDate.tm_mday<<endl;

    // struct tm endDate = {0};
    // endDate.tm_year = startDate.tm_year;
    // endDate.tm_mon = startDate.tm_mon;
    // endDate.tm_mday = startDate.tm_mday + 3;
    // // endDate.tm_mday = startDate.tm_mday + 4;    // �ܦ��n���@���i��

    // cout<<"endDate: "<<endDate.tm_year<<"/"<<endDate.tm_mon<<"/"<<endDate.tm_mday<<endl;

    // time_t endTime = mktime(&startDate);
    // endTime += 86400 * 5;
    // struct tm *endDate = localtime(&endTime);
    
    // cout<<"endDate: "<<endDate->tm_year + 1900<<"/"<<endDate->tm_mon + 1<<"/"<<endDate->tm_mday<<endl;


    return 0;
}










