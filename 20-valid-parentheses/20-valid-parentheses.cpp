class Solution {
public:
	bool isValid(string s) {
		
		stack<char> st;
		map<char, char> m= {{'(', ')'}, {'{', '}'}, {'[', ']'}};

		for (int i = 0; i < s.length(); i++) {
			
			if (m.count(s[i])) {
				st.push(s[i]);
			}


			else {
				if (st.empty()) { return false; }
				else if (m[st.top()] != s[i]) { return false;}
				else { st.pop(); }
			}
		}

		if (st.empty()) { return true; }
		else { return false; }
	}
};