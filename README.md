# Brazo-robotico
Robot de tres grados de libertad para manipular manzanas rojas y verdes detectadas por un sensor de color. Recoge las rojas y las coloca en un lugar específico, mientras dirige las verdes a otro sitio, luego vuelve a su posición inicial.

Aquí tienes un posible esquema para un archivo README basado en el texto que proporcionaste:

---

# Brazo Robótico de 3 Grados de Libertad

## Resumen

Este informe detalla la creación de un brazo robótico con 3 grados de libertad, desde su diseño mecánico hasta la programación de su funcionamiento. Incluye el análisis de motores, sistemas de control y el método Denavit-Hartenberg para la modelación cinemática.

## Objetivo

El propósito es diseñar un manipulador robótico con un efector final que permita la clasificación de manzanas según su color utilizando dos tipos de motores. Se busca comprender el proceso de desarrollo de este tipo de manipuladores y aplicarlo a una tarea práctica.

## Marco Teórico

- **Arduino:** Plataforma de código abierto para la creación de dispositivos electrónicos.
- **Motor Paso a Paso:** Dispositivo que transforma pulsos eléctricos en movimientos mecánicos discretos.
- **Driver ULN2003:** Circuito integrado para el control de motores y luces de baja tensión.
- **Potenciómetro:** Resistor con resistencia variable, utilizado en circuitos de baja corriente.
- **Servomotor:** Motor especializado para el control preciso de posición.
- **Sensor de Color Infrarrojo:** Detecta la intensidad de luz reflejada para identificar colores.

## Descripción del Robot

El brazo robótico consta de 3 servomotores y 1 motor paso a paso. El motor paso a paso controla la base, mientras los servomotores manejan hombro, codo y mano. Incorpora un sensor de color para detectar y clasificar manzanas rojas y verdes.

## Cálculos Teóricos

Se empleó el método Denavit-Hartenberg para modelar la cinemática del robot, obteniendo parámetros DH para cada articulación y estableciendo la estructura cinemática.

## Metodología

El diseño se dividió en etapas, se esquematizaron las fases de construcción y se elaboraron códigos en Arduino para el funcionamiento automático.

## Pruebas de Funcionamiento

Se realizaron 20 pruebas: 10 manuales y 10 automáticas, calculando la eficiencia considerando las pruebas erróneas y satisfactorias.

## Conclusiones

- Se integraron motores de forma dinámica y eficiente.
- Se determinó la estructura cinemática del robot.
- Descripción detallada del montaje y componentes.
- Los potenciómetros permitieron una interacción dinámica.
- Las dimensiones y características resultaron adecuadas.
- Variación del efector final amplió su campo de aplicación.
