#include<stdio.h>
#include<string.h>
#include<stdbool.h> 
struct Todo
 {
	int id;
	char starDate[50];
	char endDate[50];
	char content[100];
	bool status; 
 }; 
struct Todo todoList[100];
int numberOfTodos = 2;
	 void displayMenu() {
    printf("************************MENU**************************\n");
    printf("1. In toan bo danh sach Todo co o trong mang todoList tren cung mot hang\n");
    printf("2. Thuc hien chuc nang them moi todo vao vi tri cuoi cung cua todoList\n");
    printf("3. Thuc hien chuc nang cap nhat thong tin cua mot todo\n");
    printf("4. Thuc hien chuc nang xoa mot todo\n");
    printf("5. Thuc hien chuc nang sap xep va in ra danh sach todoList da duoc sap xep\n");
    printf("*******************************************************\n");
}

void printTodoList() {
    printf("Danh sach Todo:\n");
    for (int i = 0; i < numberOfTodos; ++i) {
        printf("ID: %d, Noi dung: %s, Trang thai: %s\n", todoList[i].id, todoList[i].content,
               todoList[i].status ? "Hoan thanh" : "Chua hoan thanh");
    }
}
void addTodo() {
    struct Todo newTodo;
    printf("Nhap thong tin cho Todo moi:\n");
    printf("Noi dung: ");
    scanf("%s", newTodo.content);
    newTodo.id = ++numberOfTodos;
    newTodo.status = false;

    todoList[numberOfTodos - 1] = newTodo;
    printf("Todo moi da duoc them.\n");
}

void updateTodo() {
    char searchContent[100];
    printf("Nhap noi dung cua Todo can cap nhat: ");
    scanf("%s", searchContent);

    int foundIndex = -1;
    for (int i = 0; i < numberOfTodos; ++i) {
        if (strcmp(todoList[i].content, searchContent) == 0) {
            foundIndex = i;
            break;
        }
    }

