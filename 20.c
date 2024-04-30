bool isValid(char* s) {
    int i = 0;
    int j = 0;
    int count = 0;
    while (s[j] != '\0') {
        count++;
        j++;
    }
    char stk[count + 1];
    int tos = -1;
    while (s[i] != '\0') {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stk[++tos] = s[i];
        } else if (tos == -1) {
            return false;
        } else {

            if (s[i] == ')') {
                while (stk[tos] != '(' && tos > 0)
                    tos--;
                if (stk[tos] == '(') {
                    tos--;
                }
            }

            if (s[i] == '}') {
                while (stk[tos] != '{' && tos > 0)
                    tos--;
                if (stk[tos] == '{') {
                    tos--;
                }
            }

            if (s[i] == ']') {
                while (stk[tos] != '[' && tos > 0)
                    tos--;
                if (stk[tos] == '[') {
                    tos--;
                }
            }
        }
        i++;
    }
    if (tos != -1) {
        return false;
    } else {
        return true;
    }
}