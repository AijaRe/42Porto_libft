char	*ft_strdup(const char *s);

int main()
{
    char orig_str[12] = "Itsy bitsy!";
    char *dup_str;
    int o_len,d_len;

    dup_str = ft_strdup(orig_str);
    o_len = strlen(orig_str);
    d_len = strlen(dup_str);

    printf("Original String: '%s' (%d)\n",
            orig_str,o_len);
    printf("Duplicate string: '%s' (%d)\n",
            dup_str,d_len);

    return(0);
}
