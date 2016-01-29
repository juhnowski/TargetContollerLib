#ifndef GROUP_H
#define GROUP_H



class Group
{
public:
    typedef enum {UNDEFINED,FRENDLY,HOSTLE} group_type;
    Group();
    Group(group_type *type);
    group_type *type;
};

#endif // GROUP_H
