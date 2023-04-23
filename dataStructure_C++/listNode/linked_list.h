/**
 * @file listNode.h
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Singal Linked List ��V�쵲��C
 * @details list of data structure
 */

#include <iostream>

using namespace std;


// ��@������A��V�쵲��C
struct linkedList {
    int value;  // ������
    linkedList *next;  // �����U�@�Ӹ`�I (�Y�S���A���ŭ�)
};


// �h����ơA��V�쵲��C
// �H�ǥ͸�Ƭ��Ҥl
struct multiData_LinkedList {
    int age;  // �~��
    char *sex;  // �ʧO
    char *name;  // �m�W

    
    // ����: �ƾǡB�q�����
    float math_score;
    float computer_science;
    
    // �x�s�U�@�Ӹ`�I
    multiData_LinkedList *next;
};

// source: struct multiData_LinkedList
typedef multiData_LinkedList std_List;


void linkedList_Example();
void printNode(linkedList *current);


// ��V�쵲��C�d�� 1 (���׫��w)
void linkedList_Example() {
    int length, data;
    cout<<"Max Length: ";
    cin>>length;
    cout<<"data: ";
    cin>>data;

    struct linkedList *head = new linkedList;

    head -> value = data;   // �إ� �Y�`�I
    head -> next = NULL;   // �Ĥ@�Ӹ`�I����

    // �إ߫���`�I
    struct linkedList *current = head;   // �ثe������@�`�I�A�����V head �`�I
    for (int i = 0; i < length - 1; i++) {
        cout<<"data: ";
        cin>>data;

        current -> next = new linkedList;   // �إ߷s�`�I
        current = current -> next;   // �{�b���V����m

        current -> value = data;   // �������s�`�I ������
        current -> next = NULL;   // �إߧ��A�����쵲��C
    }
    cout<<"-------------------"<<endl;

    cout<<"print linked List"<<endl;
    printNode(head);
}

// �L ��V�쵲��C (������)
void printNode(linkedList *current) {
    while (current != NULL) {
        cout<<"data: "<<current -> value<<endl;
        current = current -> next;
    }
    cout<<endl;
}



