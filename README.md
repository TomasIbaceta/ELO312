# ELO312
Para las cosas de estructura 2019-2 paralelo 4

----
WEAS BÁSICAS:

  -Placa de desarrollo: STM32 NUCLEO || NUCLEO64 || NUCLEO_64
  
  -Microcontrolador: STM32f411 (Experiencia de prueba)
                     STM32L476 (EXP 0)
  
  -IDE: STM32_workplace_9.3 Atollic TrueSTUDIO
  
  -code configurator: STM32CubeMX

----

Cosas que pueden solucionar errores futuros:

  -Actualizar Driver USB
  
  -Actualizar Driver Firmware /*aún no probado, necesita conectar la tarjeta*/
  
  Ambos están adjuntos en "Software Previo"
  
-----  
  
TRUCAZOS:

usar ctrl + shift + "/" te deja comentar/descomentar de una un bloque de codigo

-----

CODIGO A EDITAR EN EL SYSCALL
int32_t i;
  for (i=0 ; i<len ; i++)
    ITM_SendChar(*ptr++);
  errno = ENOSYS;
  return len;
