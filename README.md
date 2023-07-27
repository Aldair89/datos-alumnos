# datos-alumnos
Este programa en C++ es un sistema de gestión de alumnos que permite al usuario realizar las siguientes acciones:

Agregar un nuevo alumno: El usuario puede ingresar el nombre, edad y carrera de un alumno, y esta información se almacenará en un vector de estructuras Alumno.

Mostrar la tabla de alumnos: El programa muestra una tabla en la consola con los nombres, edades y carreras de todos los alumnos registrados en el vector. Si no hay alumnos registrados, se mostrará un mensaje indicando que no hay alumnos.

Salir: El usuario puede seleccionar esta opción para finalizar el programa.

Define una estructura Alumno con tres miembros: nombre (cadena de texto para el nombre del alumno), edad (número entero para la edad del alumno) y carrera (cadena de texto para la carrera del alumno).

Define una función MostrarTabla que recibe un vector de estructuras Alumno llamado alumnos como entrada. Esta función muestra una tabla en la consola con el nombre, edad y carrera de cada alumno en el vector.

En la función main, crea un vector de estructuras Alumno llamado alumnos para almacenar los datos de los alumnos.

Utiliza un bucle do-while para mostrar un menú con las opciones disponibles: "Agregar alumno", "Mostrar tabla de alumnos" y "Salir". El usuario puede ingresar un número del 1 al 3 para seleccionar una opción.

Dependiendo de la opción seleccionada, el programa realiza una de las siguientes acciones:

"Agregar alumno": El programa solicita al usuario que ingrese el nombre, edad y carrera del nuevo alumno, y luego lo agrega al vector alumnos.
"Mostrar tabla de alumnos": El programa llama a la función MostrarTabla(alumnos) para mostrar la tabla con los datos de los alumnos en el vector.
"Salir": El programa muestra un mensaje de despedida y finaliza el bucle, lo que lleva a la finalización del programa.
El bucle do-while se repite hasta que el usuario ingresa la opción "3" para salir del programa.

En resumen, este programa permite al usuario administrar una lista de alumnos, agregar nuevos alumnos y ver la tabla de alumnos registrados en la consola.
