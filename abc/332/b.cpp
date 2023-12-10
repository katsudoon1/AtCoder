#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, g, m;
    cin >> k >> g >> m;
    int g_naka, m_naka;
    g_naka = 0;
    m_naka = 0;
    for (int i = 0; i < k; i++) {
        if(g_naka == g) {
            g_naka = 0;
        }
        else if (m_naka == 0){
            m_naka = m;
        }
        else if (m_naka + g_naka <= g){
            g_naka += m_naka;
            m_naka = 0;
        }
        else {
            m_naka -= g - g_naka;
            g_naka = g;
        }
    }
    cout << g_naka << " " << m_naka;

}