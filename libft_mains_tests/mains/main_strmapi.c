char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char char_plus(unsigned int i, char c) {
    return c + 1;
}

int main() {
    char *input = "hello";
    char *result = ft_strmapi(input, &char_plus);
    printf("Input string: %s\n", input);
    printf("Result string: %s\n", result);
    free(result);
    return 0;
}

