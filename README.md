# Guía básica de Git y GitHub para la bitácora de sus proyectos

Esta guía explica cómo crear y mantener una bitácora de proyecto en GitHub, incluso si nunca antes has utilizado Git, GitHub o Markdown.

## 1. ¿Para qué usaremos GitHub en este curso?

Cada equipo tendrá un repositorio que funcionará como una **bitácora viva** del proyecto. Allí deberá registrar:

- integrantes y roles;
- definición y evolución del desafío;
- objetivos, requerimientos y restricciones;
- actividades;
- fotografías, diagramas, datos, código y prototipos;
- decisiones y su justificación;
- errores, pruebas, resultados e iteraciones;
- entregas del estado del proyecto.

La regla central es:

> El proyecto no termina cuando funciona; termina cuando otra persona puede comprender qué hicieron, por qué lo hicieron y qué evidencia respalda sus decisiones.

## 2. Conceptos básicos

| Concepto | Explicación simple |
|---|---|
| **Git** | Programa de control de versiones que registra los cambios de los archivos a lo largo del tiempo. Puede funcionar localmente, sin GitHub. |
| **GitHub** | Plataforma en línea que utiliza Git para guardar, organizar, compartir y documentar proyectos. |
| **Repositorio** | Carpeta principal del proyecto. Contiene archivos, carpetas y el historial de cambios. |
| **Repositorio local** | Copia del proyecto guardada en un computador. |
| **Repositorio remoto** | Copia alojada en un servidor, por ejemplo, GitHub. |
| **README.md** | Portada del repositorio. Explica qué es el proyecto y orienta a quien lo visita. |
| **Markdown** | Forma sencilla de dar formato a textos mediante símbolos como `#`, `-`, `**` y `[]()`. |
| **Commit** | Registro de una versión o conjunto de cambios, acompañado por un mensaje. |
| **Clone** | Crear en el computador una copia completa de un repositorio remoto. |
| **Pull** | Descargar e integrar los cambios más recientes del repositorio remoto. |
| **Push** | Enviar al repositorio remoto los commits realizados localmente. |
| **Branch o rama** | Línea de trabajo separada que permite desarrollar cambios sin modificar inmediatamente la versión principal. |

### Git y GitHub no son lo mismo

- **Git** controla versiones.
- **GitHub** aloja repositorios remotos y facilita compartir y colaborar.
- En este curso comenzaremos usando principalmente GitHub desde el navegador.
- Más adelante podrán trabajar localmente con Git, GitHub Desktop o un editor como Visual Studio Code.

### Repositorio público y privado

| Visibilidad | Quién puede verlo | Cuándo usarlo |
|---|---|---|
| **Público** | Cualquier persona en internet. | Cuando el contenido puede compartirse y no contiene información sensible o reservada. |
| **Privado** | Solo las personas invitadas. | Cuando existen datos sensibles, acuerdos de confidencialidad o información de una contraparte que no ha autorizado su publicación. |

**Importante:** un repositorio público puede verse, pero no se transforma automáticamente en un proyecto *open source*. La posibilidad de copiar, modificar o reutilizar su contenido depende de la licencia. No agreguen una licencia ni publiquen información de la contraparte sin conversarlo con el equipo docente.

## 3. Antes de comenzar

Necesitarán:

