// masia.c ����

#include "name.h"

STATIC_VAR_TAG mapping ma_sname_m = ([
        "��"   : "sa",
        "��"   : "la",
        "��"   : "a",
        "��"   : "wu",
        "����" : "abi",
        "�Ǳ�" : "yabi",
        "����" : "youli",
        "�̢" : "kanda",
        "˼��" : "sige",
        "���" : "hengda",
        "�ڸ�" : "tengge",
        "���" : "foda",
        "����" : "sige",
        "ɳ��" : "shage", 
        "��³" : "palu",
        "����" : "kena",
        "Ħ��" : "moli",
        "����" : "ganya",
        "������" : "mamanke",
        "˹��̢" : "sikanda",
        "��˹³" : "masilu",
        "������" : "mankeya",
]);

STATIC_VAR_TAG mapping ma_pname_m = ([
        "Ĳ»" : "moli",
        "Ħ��" : "moke",
        "����" : "mandu",
        "����" : "youna",
        "ռ��" : "zhanke",
        "�п�" : "shangke",
        "����" : "fate",
        "����" : "xiuli",
        "껸�" : "haoge",
        "��ķ" : "damu",
        "��ķ" : "limu",
        "˹��" : "simu",
        "����" : "hante",
        "��ô" : "hanme",
        "��ķ" : "tamu",
        "��ķ" : "enmu",
        "����" : "haimu",
        "��ķ" : "ganmu",
        "˹����" : "simate",
        "������" : "hannali",
        "������" : "simanda",
        "������" : "yalida",
        "˹����" : "simanka",
        "���´�" : "feimuda",
]);

void generate_ma_name(object ob)
{
        string name, sname, pname, id1, id2;
        string *ks, *kp;

        ks = keys(ma_sname_m);
        kp = keys(ma_pname_m);
        sname = ks[random(sizeof(ks))];
        pname = kp[random(sizeof(kp))];
        id1 = ma_sname_m[sname];
        id2 = ma_pname_m[pname];        
        name = sname + pname;

        if (ob) ob->set_name(name, ({ id1 + " " + id2, id1, id2 }));
}
