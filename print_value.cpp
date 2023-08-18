// #include <iostream>   // c++ 標準函式庫
// using namespace std;

#include <stdio.h>   // c 標準函式庫
#include <string.h>


struct Customer {
    int id; 
    char *name;
    double rate;  // 年利率
    int years;   // 投資年數
    double initial_amount;   // 本金 (初始金額)
    double total_amount;
};


void sort(struct Customer *customer, int len);

 
int main(int argc, char const *argv[]) {

    // 原本資料
    int id[5] = {5, 2, 3, 1, 4};
    int years[5] = {13, 10, 5, 6, 12};
    double rate[5] = {0.001, 0.02, 0.015, 0.025, 0.015};
    double initial_amount[5] = {15000.0, 3000.0, 2000.5, 350.1, 100.3};
    double total_amount[5] = {15196.17, 3656.98, 2155.11, 406.01, 119.92};
    // char *customer_5 = "Evanka";
    // char *customer_2 = "Ted";
    // char *customer_3 = "Jack";
    // char *customer_1 = "Mary";
    // char *customer_4 = "John";

    char *name[5] = {"Evanka", "Ted", "Jack", "Mary", "John"};


    Customer customer[5];
    for (int i = 0; i < 5; i++) {
        customer[i].id = id[i];

        // 包含結尾字元 => '\0'
        if (strlen(name[i]) + 1 <= 20) {   // strlen( const char* ) => 取字串長度 (不含 '\0')
            customer[i].name = name[i];
        }
        customer[i].rate = rate[i];
        customer[i].years = years[i];
        customer[i].initial_amount = initial_amount[i];
        customer[i].total_amount = total_amount[i];
    }

    sort(customer, 5);

    printf("descending order:\n");
    for (int i = 0; i < 5; i++) {
        // c leng
        printf(
            "id: %d\nname: %s\nrate: %f\nyears %d\ninitial_amount: %f\ntotal_amount: %f\n",
            customer[i].id, customer[i].name, customer[i].rate, customer[i].years,
            customer[i].initial_amount, customer[i].total_amount
        );
        printf("-----------------------");

        // c++
        // cout<<customer[i].id<<endl;
        // cout<<customer[i].name<<endl;
        // cout<<customer[i].rate<<endl;
        // cout<<customer[i].years<<endl;
        // cout<<customer[i].initial_amount<<endl;
        // cout<<customer[i].total_amount<<endl;

        // cout<<"-----------------------"<<endl;
    }

    
    return 0;
}

void sort(struct Customer *customer, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {

            // 用 總金額 作排序條件
            if (customer[i].total_amount < customer[j].total_amount) {
                int temp_id = customer[i].id;
                int temp_years = customer[i].years;
                char *temp_name = customer[i].name;
                double temp_rate = customer[i].rate;
                double temp_initial = customer[i].initial_amount;
                double temp_total = customer[i].total_amount;

                customer[i].id = customer[j].id;
                customer[i].years = customer[j].years;
                customer[i].name = customer[j].name;
                customer[i].rate = customer[j].rate;
                customer[i].initial_amount = customer[j].initial_amount;
                customer[i].total_amount = customer[j].total_amount;

                customer[j].id = temp_id;
                customer[j].years = temp_years;
                customer[j].name = temp_name;
                customer[j].rate = temp_rate;
                customer[j].initial_amount = temp_initial;
                customer[j].total_amount = temp_total;
            }
        }
    }
}


