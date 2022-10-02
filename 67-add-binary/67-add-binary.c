int getLen(char* a) {
	
	int i = 0;
	while (a[i] != '\0')
		i++;

	return i;
}


char* addBinary(char* a, char* b) {

	int a_size = getLen(a) - 1;
	int b_size = getLen(b) - 1;
	int res_size = a_size > b_size ? a_size+1 : b_size+1;
	char* result = malloc(res_size + 2);
	memset(result, '0', sizeof(char) * (res_size + 2));
	result[res_size + 1] = '\0';
	int value = 0;

	while (a_size >= 0 || b_size >= 0 || value > 0) {

		if (a_size >= 0) {
			value += (a[a_size] - '0');
			a_size--;
		}

		if (b_size >= 0) {
			value += (b[b_size] - '0');
			b_size--;
		}

		result[res_size--] = value%2 + '0';
		value /= 2;
	}

	if (result[0] == '0')
		return ++result;
	else
		return result;
}