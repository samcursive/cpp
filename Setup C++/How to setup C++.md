
# 1. Install MinGW (Windows)
`NOTE: This installation was done for W11 Pro 2H32 - 2025 February 16`
`Note: I made these notes on an Obsidian (.md) file. You may use a .md editor of your choice :)` 

2. MinGW - Minimalist GNU for Windows is a free and open source software development environment to create MS Windows applications. 
3. You can use either download it from [mingw-w64](https://www.mingw-w64.org/) or download MinGW from [SourceForge](https://sourceforge.net/projects/mingw/) (I chose the latter) 
4. Download and install the .exe file. 
5. Run it, click `Install`, then select all packages, and install those at a location of your choice (I recommend **C**)
6. Once the dialogue box notifies you of completion and asks you to close it, go to "This PC".
7. From there wherever you downloaded the file to, go into the 'MinGW folder', then 'bin'. Copy that as a path. 
8. Press the Windows key and search for '*Environment Variables*', select the "*edit the system environment variables*" that likely pops up. Under the '*system variables*' section select *Path*. Double click that/click the '*Edit*' button and click the "New" button. Then paste the path you copied and save. 
9. Open up your command prompt/powershell/Warp/CLI of choice. 
10. Type the command  `g++ --version`. It should give you the version of your gcc-g++ compiler. 


**Alternatively use MSYS2**
[MSYS2](https://www.msys2.org/)
Follow this video for the installation guide.

[Intalling MinGW to build C++ Code on Windows](https://www.youtube.com/watch?v=oC69vlWofJQ)