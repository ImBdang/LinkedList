#include "linked_list.h"
#include "sinhvien.h"

int main(void) {
    LinkedList *list = list_create();

    SinhVien *sv = createSinhVien("SV001", "Dinh Bach Dang", 20, 3.5);
    list_append(list, sv);

    list_print(list, sinhvien_print);

    list_destroy(list, sinhvien_delete);
    return 0;
}
