int lengthOfLastWord(char* s) {

	size_t strSize = strlen(s);
	while (*(s + (strSize - 1)) == ' ') {
		*(s + (strSize - 1)) = '\0';
		strSize--;
	}

	size_t cnt = 0;
	while ((strSize > 0) && *(s + (strSize - 1)) != ' ') {
		*(s + (strSize - 1)) = '\0';
		strSize--;
		cnt++;
	}

	return cnt;
}