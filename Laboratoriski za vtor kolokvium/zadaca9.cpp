/*Од стандарден влез се внесува големината на еден фудбалски терен MxN. 
Потоа се внесува локацијата на играчот на тој терен (x_igrac, y_igrac),
па се внесува локацијата на топката (x_topka, y_topka) и 
локацијата на голот (x1_gol, y1_gol) (x2_gol, y2_gol). 
Од кога ќе се внесат овие вредности треба да се испечати фудбалскиот терен,
во фудбалскиот терен играчот е означен со карактер 'i', голот е означен со карактер ']'
и топката е означена со 'o', се останато се означува со '-'.
Ваша задача е најпрво да го испечатите на екран фудбалскиот терен според внесените вредности. 
Потоа од стандарден влез се внесуваат две вредности за поместувањето на топката за x координатата
и поместувањето на топката за у координатата. 
По поместувањето на топката доколку се наоѓа во голот се печати GOAL, 
доколку се наоѓа надвор од фудбалскиот терен се печати OUT и доколку се наоѓа во теренот, 
но не е гол се печати новата позиција на топката и фудбалскиот терен со новата позиција на топката. 
Напомена: За репрезентација на фудбалскиот терен користете матрица. 
*/

#include <iostream>
using namespace  std;

int main() {

    int m,n,x_igrac,y_igrac,x1_gol,y1_gol,x2_gol,y2_gol,x_topka,y_topka;
   cin>>m>>n;
   char matrica[m][n];
    cin>>x_igrac>>y_igrac;
    cin>>x_topka>>y_topka;
    cin>>x1_gol>>y1_gol;
    cin>>x2_gol>>y2_gol;
    int x_pomesti,y_pomesti;
 cin>>x_pomesti>>y_pomesti;
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      { if(i==x1_gol&&j==y1_gol||i==x2_gol&&j==y2_gol)
          {
          matrica[i][j]=']';
          }else
          if(i==x_topka&&j==y_topka){
              matrica[i][j]='o';
          }else
          if(i==x_igrac&&j==y_igrac)
          {
              matrica[i][j]='i';
          }else
          {
              matrica[i][j]='-';
          }
      }
  }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    if((x_pomesti+x_topka==x1_gol&&y_pomesti+y_topka==y1_gol)||(x_pomesti+x_topka==x2_gol&&y_pomesti+y_topka==y2_gol))
    {
        cout<<"GOAL!";
        return 0;
    }else if((x_pomesti+x_topka<=m)&&(x_pomesti+x_topka<=n))
    {
        cout<<"Novata pozicija na topkata e ("<<x_pomesti+x_topka<<", "<<x_pomesti+x_topka<<")"<<endl;
         matrica[x_topka][y_topka]='-';
         matrica[x_pomesti+x_topka][y_pomesti+y_topka]='o';
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrica[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    else
    {
        cout<<"OUT!";
    }
    return 0;
}
