bool isValid(char* s) {

	size_t len = strlen(s);
	size_t stack_size = 0;
	char* stack = (char *)malloc(strlen(s) * sizeof(char));

	for (int i = 0; i < len; i++) {

		if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
			stack[stack_size++] = s[i];
		}
		else {
			if (stack_size == 0) return false;
			if (s[i] == ')') {
				if (stack[--stack_size] != '(') return false;
			}

			else if (s[i] == '}') {
				if (stack[--stack_size] != '{') return false;
			}

			else {
				if (stack[--stack_size] != '[') return false;
			}
		}
	}

	free(stack);
	
	if (stack_size == 0) return true;
	else return false;
}