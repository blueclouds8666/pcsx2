# Compiling PCSX2 XP from source

Disclaimer: this process or software comes with no warranty. <br />
<br />

## Building a 32 bit binary

### Prerequisites

Before starting with the process, let's check if we have everything needed:

- Windows 7 with SP1 or newer (either 32 or 64 bits)
- At least 2 GB of system memory + 2 GB page file
- Microsoft Visual Studio 2013 IDE. Ultimate, Premium or Pro editions.
- [PCSX2 XP source code](https://github.com/blueclouds8666/pcsx2_XP/archive/release-1.4.0.zip)

NOTE: Visual Studio 2013 Express edition does not work with our project. You need to use Ultimate, Premium or Pro editions. Older or newer versions of Visual Studio will neither work.
<br />
<br />

### Start compiling

1. Extract the source code to any location
2. Open "PCSX2_suite.sln" with Visual Studio 2013
3. The project will load. Now change the solution configuration (located on the top toolbar) to "Release". You can also choose the other options if your CPU supports SSE4 or AVX2 instruction set. If you are unsure, we recommend you to just use the "Release" option as it has the best compatibility.
4. When ready, go to the "Build" menu and hit "Build Solution" to start compiling

The compiling process usually takes a couple minutes. Once it's finished, you can find the binaries on the /bin/ folder

<br />
<br />
