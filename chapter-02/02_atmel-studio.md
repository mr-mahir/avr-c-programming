## Create our first project in Atmel Studio 7

Open Atmel Studio 7 and click 'New Project...'. The following window will open.

![AtmelStudio7.PNG](/chapter-02/AtmelStudio7.PNG)

1. Select 'GCC C Executable Project'.
2. It's better to organize all our files in directories. So I created a directory in E:\AVR\Studio where I'll save all my future project files.
3. Name and Solution name will be your project name.
4. If you select 'Create directory for solution', it will create separate directory "Debug" inside your master directory where all files (Makefile, .d, .o, .mk, .eep, .elf, .hex, .lss, .map, .srec) will be created.
5. Click 'Ok'.
6. Now select your device family (in our case it is ATmega8A).
7. Click 'Ok' again. It will start creating your project.
8. There is a default main.c file. We'll always work on this file for all the projects.
9. Now copy-paste the codes from the [next file](/chapter-02/03_main.c), Build >> Build Solution (F7). If there is no mistake, you'll see 'Build succeeded' message.
10. Run avrdudeGui.exe. In 'Setup' tab, select Programmer: avr911 and Port: COM3 (if you use the same board like mine, programmer is avr911, for port find out which one you are using).
11. Don't do anything in 'Lock Bits', 'Fuse Bits' and 'Calibration'. If you don't know what they actually do, you might damage your microcontroller permanently!
12. In 'Programming' tab, Traget Device: ATMEGA8, File Format to use: Intel Hex.
13. Select the flash file (you can find the Hex file in your project directory, in my case it is E:\AVR\Studio\lab1\lab1\Debug\lab1.hex)
14. Now click 'Program' (in flash section).
15. When it's done, you'll see a success message in a separate window.

![avrdudeGUI.PNG](/chapter-02/avrdudeGUI.PNG)

Now we'll connect any pin of PORT-D with any of the three ACTIVE-HIGH LEDs (Red or Green or Yellow) and connect any pin of PORT-C with the ACTIVE-LOW LED (Blue).

If you have done everything perfectly, you will see the result like the following image (the photo is underexposed so you can see the blue and red LEDs).

![lab1.JPG](/chapter-02/lab1.JPG)
