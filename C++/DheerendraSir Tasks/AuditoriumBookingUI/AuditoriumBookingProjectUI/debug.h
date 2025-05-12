#ifndef DEBUG_H
#define DEBUG_H

class Debug
{
public:
    Debug();
    ~Debug();
    static bool m_isEnabled;
    static void setEnabled(bool enable);
    static bool getEnabled();
};

#endif // DEBUG_H
