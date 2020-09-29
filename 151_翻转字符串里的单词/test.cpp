#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s{ "  hello world!  " };
	auto begin = s.begin(), end = s.end();
	reverse(begin, end);

    int n = s.size();
    int idx = 0;
    for (int start = 0; start < n; ++start) {
        cout << s << "start=" << start << endl;
        if (s[start] != ' ') {
            // ��һ���հ��ַ�Ȼ��idx�ƶ�����һ�����ʵĿ�ͷλ��
            if (idx != 0) s[idx++] = ' ';

            // ѭ�����������ʵ�ĩβ
            int end = start;
            while (end < n && s[end] != ' ') s[idx++] = s[end++];

            // ��ת��������
            reverse(s.begin() + idx - (end - start), s.begin() + idx);

            // ����start��ȥ����һ������
            start = end;
        }
    }

}