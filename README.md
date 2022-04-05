# tp01-2022-juanigramajo


# Punto 2 TP1

## a) Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?

El archivo .gitignore, es un archivo de texto plano donde especificamos aquellos archivos o carpetas que queremos que git no tenga en cuenta y no almacene las modificaciones que se han realizado sobre ellos durante el tiempo.

¿Y por qué queremos hacer eso? Porque puede ocurrir que durante nuestro manejo de esos archivos se creen archivos secundarios que se crean por herramientas externas, que no son relevantes y que su información es cambiante con el tiempo y no nos aporta nada.

Hay código que no necesitas enviar a Git, ya sea porque sea privado para un desarrollador en concreto y no lo necesiten (o lo deban) conocer el resto de las personas.
 
## ¿Cómo configuraría el archivo .gitignore?

Este es un ejemplo de cómo puede lucir el archivo .gitignore :

### Ignora archivos del sistema Mac
```
.DS_store
```

### Ignora la carpeta node_modules
```
node_modules
```

### Ignora todos los archivos de texto
```
*.txt
```

### Ignora los archivos relacionados a API keys
```
.env
```

### Ignora archivos de configuración SASS
```
.sass-cache
```

## Incluya en su repositorio una regla de cómo ignorar un archivo ignorado.txt

* Debe existir el archivo llamado ignorado.txt

* Crear un archivo llamado .gitignore (el archivo se crea así, comenzando por un punto, no debe ir nada delante del punto).

* Escribir en __.gitignore__ "ignorado.txt". Este archivo será ignorado completamente sin importar su contenido.


# Punto 3 TP1

## c) Revise los archivos subidos en su repositorio de github. ¿Qué archivos ve? ¿Cuál cree que no hace falta que esté?

Veo todos los archivos creados desde el inicio del TP. Creo que no hace falta el archivo.txt con mi nombre.

## Nota. Si resolvió correctamente los puntos g) y h) notará que el resultado es el mismo. ¿A qué se debe?

Se debe a que un puntero apunta a una dirección de memoria. En este caso a la dirección de la variable creada.

Entonces la dirección almacenada en el puntero es la misma que la direccion de la variable (ya que está siendo apuntada por el puntero).

## ¿Qué obtiene en el punto i)? ¿Es igual a los anteriores? ¿Por qué?

En el punto i obtengo el mismo número de los puntos anteriores, solo difiere en el ultimo valor, que en vez de un 8, tengo un 0.