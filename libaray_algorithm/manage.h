/*
    �m�� (CLI)

    �޲z�ϰ�
 */

#include <iostream>
#include <vector>

using namespace std;



template<typename dtype>
class Libaray {
    private:
        vector<dtype> total_books;   // �`�]��
        vector<dtype> borrow_record;   // �ɥX����
        vector<dtype> return_record;   // �ٮѰO��
        int now_Quantity = 0;   // ��e�Ѿl���y�q

        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------
        
        // �O�_�v�s�J
        bool isExist(dtype input) {
            int left = (int) total_books.size() / 2;
            int right = left + 1;

        }


    public:
        Libaray(int default_quantity=100) {
            this->quantity = default_quantity;
        }

        // �`�]�üƶq
        int total_quantity() const { return this->total_books.size(); }
        
        // �C�X�Ҧ����y (�t�ɾ\�X�h)�A�C����X�A�D���/��榡
        void allBooks() const;
        
        // �C�X�Ҧ����y (�t�ɾ\�X�h)�A���/��榡��X
        void formStyle();

        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------
        // -----------------------------------------------------------------------------------

        // �楻�W�[
        void addBook(dtype book);

        // �h���W�[
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



