#ifndef MYTYPES_H
#define MYTYPES_H

// ❌ No qdoc comment for MyUndocumentedType
struct MyUndocumentedType {
    int value;
};

/*!
    \brief A test function using an undocumented type.
*/
void testFunction(MyUndocumentedType param);

#endif // MYTYPES_H
