# 🏊 C Piscine — C 03

> *Módulo sobre comparación y concatenación de strings de la C Piscine de 42. ¡Juntando cadenas!* 🔗

---

## 📋 Información general

| Campo | Detalle |
|---|---|
| 📦 Módulo | C 03 |
| 🔖 Versión | 5 |
| ⚙️ Compilación | `cc -Wall -Wextra -Werror` |
| 📏 Norma | `norminette -R CheckForbiddenSourceHeader` |

---

## ⚠️ Normas importantes

- ✅ Todos los archivos `.c` deben incluir el **header estándar de 42**
- ✅ El código debe cumplir la **Norma de 42**
- ✅ Las funciones **no deben terminar inesperadamente** (segfault, bus error, double free)
- ✅ Solo entregar los archivos indicados en cada ejercicio

---

## 📚 Ejercicios

### ✏️ Ejercicio 00 — `ft_strcmp`

| | |
|---|---|
| 📁 Directorio | `ex00/` |
| 📄 Archivo | `ft_strcmp.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strcmp` (`man strcmp`).

```c
int ft_strcmp(char *s1, char *s2);
```

---

### ✏️ Ejercicio 01 — `ft_strncmp`

| | |
|---|---|
| 📁 Directorio | `ex01/` |
| 📄 Archivo | `ft_strncmp.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strncmp` (`man strncmp`).

```c
int ft_strncmp(char *s1, char *s2, unsigned int n);
```

---

### ✏️ Ejercicio 02 — `ft_strcat`

| | |
|---|---|
| 📁 Directorio | `ex02/` |
| 📄 Archivo | `ft_strcat.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strcat` (`man strcat`).

```c
char *ft_strcat(char *dest, char *src);
```

---

### ✏️ Ejercicio 03 — `ft_strncat`

| | |
|---|---|
| 📁 Directorio | `ex03/` |
| 📄 Archivo | `ft_strncat.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strncat` (`man strncat`).

```c
char *ft_strncat(char *dest, char *src, unsigned int nb);
```

---

### ✏️ Ejercicio 04 — `ft_strstr`

| | |
|---|---|
| 📁 Directorio | `ex04/` |
| 📄 Archivo | `ft_strstr.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strstr` (`man strstr`).

```c
char *ft_strstr(char *str, char *to_find);
```

---

### ✏️ Ejercicio 05 — `ft_strlcat`

| | |
|---|---|
| 📁 Directorio | `ex05/` |
| 📄 Archivo | `ft_strlcat.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strlcat` (`man strlcat`).

```c
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
```

---

## 📦 Entrega

Entrega tu proyecto en tu **repositorio Git**. Solo se evaluará el trabajo del repositorio. Verifica los nombres de los archivos antes de hacer push. 🚀