// �H�h��쬰�Ҥl
class MultiDataList {

private:
    // �ŧi�Y�`�I
    std_List *head;

public:
    // Constructor �غc�l�B�غc�禡�B�سy��
    // �إ߸`�I
    MultiDataList() {
        this->head = NULL;
    }
    // destructor �Ѻc�l�B�Ѻc�禡�B�}�a��
    // ����쵲��C�A�Ҧ��`�I��������
    ~MultiDataList() {
        std_List *current = this->head;
        while (current) {
            std_List *temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    // �L���w���� �r��
    void printString(char *str);
    // �L���w���� �r��
    void printString(string str);
    // ����
    void printNode();

    // (�~����)
    // �L���w���� �r��
    static void printString_out(char *str) {
        int i = 0;
        while (str[i] != '\0') {
            cout<<str[i];
            i++;
        }
        cout<<endl;
    }
    // (�~����)
    // �L���w���� �r��
    static void printString_out(string str) {
        int i = 0;
        while (str[i] != '\0') {
            cout<<str[i];
            i++;
        }
        cout<<endl;
    }

    // ���o�Y�`�I
    std_List *get_headNode() {
        if (this->head != NULL) {
            return this->head;
        }
        else {
            return NULL;
        }
    }


    // �q���ݥ[�J
    void addBack(char *name, char *sex, int age, float math_score, float cs_score) {
        std_List *new_node = new std_List;  // �إ߷s�`�I
        // ������
        new_node->name = name;
        new_node->sex = sex;
        new_node->age = age;
        new_node->math_score = math_score;
        new_node->computer_science = cs_score;
        new_node->next = NULL;

        // ��`�I���šA�s�`�I���Y�`�I
        if (this->head == NULL) {
            // cout<<"newNode"<<endl;
            this->head = new_node;
        }

        // �U�@�`�I���F��A���۸`�I����ݡA�K�[�s�`�I
        else {
            // cout<<"has next node"<<endl;
            std_List *current = this->head;
            
            // �����Y�`�I�A����U�@�Ӹ`�I�O�S���F�謰��
            while (current->next != NULL) {
                current = current->next;
            }
            // �K�[�s�`�I
            current->next = new_node;
        }
    }

    // �[��e�Y (�b�Y�`�I�[�\�A�s�`�I���Y�`�I)
    void addFront(char *name, char *sex, int age, float math_score, float cs_score) {
        std_List *new_node = new std_List;
        new_node->name = name;
        new_node->sex = sex;
        new_node->age = age;
        new_node->math_score = math_score;
        new_node->computer_science = cs_score;

        // �s�`�I�����Y�`�I
        new_node->next = this->head;
        this->head = new_node;
    }

    // ���J�`�I
    void insert(char *str_data, int age=0, float score=0) {
        string hash_map[] = {"name", "sex", "age", "math", "cs"};

        string option = "";        
        int i = 0;
        while (str_data[i] != '\0') {
            option += str_data[i];
            i++;
        }
        
        // int length = end(hash_map) - begin(hash_map);
        // for (int j = 0; j < length; j++) {
        //     if (option == hash_map[j]) {
        //         cout<<"true"<<endl;
        //         break;
        //     }
        // }

    }

    // �R���Y�`�I
    bool deleteFront() {
        // �p�G��e���Y�`�I�A������
        if (this->head == NULL) {
            return false;
        }

        std_List *temp = this->head;   // ��e���Y�`�I�A�Ȧs�_��
        this->head = this->head->next;   // ���Y�`�I����}�A�令�U�@�Ӹ`�I�A��@�Y�`�I
        
        // ���� "�w�g�Ȧs�n" �B "�P��C���_�pô" ���`�I
        delete temp;
        return true;
    }

    // �R���̫�@�Ӹ`�I
    bool deleteBack() {
        if (this->head == NULL) {
            return false;
        }

        // �w�g�S���U�@�Ӹ`�I�A�u�ѤU�Y�`�I
        if (this->head->next == NULL) {
            delete this->head;  // �����Y�`�I
            head = NULL;  // �⥦�]�� NULL (�^���l���A)

            return true;
        }

        // �@��������ݡA�A�R�� (����O����)
        std_List *current = this->head;

        // �u�|����ݪ��e�@�Ӹ`�I ( node_N-1(data)| node_N-1(next) ����m )
        // ex: head(data)| head(next) --> node_1(data)| node_1(next) --> ...
        //     ... --> node_N-1(data)| node_N-1(next) --> node_N(data)| node_N(next) --> NULL
        while (current->next->next != NULL) {
            current = current->next;
        }

        delete current->next;
        current->next = NULL;
        return true;
    }

};

void MultiDataList::printString(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        cout<<str[i];
        i++;
    }
    cout<<endl;
}
void MultiDataList::printString(string str) {
    int i = 0;
    while (str[i] != '\0') {
        cout<<str[i];
        i++;
    }
    cout<<endl;
}


void MultiDataList::printNode() {
    std_List *current = this->head;
    int i = 1;
    
    while (current->next != NULL) {
        cout<<"student "<<i<<":"<<endl;
        cout<<"name: ";
        this->printString(current->name);
        cout<<"sex: ";
        this->printString(current->sex);
        cout<<"age: "<<current->age<<endl;
        cout<<"n: "<<current->age<<endl;
        cout<<"Math score: "<<current->math_score<<endl;
        cout<<"Computer Science (CS) score: "<<current->computer_science<<endl;

        i++;
        current = current->next;
    }
}




// �쵲��C�A��������� (for binary tree)
struct doubleNode {
    int integer;

    doubleNode *left;
    doubleNode *right;
};


class DoubleLinkedList {
private:
    doubleNode *node;
public:
    DoubleLinkedList() {
        this->node = NULL;
    }
    // ~DoubleLinkedList() {
        
    // }

};




