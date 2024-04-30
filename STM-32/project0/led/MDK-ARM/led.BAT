SET PATH=C:\Keil_v5\ARM\armcc\Bin;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files (x86)\VMware\VMware Workstation\bin\;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\Program Files\Bandizip\;C:\Program Files (x86)\pcsuite\;C:\Program Files\Microsoft SQL Server\Client SDK\ODBC\110\Tools\Binn\;C:\Program Files (x86)\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\Microsoft SQL Server\120\DTS\Binn\;C:\Program Files (x86)\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Git\cmd;C:\Users\Àîç÷Õð\AppData\Local\Microsoft\WindowsApps;C:\Users\Àîç÷Õð\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\Àîç÷Õð\AppData\Local\GitHubDesktop\bin
SET CPU_TYPE=STM32F103C8
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=led
SET CPU_CLOCK=0x007A1200
"C:\Keil_v5\ARM\armcc\Bin\ArmAsm" --Via "led\startup_stm32f103xb._ia"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\main.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\gpio.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_it.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_msp.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_gpio_ex.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_tim.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_tim_ex.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_rcc.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_rcc_ex.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_gpio.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_dma.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_cortex.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_pwr.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_flash.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_flash_ex.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\stm32f1xx_hal_exti.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmCC" --Via "led\system_stm32f1xx.__i"
"C:\Keil_v5\ARM\armcc\Bin\ArmLink" --Via "led\led.lnp"
"C:\Keil_v5\ARM\armcc\Bin\fromelf.exe" "led\led.axf" --i32combined --output "led\led.hex"
