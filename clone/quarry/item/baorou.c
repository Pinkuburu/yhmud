#include <ansi.h>

inherit COMBINED_ITEM;
#include "meat.h"

void create()
{
        set_name(NOR + WHT "����" NOR, ({ "bao rou", "bao", "rou" }));
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", NOR + WHT "����һ��ɢ�����������ı��⡣\n" NOR);
                set("base_unit", "��");
                set("base_value", 100);
        }
        setup();
        set_amount(1);
}
