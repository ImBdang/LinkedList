#include "linked_list.h"
#include "sinhvien.h"
#include "person.h"

int main(void) {
    //linked list cho sv
    LinkedList *list_sv = list_create();
    SinhVien *sv1 = createSinhVien("SV001", "Dinh Bach Dang", 20, 3.5);
    SinhVien *sv2 = createSinhVien("SV002", "Nguyen Van B", 15, 4.0);
    list_append(list_sv, sv1);
    list_append(list_sv, sv2);
    list_print(list_sv, sinhvien_print);

    //linked list cho person
    LinkedList *list_per = list_create();
    Person *per1 = createPersonal("Dinh Bach Dang", 20, 75, 170);
    Person *per2 = createPersonal("Nguyen Van A", 20, 65, 180);
    list_append(list_per, per1);
    list_append(list_per, per2);
    list_print(list_per, personal_print);

    list_destroy(list_sv, sinhvien_delete);
    list_destroy(list_per, personal_delete);
    return 0;
}
