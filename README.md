# Ft_printf

## 📚 Descrição

**Ft_printf** é uma recriação da função `printf` da biblioteca padrão C. Este projeto implementa uma versão simplificada mas funcional da função `printf`, suportando os principais especificadores de formato e gerenciando argumentos variáveis.

## 🎯 Objetivos

- Implementar uma função `printf` do zero
- Trabalhar com argumentos variáveis (`va_list`, `va_start`, `va_arg`, `va_end`)
- Suportar múltiplos especificadores de formato
- Gerenciar corretamente a memória e formatação de saída

## 🔧 Especificadores Suportados

- `%c` - Caractere
- `%s` - String
- `%p` - Ponteiro (endereço em hexadecimal)
- `%d` / `%i` - Inteiro decimal (com sinal)
- `%u` - Inteiro decimal sem sinal (unsigned)
- `%x` - Hexadecimal minúsculo
- `%X` - Hexadecimal maiúsculo
- `%%` - Caractere de porcentagem literal

## 📦 Estrutura do Projeto

```
printf/
├── ft_printf.c           # Função principal
├── ft_printf.h           # Header file
├── ft_putchar.c          # Impressão de caractere
├── ft_putstr.c           # Impressão de string
├── ft_putnbr.c           # Impressão de número
├── ft_putnbr_u.c         # Impressão de unsigned
├── ft_putnbr_hex.c       # Impressão hexadecimal
├── ft_putnbr_pointer.c   # Impressão de ponteiro
├── ft_itoa.c             # Conversão int para string
├── ft_utoa.c             # Conversão unsigned para string
├── ft_strlen.c           # Tamanho de string
├── ft_strchr.c           # Busca de caractere
└── Makefile
```

## 🛠️ Compilação

```bash
make        # Compila a biblioteca libftprintf.a
make clean  # Remove arquivos objeto
make fclean # Remove arquivos objeto e biblioteca
make re     # Recompila tudo
```

A biblioteca será gerada como `libftprintf.a`.

## 📖 Uso

### Incluindo no seu projeto

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char *str = "Hello";
    
    ft_printf("Número: %d\n", num);
    ft_printf("String: %s\n", str);
    ft_printf("Hexadecimal: %x\n", num);
    ft_printf("Ponteiro: %p\n", &num);
    
    return (0);
}
```

### Compilando com a biblioteca

```bash
gcc main.c -L. -lftprintf -o programa
```

## 💡 Exemplos

```c
// Caracteres e strings
ft_printf("Char: %c\n", 'A');           // Char: A
ft_printf("String: %s\n", "42");        // String: 42

// Números
ft_printf("Decimal: %d\n", 42);         // Decimal: 42
ft_printf("Unsigned: %u\n", 42);       // Unsigned: 42
ft_printf("Hex min: %x\n", 255);       // Hex min: ff
ft_printf("Hex mai: %X\n", 255);       // Hex mai: FF

// Ponteiros
int x = 42;
ft_printf("Ponteiro: %p\n", &x);       // Ponteiro: 0x7fff...

// Múltiplos argumentos
ft_printf("Num: %d, Str: %s, Hex: %x\n", 42, "test", 255);
```

## 🔍 Características

- **Compatibilidade**: Comportamento similar ao `printf` padrão
- **Retorno**: Retorna o número de caracteres impressos
- **Segurança**: Trata casos especiais (NULL, valores negativos, etc.)
- **Eficiência**: Implementação otimizada para cada tipo

## 📝 Notas Importantes

- A função retorna o número de caracteres impressos (igual ao `printf` original)
- Tratamento especial para `NULL` em strings (imprime "(null)")
- Ponteiros são impressos em hexadecimal com prefixo `0x`
- Números negativos são tratados corretamente para `%d` e `%i`

## 🏫 42 School

Este projeto é parte do currículo da 42 School e testa conhecimentos em:
- Argumentos variáveis (variadic functions)
- Formatação de strings
- Conversão de bases numéricas
- Gerenciamento de saída
