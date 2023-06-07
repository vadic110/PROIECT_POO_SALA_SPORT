#ifndef MEMBER_H
#define MEMBER_H

#include "declaration.h"
#include "count.h"

class member : public count, public declaration
{
public:
    declaration m[1000];
    int memberid, status1;

    member();
    void readFromFile();
    void get_info();
    void show_info();
    void all_members_data();
    void total_members();

    virtual ~member();
};

#endif // MEMBER_H
