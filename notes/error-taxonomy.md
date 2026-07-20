# Taxonomía de errores

Todo fallo debe clasificarse. El objetivo no es justificarlo, sino impedir que se repita.

## Reading

Interpretación incorrecta del enunciado, formato de entrada, salida o restricciones.

Preguntas:

- ¿Leí todas las restricciones?
- ¿Confundí exactamente con como máximo?
- ¿Ignoré casos vacíos o valores extremos?

## Idea

No se encontró la observación, reducción o algoritmo requerido.

Preguntas:

- ¿Intenté una solución de fuerza bruta?
- ¿Construí ejemplos pequeños?
- ¿Identifiqué invariantes?
- ¿Reconocí un patrón conocido?

## Proof

La solución parecía funcionar, pero estaba basada en una afirmación falsa.

Preguntas:

- ¿Por qué siempre funciona?
- ¿Existe un contraejemplo pequeño?
- ¿Qué invariante se mantiene?

## Complexity

La solución era conceptualmente correcta, pero excedía tiempo o memoria.

Preguntas:

- ¿Calculé la complejidad antes de programar?
- ¿Incluí el coste de estructuras internas?
- ¿El número de estados era realmente viable?

## Implementation

Errores de índices, inicialización, tipos, overflow, estructuras o condiciones.

Ejemplos:

- off-by-one;
- acceso fuera de rango;
- `int` en lugar de `long long`;
- estructuras no reiniciadas;
- condición de parada incorrecta.

## Testing

No se probaron casos capaces de revelar el error.

Casos mínimos:

- tamaño mínimo;
- tamaño máximo conceptual;
- todos iguales;
- estrictamente creciente;
- estrictamente decreciente;
- respuesta cero;
- respuesta máxima;
- componentes desconectados;
- valores duplicados.

## Strategy

Se eligió mal el orden de problemas o se insistió demasiado en una línea bloqueada.

Preguntas:

- ¿Había un problema más accesible?
- ¿Debí abandonar temporalmente?
- ¿Leí suficiente cantidad de problemas al comienzo?

## Time management

El problema se resolvió, pero con un coste temporal excesivo.

Preguntas:

- ¿La implementación fue innecesariamente compleja?
- ¿Perdí tiempo configurando herramientas?
- ¿Reescribí código que debía tener dominado?
