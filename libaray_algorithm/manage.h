/*
    練習 (CLI)

    管理區域
 */

#include <iostream>
#include <vector>

using namespace std;



template<typename dtype>
class Libaray {
    private:
        vector<dtype> total_books;   // 總館藏
        vector<dtype> borrow_record;   // 借出紀錄
        vector<dtype> return_record;   // 還書記錄
        int now_Quantity = 0;   // 當前剩餘書籍量

        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------
        
        // 是否己存入
        bool isExist(dtype input) {
            int left = (int) total_books.size() / 2;
            int right = left + 1;

        }


    public:
        Libaray(int default_quantity=100) {
            this->quantity = default_quantity;
        }

        // 總館藏數量
        int total_quantity() const { return this->total_books.size(); }
        
        // 列出所有書籍 (含借閱出去)，列表式輸出，非表格/表單式
        void allBooks() const;
        
        // 列出所有書籍 (含借閱出去)，表格/表單式輸出
        void formStyle();

        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------

        // 單本上架
        void addBook(dtype book);

        // 多本上架
        void multi_AddBooks(dtype *books);

};


template<typename dtype>
void Libaray<dtype>::allBooks() const {
    // 
}

template<typename dtype>
void Libaray<dtype>::formStyle() {
    // 
}

template<typename dtype>
void Libaray<dtype>::addBook(dtype book) {
    this->total_books.push_back(book);
}

template<typename dtype>
void Libaray<dtype>::multi_AddBooks(dtype *books) {

}



