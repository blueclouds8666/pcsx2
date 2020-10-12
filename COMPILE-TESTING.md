# Compiling PCSX2 XP with testing options

This guide assumes you've already read and followed the standard compiling process.

You should only try the following if you already have some compiling or programming experience. 

Disclaimer: this process or software comes with no warranty. 
<br />
<br />

## Building with Visual Studio 2015-2017

Technically, PCSX2 XP does indeed compile with Visual Studio 2015 and 2017 IDEs, but there is a small issue.

The Spu2-X plugin, which does all the audio processing and output, won't work on Windows XP if compiled with said IDEs. This is a known bug from years ago, but was never fixed as XP support was already discarded by that time, when the project migrated to post-2013 Visual Studio versions.

However, the rest of the components do work perfectly fine under XP. You might want to compile our project with VS2015 or VS2017 to benefit from compiler performance improvements (if there is any), and then compile Spu2-X with VS2013 or just install a different audio plugin.

The compiling steps should be the exact same, only thing is you're using a newer Visual Studio. You should also know Express edition of Visual Studio 2015-2017 neither works with our project as it's missing some needed components.

And if you're wondering: No, our project does not compile with Visual Studio 2019.
<br />
<br />

## Building a 64 bit binary

Some of the PCSX2 components will give errors if 64 bits target is selected.

However, you can still successfully compile certain components in 64 bits if you want. To do so, open the "Build" menu and hit "Configuration Manager...". You should now be able to switch each individual PCSX2 component from 32 to 64 bits.

Wether if using 64 bit binaries improves your performance is unclear. PCSX2 developers found that there is little to no improvement with current code, and for that reason, the emulator binaries aren't distributed as 64 bits yet.
<br />
<br />

## Enable input recording

A new feature was recently introduced to the emulator allowing input recording and playback, something specially oriented to Tool-assissted speedrunning. However, the PCSX2 developers decided to disable it on the final release as some stability problems were found. If you want to enable it, browse to \pcsx2\Config.h and delete the line 22 which says "#define DISABLE_RECORDING".

<br />
<br />
