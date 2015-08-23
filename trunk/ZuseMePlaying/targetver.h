#pragma once

// The following macros define the minimum required platform.  The minimum required platform
// is the earliest version of Windows, Internet Explorer etc. that has the necessary features to run 
// your application.  The macros work by enabling all features available on platform versions up to and 
// including the version specified.

// Specifies that the minimum required platform is Windows 2000.
#ifndef _WIN32_WINNT          
#define _WIN32_WINNT 0x0500
#endif

// Specifies that the minimum required platform is Windows 98.
#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0410
#endif
