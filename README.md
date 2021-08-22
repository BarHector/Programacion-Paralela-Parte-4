# Programacion-Paralela-Parte-4
Cuarta parte de los códigos de programación paralela. Este repositorio está enfocado a la cláusula 'reduction'

Aunque en el repositorio anterior se vio esta cláusula, se presentará otro programa para ver de una forma (que considero) más sencilla para ver como es que funciona.

Como se mencionó en el repositorio anterior, 'reduction' funciona como un acumulador (visto desde la programación secuencial), cada hilo calculará el valor de una variable, al final el resultado obtenido por cada hilo realizará una operación (suma, resta o multiplicación) de una o más variables. Aunque en los ejemplos solo se hace sumas de una sola variable, es posible usar más de una. Para hacer uso de más de una variable, estas se separan por comas ( , ).

Para este ejemplo se usa el producto punto de dos arreglos unidimensionales de tamaño 7. El resultado de cada multiplicación es el que usamos en 'reduction'.
