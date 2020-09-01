//pragma once prevents the import of a header file in a cpp file more than once

#pragma once

//Checks if Logg_hpp is already defined
//If is not define it will include the contents it compilation
//If it is already defined it will not include its contents
//Basically same as pragma once
#ifndef Log_hpp
#define Log_hpp

#include <stdio.h>

void Log(const char* message);
void InitLog();

#endif /* Log_hpp */
