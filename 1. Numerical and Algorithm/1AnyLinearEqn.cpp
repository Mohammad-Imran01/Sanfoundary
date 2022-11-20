#include <stdio.h>
#include <iostream>
#include <tchar.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

class cMatrix {
private:
    int m_row{};
    int m_col{};
    string m_name{};
    cMatrix();
public:
    double **m_pData;

    cMatrix(const string& name, int rows, int cols) 
    : m_name{name}, m_row{rows}, m_col{cols}       {
        m_pData = new double*[m_row];
        for(int i = 0; i < m_row; i++) {
            m_pData[i] = new double[m_col];
        }
        
        for(int i = 0; i < m_row; i++) {
            for(int j = 0; j < m_col; j++) {
                m_pData[i][j] = 0.0;
            }
        }
    }

    cMatrix(const cMatrix& other) {
        m_name = other.m_name;
        m_row = other.m_row;
        m_col = other.m_col;

        m_pData = new double*[m_row];
        for(int i = 0; i < m_row; i++) 
            m_pData[i] = new double[m_col];
        
        for(int i = 0; i < m_row; i++) {
            for(int j = 0; j < m_col; j++) {
                m_pData[i][j] = other[i][j];
            }
        }

    }
    ~cMatrix() {
        for(int i = 0; i < m_row; i++) 
        delete[] m_pData[i];
        delete[m_pData];
        m_row = m_col = 0;
    }
    void setName(const string& name) {
        m_name = name;
    }
    const string& getName() const {
        return m_name;
    }
    void GetInput() { 
        cin >> *this; 
    }

    void FillSimulatedInput() {
        cout << "Enter " << m_row << "x" << m_col << " inputs.\n";
        for(int i = 0; i < m_row; i++) {
            for(int j = 0; j < m_col; j++) {
                cin >> m_pData[i][j];
            }
        }
    }

    double Determinant() {
        double det{};
        double **pd = m_pData;

        switch(m_row) {
            case 2: {
                det = pd[0][0]*pd[1][1] - pd[0][1]*pd[1][0];
                return det;
            } break;
            case 3: {
             // det (A) = aei + bfg + cdh - afh - bdi - ceg.

                double a = pd[0][0];
                double b, c, d, e, f, g, h, i;
                b = pd[0][1];
                c = pd[0][2];
                d = pd[1][0];
                e = pd[1][1];
                f = pd[1][2];
                g = pd[2][0];
                h = pd[2][1];
                i = pd[2][2];

                double det = (a* e* i) + (b* f* g) + (c* d* h) -
                    (a* f* h) - (b* d* i) - (c* e* g);
                return det;
            } break;
            case 4: {
                cMatrix* t[4];
                for(int i = 0; i < 4; i++) { 
                    t[i] = new cMatrix(" ", 3, 3);
                }                
                
                for(int k = 0; k < 4; k++) {
                    for(int i = 1; i < 4; i++) {
                        int j1 = 0;
                        for(int j = 0; j < 4; j++) {
                            if (k == j) continue;
                            
                            t[k]->m_pData[i-1][j1++]
                            = this->m_pData[i][j]; 
                        }
                    }
                }
                double det = this->m_pData[0][0]* t[0]->Determinant()
                    - this->m_pData[0][1]* t[1]->Determinant()
                    + this->m_pData[0][2]* t[2]->Determinant()
                    - this->m_pData[0][3]* t[3]->Determinant();
                return det;
            } break;
            case 5: {
                cMatrix* temp[5];
                for(int i =0; i < 5; i++) 
                temp[i] = new cMatrix("", 4, 4);

                for(int k = 0; k < 5; k++) {
                    for(int i = 1; i < 5; i++) {
                        int j1 = 0;
                        for(int j = 0; j < 5; j++) {
                            if(k == j) continue;
                            temp[k]->m_pData[i-1][j1++] = 
                            this->m_pData[i][j];
                        }
                    }
                }
                double det = 
                   this->m_pData[0][0]* temp[0]->Determinant()
                 - this->m_pData[0][1]* temp[1]->Determinant()
                 + this->m_pData[0][2]* temp[2]->Determinant()
                 - this->m_pData[0][3]* temp[3]->Determinant()
                 + this->m_pData[0][4]* temp[4]->Determinant();
            } break;
            default : {
                int dm = m_row;
                cMatrix** temp = new cMatrix*[dm];
                for(int i = 0; i < dm; i++)
                 temp[i] = new cMatrix("", dm-1, dm-1);
                
                for(int k = 0; k < dm; k++) {
                    for(int i = 1; i < dm; i++) {
                        int j1{};
                        for(int j = 0; j < dm; j++) {
                            if (k == j) continue;
                            temp[k]->m_pData[i -1][j1++]
                             = this->m_pData[i][j];
                        }
                    }
                }
                double det = 0;
                for(int k = 0; k < dm; k++) {
                    if((k % 2) == 0) {
                        det = det+
                        (this->m_pData[0][k]* temp[k]->Determinant());
                    } else {
                        det = det - (this->m_pData[0][k]
                            * temp[k]->Determinant());
                    }  
                    for(int i =0; i < dm; i++) 
                        delete[] temp[i];
                    delete[] temp;
                    return det;
                } break;
            }
        }
    }

};

int main() {
    
}