1. Una cuenta personal en [GitHub](https://github.com/).
2. Acceso al correo asociado a la cuenta.
3. Un nombre de usuario reconocible, por ejemplo: `nombre-apellido`.
4. El nombre del equipo y un nombre preliminar para el proyecto.

Nunca suban al repositorio:

- contraseñas;
- tokens o claves de API;
- datos personales sensibles;
- bases de datos con información identificable;
- documentos privados de terceros;
- información reservada por la contraparte;
- archivos cuya publicación no esté autorizada.

## 4. Ruta inicial: trabajar desde el navegador

Esta es la ruta recomendada para comenzar. No requiere instalar programas ni utilizar la terminal.

### Paso 1. Crear una cuenta

1. Entrar a [github.com](https://github.com/).
2. Seleccionar **Sign up**.
3. Crear la cuenta con un correo que revisen regularmente.
4. Elegir un nombre de usuario reconocible.
5. Verificar el correo.
6. Guardar la contraseña en un lugar seguro.

### Paso 2. Crear el repositorio del equipo

Una sola persona del equipo debe crear el repositorio.

1. Iniciar sesión en GitHub.
2. Seleccionar el símbolo **+** de la esquina superior derecha.
3. Elegir **New repository**.
4. Completar la configuración:

| Campo | Configuración sugerida |
|---|---|
| Owner | Cuenta de la persona que crea el repositorio. |
| Repository name | `traje interactivo, sensores corporales` |
| Description | Descripción breve del desafío. |
| Visibility | Público si está autorizado; privado si existe información reservada. |
| Add a README file | Activar esta opción. |

5. Seleccionar **Create repository**.

Usen nombres breves, en minúsculas, sin tildes y sin espacios. Ejemplo:

```text
lowtech-entrega 01
```

### Paso 3. Agregar al resto del equipo como colaboradores

Este paso es obligatorio para que cada integrante pueda editar y quede identificado en el historial.

1. Entrar al repositorio.
2. Seleccionar **Settings**.
3. En la sección **Access**, seleccionar **Collaborators**.
4. Seleccionar **Add people**.
5. Buscar el nombre de usuario o correo de cada integrante.
6. Enviar la invitación.
7. Cada persona debe aceptar la invitación recibida por correo o en GitHub.
8. Si el repositorio es privado, agregar también a las cuentas docentes que se indiquen.

No compartan una misma cuenta entre varias personas. Cada integrante debe trabajar desde su propia cuenta.

### Paso 4. Editar el archivo README.md

1. Entrar al repositorio.
2. Seleccionar el archivo `README.md`.
3. Seleccionar el ícono de lápiz **Edit this file**.
4. Escribir o pegar el contenido.
5. Usar la pestaña **Preview** para revisar cómo se verá.
6. Seleccionar **Commit changes**.
7. Escribir un mensaje breve y descriptivo, por ejemplo:

```text
agrega nombres, fechas, fotos, etc
```

8. Confirmar el cambio.

Si el repositorio no tiene un README:

1. Seleccionar **Add file**.
2. Elegir **Create new file**.
3. Escribir exactamente `README.md` como nombre del archivo.
4. Agregar el contenido y confirmar los cambios.

### Paso 5. Crear carpetas y archivos

GitHub no guarda carpetas vacías. Para crear una carpeta desde el navegador, deben crear al mismo tiempo un archivo dentro de ella.

Ejemplo para crear la primera entrada de la bitácora:

1. Seleccionar **Add file**.
2. Elegir **Create new file**.
3. En el nombre del archivo escribir:

```text
bitacora/S01.md
```

4. Pegar la plantilla de sesión incluida más abajo.
5. Seleccionar **Commit changes**.

GitHub creará automáticamente la carpeta `bitacora` y el archivo `S01.md`.

### Paso 6. Subir fotografías, diagramas y otros archivos

1. Entrar a la carpeta donde quedará el archivo.
2. Seleccionar **Add file** y luego **Upload files**.
3. Arrastrar o seleccionar los archivos.
4. Escribir un mensaje de commit claro.
5. Seleccionar **Commit changes**.

Para crear primero una carpeta de imágenes pueden crear el archivo:

```text
imagenes/S01/README.md
```

Luego entren a `imagenes/S01/` y suban allí las fotografías.

Usen nombres claros, sin espacios ni tildes:

```text
foto-equipo.jpg
primer-prototipo.jpg
prueba-distancia-01.jpg
diagrama-sistema.png
```

Eviten nombres como:

```text
IMG_4829.jpg
foto final final ahora si.jpg
Documento (7).pdf
```

Las fotografías deben funcionar como **evidencia técnica**, no solo como decoración. Incluyan imágenes de conexiones, montajes, pruebas, resultados y también de los errores que ayudaron a tomar decisiones.

### Paso 7. Insertar una imagen en Markdown

Desde el `README.md` principal:

```markdown
![Primer prototipo](imagenes/S01/primer-prototipo.jpg)
```

Desde un archivo ubicado dentro de `bitacora/`, la ruta debe retroceder un nivel:

```markdown
![Primer prototipo](../imagenes/S01/primer-prototipo.jpg)
```

El texto entre corchetes debe describir brevemente la imagen. Esto mejora la comprensión y la accesibilidad.

### Paso 8. Compartir el repositorio

1. Entrar a la página principal del repositorio.
2. Copiar la URL del navegador. Tendrá una forma similar a:

```text
https://github.com/usuario/lowtech-2026
```

3. Entregar el enlace por el canal indicado por el equipo docente.
4. Comprobar que el `README.md` se vea al entrar.
5. Si el repositorio es público, abrir el enlace en una ventana privada para verificar el acceso.
6. Si es privado, verificar que docentes e integrantes hayan aceptado la invitación.

No entreguen solamente un archivo `.zip` al final del semestre. El enlace debe permitir revisar la evolución del proyecto y su historial.

## 5. Markdown básico

Markdown permite escribir contenido ordenado sin diseñar una página web. Pueden copiar y modificar este ejemplo:

````markdown
# Título principal

## Subtítulo

Texto normal y **texto destacado**.

### Lista

- Primer elemento
- Segundo elemento
- Tercer elemento

### Lista numerada

1. Primer paso
2. Segundo paso
3. Tercer paso

### Lista de tareas

- [x] Actividad terminada
- [ ] Actividad pendiente

### Enlace

[Documentación de GitHub](https://docs.github.com/es)

### Imagen

![Descripción de la imagen](imagenes/S01/foto.jpg)

### Cita

> Una idea o frase relevante.

### Código en una línea

El archivo principal se llama `README.md`.

### Bloque de código

```python
print("Hola, Capstone")
```

### Tabla

| Criterio | Resultado |
|---|---|
| Distancia | 6,4 m |
| Tiempo | 3,2 s |
````

## 6. Estructura mínima recomendada

```text
Cursolowtech-2026-nombre-equipo/
│
├── README.md
├── bitacora/
│   ├── S01.md
│   ├── S02.md
│   └── S03.md
│
├── imagenes/
│   ├── S01/
│   ├── S02/
│   └── S03/
│
├── entregas/
├── prototipo/
├── datos/
├── referencias/
└── LICENSE              # solo si corresponde y está autorizado
```

Esta estructura puede modificarse según las necesidades del proyecto. Lo importante es que otra persona pueda orientarse sin preguntar dónde está cada cosa.

## 7. Plantilla lista para el README del proyecto

Copien este bloque y reemplacen todo lo que aparezca entre corchetes.

```markdown
# [Nombre del proyecto]

## dispositivos lowtech e interfaces interactivas 

**Equipo:** [Nombre del equipo]  
**Problematica:** [Nombre breve del desafío]  

![Foto del equipo](imagenes/S01/foto-equipo.jpg)

## Descripción

[Expliquen en un párrafo qué problema están abordando, para quién y en qué contexto.]

## Equipo

| Integrantes |
|---|
| [Nombre] |



## Desafío o problematica  inicial

[Describan el desafío con sus propias palabras.]

## Objetivo 

[Describan del objetivo del proyecto ]

## Usuarios y contexto

[¿Quiénes viven el problema? ¿Dónde ocurre? ¿Qué evidencia tienen hasta ahora?]


## Índice de la bitácora

- [S01 - Entrega 01](bitacora/S01.md)
- [S02 - Entrega 02](bitacora/S02.md)
- [S03 - Entrega 03](bitacora/S03.md)

```

## 8. Plantilla de la primera entrada: identidad y desafío

Crear el archivo `bitacora/S01.md` y pegar lo siguiente:

```markdown
# S01 - Equipo y desafío

**Fecha:** [dd-mm-aaaa]  
**Participantes:** [Nombres]  

## Objetivo de la sesión

Rrealizar una primera interpretación del desafío a desarrollar.

### Lo que sabemos

- [Evidencia o antecedente 1]
- [Evidencia o antecedente 2]

### Lo que todavía no sabemos

- [Pregunta 1]
- [Pregunta 2]

### Supuestos que debemos comprobar

- [Supuesto 1]
- [Supuesto 2]


## Reflexión breve

**¿Qué fue fácil?**  
[Respuesta.]

**¿Qué fue difícil o generó desacuerdo?**  
[Respuesta.]

**¿Qué necesitamos resolver para la próxima entrega?**  
[Respuesta.]
```

## 9. Plantilla general para las siguientes sesiones

Crear un archivo por sesión: `S02.md`, `S03.md`, `S04.md`, etc.

```markdown
# SXX - [Título de la sesión]

**Fecha:** [dd-mm-aaaa]  
**Participantes:** [Nombres]  

## Objetivo

[¿Qué queríamos comprender, decidir, construir o probar?]

## Actividades realizadas

1. [Actividad 1]
2. [Actividad 2]
3. [Actividad 3]

## Evidencias

![Descripción de la evidencia](../imagenes/SXX/nombre-archivo.jpg)

- [Enlace a datos, código, diagrama, prototipo o documento]

## Resultados

[¿Qué ocurrió? Incluyan datos, observaciones o resultados concretos.]

## Decisiones y justificación

| Decisión | Evidencia o criterio | Consecuencia para el proyecto |
|---|---|---|
| [Decisión] | [Evidencia] | [Consecuencia] |

## Errores, dificultades o riesgos

- [Qué no funcionó]
- [Por qué creemos que ocurrió]
- [Qué haremos para comprobarlo o corregirlo]

## Aprendizajes

[¿Qué entiende ahora el equipo que antes no entendía?]

## Próximo paso

[¿Cuál es la siguiente acción y qué evidencia permitirá saber si resultó?]

## Fuentes consultadas

- [Autor u organización, título y enlace]
```

## 10. Cómo escribir buenos mensajes de commit

Un commit debe indicar qué cambió. Eviten mensajes vagos.

| Evitar | Preferir |
|---|---|
| `avance` | `documenta entrevista inicial con contraparte` |
| `cosas` | `sube fotografías de la prueba de distancia` |
| `final final` | `corrige objetivo SMART después de retroalimentación` |
| `actualización` | `agrega matriz de requerimientos y restricciones` |

Hagan un commit por cambio significativo. Esto permite reconstruir el proceso y volver a versiones anteriores si es necesario.

## 11. Ruta opcional: trabajar localmente con Git

Esta sección es para quienes quieran comenzar a usar Git desde su computador. Antes deben instalar Git o utilizar GitHub Desktop.

### Configurar la identidad una vez

```bash
git config --global user.name "Nombre Apellido"
git config --global user.email "correo@ejemplo.cl"
```

Usen un correo asociado y verificado en GitHub. Nunca escriban la contraseña dentro de un archivo o comando del proyecto.

### Clonar el repositorio una vez

1. En GitHub, entrar al repositorio.
2. Seleccionar **Code**.
3. Copiar la dirección HTTPS.
4. Abrir la terminal y ejecutar:

```bash
git clone https://github.com/USUARIO/NOMBRE-REPOSITORIO.git
cd NOMBRE-REPOSITORIO
```

Reemplacen `USUARIO` y `NOMBRE-REPOSITORIO` por los datos reales.

### Flujo básico cada vez que trabajen

Antes de editar:

```bash
git pull origin main
```

Después de editar:

```bash
git status
git add README.md bitacora/S02.md imagenes/S02/
git commit -m "documenta sesion 02 y sube evidencias"
git push origin main
```

¿Qué hace cada comando?

- `git pull origin main`: descarga los cambios más recientes.
- `git status`: muestra qué archivos cambiaron.
- `git add`: selecciona los archivos que entrarán al próximo commit.
- `git commit -m "mensaje"`: crea una versión con un mensaje.
- `git push origin main`: envía los commits a GitHub.

Antes de usar `git add .`, revisen siempre `git status`. Así evitan subir accidentalmente archivos privados, temporales o muy pesados.

### Crear una rama para un cambio separado

```bash
git switch -c nombre-del-cambio
git add bitacora/S03.md
git commit -m "agrega registro de la sesion 03"
git push -u origin nombre-del-cambio
```

Luego pueden abrir una **Pull Request** en GitHub para revisar el cambio antes de incorporarlo a `main`.

## 12. Acuerdos mínimos para trabajar en equipo

1. Cada persona usa su propia cuenta.
2. Antes de comenzar, revisar si otra persona está editando el mismo archivo.
3. Si trabajan localmente, ejecutar `git pull` antes de editar.
4. Evitar que dos personas modifiquen simultáneamente la misma parte del `README.md`.
5. Hacer cambios pequeños y commits claros.
6. Subir los avances durante el proceso, no todos juntos al final.
7. Registrar errores y decisiones, no solo resultados exitosos.
8. No borrar el trabajo de otra persona sin conversarlo.
9. No usar `git push --force` en el repositorio del curso.
10. Mantener actualizado el índice del `README.md`.

## 13. Archivos grandes

El navegador de GitHub limita las cargas individuales y GitHub bloquea archivos demasiado grandes en repositorios Git normales. Para el curso:

- compriman fotografías antes de subirlas;
- eviten subir videos completos;
- no suban copias repetidas del mismo archivo;
- consulten antes de subir bases de datos, archivos CAD o simulaciones pesadas;
- si un archivo necesita Git LFS, coordínenlo primero con el equipo docente.

## 14. Lista de verificación antes de compartir

- [ ] El enlace abre el repositorio correcto.
- [ ] El `README.md` explica el proyecto y se ve al entrar.
- [ ] Todos los integrantes aparecen con su rol y usuario.
- [ ] El desafío y el objetivo SMART están escritos.
- [ ] La primera sesión está enlazada desde el índice.
- [ ] Las imágenes y enlaces funcionan.
- [ ] Los commits tienen mensajes comprensibles.
- [ ] No existen contraseñas, datos sensibles ni archivos reservados.
- [ ] Si el repositorio es privado, docentes e integrantes tienen acceso.
- [ ] La bitácora permite comprender qué hizo el equipo y qué debe hacer después.

## 15. Documentación oficial de apoyo

- [Acerca de Git](https://docs.github.com/es/get-started/using-git/about-git)
- [Inicio rápido para repositorios](https://docs.github.com/es/repositories/creating-and-managing-repositories/quickstart-for-repositories)
- [Acerca de los repositorios](https://docs.github.com/es/repositories/creating-and-managing-repositories/about-repositories)
- [Editar archivos en GitHub](https://docs.github.com/es/repositories/working-with-files/managing-files/editing-files)
- [Agregar archivos a un repositorio](https://docs.github.com/es/repositories/working-with-files/managing-files/adding-a-file-to-a-repository)
- [Acerca de los archivos README](https://docs.github.com/es/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-readmes)
- [Sintaxis básica de Markdown](https://docs.github.com/es/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
- [Clonar un repositorio](https://docs.github.com/es/repositories/creating-and-managing-repositories/cloning-a-repository)
- [Invitar colaboradores a un repositorio personal](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/repository-access-and-collaboration/inviting-collaborators-to-a-personal-repository)

---

**Curso:** Dispositivos Lowtech e interfaces interactivas   
