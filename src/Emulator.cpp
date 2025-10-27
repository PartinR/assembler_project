#include "../include/Emulator.h"
#include "../include/stdafx.h"

bool Emulator::runProgram( )

{
    // TODO: Move to .cpp file
    int loc = 100;
    while(true)
    {            
        long long inst = m_memory[loc];
        int op_code = inst / 10'000'000'000;
    }
}
